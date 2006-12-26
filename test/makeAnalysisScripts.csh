#!/bin/tcsh
#
# Make the response analysis root scripts, and the running scripts, 
# from the MC5 version.  From JetMETCorrections/MCJet/test do a 
#     source makeAnalysisScripts.csh
# and the script will populate a subdirectory called ana with the scripts,
# in their own algorithm sub-directories.
#
# Make the ana directory structure and populate it with the scripts
mkdir -p ana/MC5/tmp
cp an*.C ana/MC5
cp runAna.csh ana/MC5
#
# Midpoint Cone R=0.7
#
mkdir -p ana/MC7/tmp
cp runAna.csh ana/MC7
cd ana/MC5
cat > sedscript <<+EOF
s/R05/R07/
+EOF
foreach file (an*.C)
  sed -f sedscript $file > ../MC7/$file
end
rm sedscript
cd ../..
#
# Iterative Cone R=0.5
#
mkdir -p ana/IC5/tmp
cp runAna.csh ana/IC5
cd ana/MC5
cat > sedscript <<+EOF
s/MidPoint/Iter/
+EOF
foreach file (an*.C)
  sed -f sedscript $file > ../IC5/$file
end
rm sedscript
cd ../..
#
# KT D=1.0
#
mkdir -p ana/KT/tmp
cp runAna.csh ana/KT
cd ana/MC5
cat > sedscript <<+EOF
s/MidPoint_R05/Kt/
+EOF
foreach file (an*.C)
  sed -f sedscript $file > ../KT/$file
end
rm sedscript
cd ../..
#
cd ana
