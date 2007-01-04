#!/bin/tcsh
#
# Make the corrected response analysis root scripts, and the running scripts, 
# from the MC5 version.  From JetMETCorrections/MCJet/test do a 
#     source makeCorrResponseScripts.csh
# and the script will populate a subdirectory called cor with the scripts,
# in their own algorithm sub-directories.
#
# Make the cor directory structure and populate it with the scripts
mkdir -p cor/MC5/tmp
cp CorrResponse*.C cor/MC5
cp runCorrResponse.csh cor/MC5
#
# Midpoint Cone R=0.7
#
mkdir -p cor/MC7/tmp
cp runCorrResponse.csh cor/MC7
cd cor/MC5
cat > sedscript <<+EOF
s/R05/R07/
s/R=0.5/R=0.7/
+EOF
foreach file (CorrResponse*.C)
  sed -f sedscript $file > ../MC7/$file
end
rm sedscript
cd ../..
#
# Iterative Cone R=0.5
#
mkdir -p cor/IC5/tmp
cp runCorrResponse.csh cor/IC5
cd cor/MC5
cat > sedscript <<+EOF
s/MidPoint/Iter/
s/Midpoint/Iterative/
+EOF
foreach file (CorrResponse*.C)
  sed -f sedscript $file > ../IC5/$file
end
rm sedscript
cd ../..
#
# KT D=1.0
#
mkdir -p cor/KT/tmp
cp runCorrResponse.csh cor/KT
cd cor/MC5
cat > sedscript <<+EOF
s/MidPoint_R05/Kt/
s/Midpoint R=0.5/Kt D=1.0/
+EOF
foreach file (CorrResponse*.C)
  sed -f sedscript $file > ../KT/$file
end
rm sedscript
cd ../..
#
cd cor
