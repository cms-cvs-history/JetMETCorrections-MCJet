#!/bin/tcsh
date
source /afs/fnal.gov/files/code/cms/setup/cshrc uaf
cd /uscms_data/d1/rharris/CMSSW_1_0_3/src/JetMETCorrections/MCJet/test
eval `scramv1 runtime -csh`
cmsRun CorJetCSA06_MidPointR5.cfg >&! CorJetCSA06_MidPointR5.log
date
