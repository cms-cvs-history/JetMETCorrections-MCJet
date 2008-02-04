#****************************************************************
#               Dr. Konstantinos Kousouris                      *
#                 Fermilab, Batavia, IL                         *
#****************************************************************
#! /usr/bin/env python
import os
#******************   definitions  **********************************
DATA_PATH =          "/uscms_data/d1/cmsjtmet/kkousour/"
LOG_FILES_PATH =     "/uscms_data/d1/kkousour/trash/"
NALG = 8
SHORT_JET_ALG_LIST = ["Icone5","Icone7","Mcone5","Mcone7","FKt4","FKt6","Scone5","Scone7"]
JET_ALG_LIST =       ["iterativeCone5","iterativeCone7","midPointCone5","midPointCone7","fastjet4","fastjet6","sisCone5","sisCone7"]
MODULES =            "L2JetCorJetIcone5,L3JetCorJetIcone5,L2L3CorIcone5_vs_eta,L2L3CorIcone5_vs_pt"
EVAL_PATH =          "/uscms/home/kkousour/work/test/CMSSW_1_6_9_pre1/src/JetMETCorrections/MCJet/test/"
OUTPUT_PATH =        ""
PREFIX =             "L2L3Cor"
EMAIL =              "kkousour@FNAL.GOV"
#*********************************************************************
sample=0
while sample<21: #Starting the loop for different samples
    #************* Configuration file *********************
    cfg_body = "applyL2L3Cor"+str(sample)
    cfg_name = cfg_body+".cfg" 
    file = open(cfg_name,'w')
    file.write("process ANALYSIS  = { \n")
    file.write("include \"FWCore/MessageService/data/MessageLogger.cfi\" \n") 
    file.write("replace MessageLogger.cerr.FwkReport.reportEvery = 2000 \n")
    file.write("untracked PSet maxEvents = {untracked int32 input = -1} \n") 
    file.write("source = PoolRASource { \n")
    file.write("untracked vstring fileNames = { \n")
    phrase = "'file:"+DATA_PATH+"Compressed_sample"+str(sample)+".root' \n"
    file.write(phrase) 
    file.write("} \n")
    file.write("} \n")
    file.write("include \"JetMETCorrections/MCJet/data/L2RelativeCorrection152.cff\" \n")
    file.write("include \"JetMETCorrections/MCJet/data/L3AbsoluteCorrection152.cff\" \n")
    alg = 0
    while alg<NALG: #Starting the algorithm loop
      phrase = "module "+PREFIX+SHORT_JET_ALG_LIST[alg]+"_vs_eta = CorJetResponse { \n"
      file.write(phrase)
      phrase = "string genjets = \""+JET_ALG_LIST[alg]+"GenJets\" \n"
      file.write(phrase)
      phrase = "string recjets = \"L3JetCorJet"+SHORT_JET_ALG_LIST[alg]+"\" \n"
      file.write(phrase)  
      file.write("vdouble JetPtBins = {20,30,50,75,100,150,300,500,750,1000,1500,2000,6000} \n")
      file.write("vdouble EtaBoundaries = {-5., -4.5, -4., -3.5, -3., -2.6, -2.2, -1.8, -1.3, -1., -0.7, -0.4,  0., 0.4, 0.7, 1., 1.3, 1.8, 2.2, 2.6, 3., 3.5, 4., 4.5, 5.} \n")
      file.write("double MatchRadius = 0.25 \n") 
      file.write("double RecJetPtMin = 1.0 \n")
      file.write("int32  NJetMax = 100 \n")
      phrase = "string HistogramFile = '"+OUTPUT_PATH+PREFIX+SHORT_JET_ALG_LIST[alg]+"_vs_eta_"+str(sample)+".root' \n"
      file.write(phrase) 
      file.write("} \n")

      phrase = "module "+PREFIX+SHORT_JET_ALG_LIST[alg]+"_vs_pt = CorJetResponse { \n"
      file.write(phrase)
      phrase = "string genjets = \""+JET_ALG_LIST[alg]+"GenJets\" \n"
      file.write(phrase)
      phrase = "string recjets = \"L3JetCorJet"+SHORT_JET_ALG_LIST[alg]+"\" \n"
      file.write(phrase)  
      file.write("vdouble JetPtBins = {10,20,30,40,50,75,100,150,200,300,400,500,750,1000,1500,2000,2500,3000,3500,4000} \n")
      file.write("vdouble EtaBoundaries = {-5., -3., -1.3, 0., 1.3, 3., 5.} \n")
      file.write("double MatchRadius = 0.25 \n") 
      file.write("double RecJetPtMin = 1.0 \n")
      file.write("int32  NJetMax = 100 \n")
      phrase = "string HistogramFile = '"+OUTPUT_PATH+PREFIX+SHORT_JET_ALG_LIST[alg]+"_vs_pt_"+str(sample)+".root' \n"
      file.write(phrase) 
      file.write("} \n")
      alg+=1
    file.write("es_prefer L2JetCorrectorIcone5 = L2RelativeCorrectionService {} \n")
    phrase = "path p1 = {"+MODULES+"} \n"
    file.write(phrase)
    file.write("} \n")
    file.close()
  
    #******************  creating the executable  *********************
    csh_name = cfg_body+".csh"
    file = open(csh_name,'w')
    file.write("#!/bin/tcsh \n")
    file.write("date \n")
    file.write("source /uscmst1/prod/sw/cms/setup/cshrc prod \n")
    phrase = "cd "+EVAL_PATH+" \n"
    file.write(phrase)
    file.write("eval `scramv1 runtime -csh` \n")
    phrase = "cmsRun "+cfg_name+" >&! "+LOG_FILES_PATH+"logfile"+str(sample)+" \n"
    file.write(phrase)
    file.write("date \n")
    file.close()
    command = "chmod a+x "+csh_name
    os.system(command)
    #******************  creating the condor job  *********************
    name = "CondorJob_"+PREFIX+str(sample)
    file = open(name,'w')
    file.write("universe = vanilla \n")
    phrase = "Executable = "+csh_name+" \n"
    file.write(phrase)
    file.write("Requirements = Memory >= 199 &&OpSys == \"LINUX\"&& (Arch != \"DUMMY\" ) \n")
    file.write("Should_Transfer_Files = NO \n")
    phrase = "Output = "+LOG_FILES_PATH+PREFIX+"_$(Cluster).stdout \n"
    file.write(phrase)
    phrase = "Error = "+LOG_FILES_PATH+PREFIX+"_$(Cluster).stderr \n"
    file.write(phrase)
    phrase = "Log = "+LOG_FILES_PATH+PREFIX+"_$(Cluster).condorlog \n"
    file.write(phrase)
    phrase = "notify_user = "+EMAIL+" \n"
    file.write(phrase)
    file.write("Queue 1 \n")
    file.close()

    sample +=1
print "Done........" #End of sample loop               

