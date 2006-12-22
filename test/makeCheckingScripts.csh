#!/bin/tcsh
#
# Make the response checking root scripts, and the running scripts, 
# from the MC5 version.  From JetMETCorrections/MCJet/test do a 
#     source makeCheckScripts.csh
# and the script will populate a subdirectory called check with the scripts,
# and put you in that sub-directory.  From there you source the runChecks
# scripts see the response distributions.
#
# Make the check directory structure and populate it with the 
# appropriate scripts
#
mkdir -p check
cd check
cp ../MC5*.C .
cp ../runChecksMC5.csh .
cp ../SimJetResponseMidPoint_R05_all.root .
#
# Midpoint Cone R=0.7
#
cat > sedscript1 <<+EOF
s/R05/R07/
s/R=0.5/R=0.7/
s/MC5/MC7/
+EOF
sed -f sedscript1 MC5eta2487-2690Resp.C > MC7eta2487-2690Resp.C  
sed -f sedscript1 MC5eta2295-2487Resp.C > MC7eta2295-2487Resp.C
sed -f sedscript1 MC5eta2046-2295Resp.C > MC7eta2046-2295Resp.C
sed -f sedscript1 MC5eta1757-2046Resp.C > MC7eta1757-2046Resp.C
sed -f sedscript1 MC5eta1496-1757Resp.C > MC7eta1496-1757Resp.C
sed -f sedscript1 MC5eta1260-1496Resp.C > MC7eta1260-1496Resp.C
sed -f sedscript1 MC5eta4400-4800Resp.C > MC7eta4400-4800Resp.C
sed -f sedscript1 MC5eta4000-4400Resp.C > MC7eta4000-4400Resp.C
sed -f sedscript1 MC5eta3284-4000Resp.C > MC7eta3284-4000Resp.C
sed -f sedscript1 MC5eta2690-2916Resp.C > MC7eta2690-2916Resp.C
sed -f sedscript1 MC5eta2916-3284Resp.C > MC7eta2916-3284Resp.C
sed -f sedscript1 MC5eta991-1260Resp.C > MC7eta991-1260Resp.C
sed -f sedscript1 MC5eta441-751Resp.C > MC7eta441-751Resp.C
sed -f sedscript1 MC5eta751-991Resp.C > MC7eta751-991Resp.C
sed -f sedscript1 MC5eta226-441Resp.C > MC7eta226-441Resp.C
sed -f sedscript1 MC5eta0-226Resp.C > MC7eta0-226Resp.C
rm sedscript1
sed s/MC5/MC7/g runChecksMC5.csh > runChecksMC7.csh
cp ../SimJetResponseMidPoint_R07_all.root .
#
# Iterative Cone R=0.5
#
cat > sedscript2 <<+EOF2
s/MidPoint/Iter/
s/Midpoint/Iterative/
s/MC5/IC5/
+EOF2
sed -f sedscript2 MC5eta2487-2690Resp.C > IC5eta2487-2690Resp.C  
sed -f sedscript2 MC5eta2295-2487Resp.C > IC5eta2295-2487Resp.C
sed -f sedscript2 MC5eta2046-2295Resp.C > IC5eta2046-2295Resp.C
sed -f sedscript2 MC5eta1757-2046Resp.C > IC5eta1757-2046Resp.C
sed -f sedscript2 MC5eta1496-1757Resp.C > IC5eta1496-1757Resp.C
sed -f sedscript2 MC5eta1260-1496Resp.C > IC5eta1260-1496Resp.C
sed -f sedscript2 MC5eta4400-4800Resp.C > IC5eta4400-4800Resp.C
sed -f sedscript2 MC5eta4000-4400Resp.C > IC5eta4000-4400Resp.C
sed -f sedscript2 MC5eta3284-4000Resp.C > IC5eta3284-4000Resp.C
sed -f sedscript2 MC5eta2690-2916Resp.C > IC5eta2690-2916Resp.C
sed -f sedscript2 MC5eta2916-3284Resp.C > IC5eta2916-3284Resp.C
sed -f sedscript2 MC5eta991-1260Resp.C > IC5eta991-1260Resp.C
sed -f sedscript2 MC5eta441-751Resp.C > IC5eta441-751Resp.C
sed -f sedscript2 MC5eta751-991Resp.C > IC5eta751-991Resp.C
sed -f sedscript2 MC5eta226-441Resp.C > IC5eta226-441Resp.C
sed -f sedscript2 MC5eta0-226Resp.C > IC5eta0-226Resp.C
rm sedscript2
sed s/MC5/IC5/g runChecksMC5.csh > runChecksIC5.csh
cp ../SimJetResponseIter_R05_all.root .
#
# KT D=1.0
#
cat > sedscript3 <<+EOF3
s/MidPoint_R05/Kt/
s/Midpoint Cone R=0.5/Kt D=1.0/
s/MC5/KT/
+EOF3
sed -f sedscript3 MC5eta2487-2690Resp.C > KTeta2487-2690Resp.C  
sed -f sedscript3 MC5eta2295-2487Resp.C > KTeta2295-2487Resp.C
sed -f sedscript3 MC5eta2046-2295Resp.C > KTeta2046-2295Resp.C
sed -f sedscript3 MC5eta1757-2046Resp.C > KTeta1757-2046Resp.C
sed -f sedscript3 MC5eta1496-1757Resp.C > KTeta1496-1757Resp.C
sed -f sedscript3 MC5eta1260-1496Resp.C > KTeta1260-1496Resp.C
sed -f sedscript3 MC5eta4400-4800Resp.C > KTeta4400-4800Resp.C
sed -f sedscript3 MC5eta4000-4400Resp.C > KTeta4000-4400Resp.C
sed -f sedscript3 MC5eta3284-4000Resp.C > KTeta3284-4000Resp.C
sed -f sedscript3 MC5eta2690-2916Resp.C > KTeta2690-2916Resp.C
sed -f sedscript3 MC5eta2916-3284Resp.C > KTeta2916-3284Resp.C
sed -f sedscript3 MC5eta991-1260Resp.C > KTeta991-1260Resp.C
sed -f sedscript3 MC5eta441-751Resp.C > KTeta441-751Resp.C
sed -f sedscript3 MC5eta751-991Resp.C > KTeta751-991Resp.C
sed -f sedscript3 MC5eta226-441Resp.C > KTeta226-441Resp.C
sed -f sedscript3 MC5eta0-226Resp.C > KTeta0-226Resp.C
rm sedscript3
sed s/MC5/KT/g runChecksMC5.csh > runChecksKT.csh
cp ../SimJetResponseKt_all.root .
