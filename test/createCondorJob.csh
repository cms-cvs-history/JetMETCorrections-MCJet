#!/bin/tcsh
#
# This will create and sumit a condor job to make hisograms of the jet 
# response for the midpoint R=0.5 algorithm. It should be run from the
# JetMETCorrections/MCJet/test directory once the file SimJet_MidPointR5.cfg
# has been prepared.
#
# usage: source createCondorJob.csh
#
# Then to submit the job, condor_submit CondorJob_MidPointR5 
#
mkdir -p log
#
# Make the condor job file
cat > CondorJob_MidPointR5 <<+EOF
universe = vanilla
Executable = SimJet_MidPointR5.csh
Requirements = Memory >= 199 &&OpSys == "LINUX"&& (Arch != "DUMMY" )
Should_Transfer_Files = NO
+EOF
echo 'Output = '$PWD/log/'SimJet_MidPointR5_$(Cluster).stdout' >> CondorJob_MidPointR5
echo 'Error = '$PWD/log/'SimJet_MidPointR5_$(Cluster).stderr' >> CondorJob_MidPointR5
echo 'Log = '$PWD/log/'SimJet_MidPointR5_$(Cluster).condorlog' >> CondorJob_MidPointR5
cat >> CondorJob_MidPointR5 <<+EOF2
notify_user = ${LOGNAME}@FNAL.GOV
Queue 1
+EOF2
#
# Make the executable script that the condor job file submits
#
cat > SimJet_MidPointR5.csh <<+EOF3
#!/bin/tcsh
date
source /afs/fnal.gov/files/code/cms/setup/cshrc uaf
+EOF3
echo 'cd '$PWD >> SimJet_MidPointR5.csh 
echo 'eval `scramv1 runtime -csh`' >> SimJet_MidPointR5.csh
cat >> SimJet_MidPointR5.csh <<+EOF4
cmsRun SimJet_MidPointR5.cfg >&! log/SimJet_MidPointR5.log
date
+EOF4
chmod 755 SimJet_MidPointR5.csh
#
# Show what we made
echo "Condor Job is"
echo "-----------------------------------------------------"
cat CondorJob_MidPointR5
echo "-----------------------------------------------------"
echo " "
echo "Condor excecutable script is"
echo "-----------------------------------------------------"
cat SimJet_MidPointR5.csh
echo "-----------------------------------------------------"
