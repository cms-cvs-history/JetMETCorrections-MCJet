#!/bin/tcsh
#
# Procedure for checking jet corrections.
#
# 1) Make corrected jet response histograms in test area:
#    example is condor_submit CorJetCSA06_MidPointR5_Condor
#
# 2) run the following commands to setup for checking corrections
#
mkdir -p corrected/tmp/1sigma
cp CorrectedJetResponseMidPoint_R05_all.root CorrectedJetResponseMidPoint_R05_1sigma_all.root
cp CorrResponse*.C corrected
cd corrected
#
# 3) interatively run the corrected response fits and plots:
# root.exe CorrResponse_01.C
# root.exe CorrResponse_02.C
# etc.
#
# This makes gif files of the fits in corrected/tmp/1sigma
# This makes gif files of corrected response vs. Gen Jet Et in subdir corrected 
# This makes CorrResponse*.dat files in subdir corrected
#
