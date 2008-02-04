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
MODULES =            "RespIcone5,RespIcone7,RespMcone5,RespMcone7,RespScone5,RespScone7,RespFKt4,RespFKt6"
EVAL_PATH =          "/uscms/home/kkousour/work/test/CMSSW_1_6_9_pre1/src/JetMETCorrections/MCJet/test/"
OUTPUT_PATH =        "/uscms_data/d1/kkousour/JetMETCorrections/MCJet/CSA07_152/rootfiles/"
PREFIX =             "Resp"
EMAIL =              "kkousour@FNAL.GOV"
#*********************************************************************
sample=0
while sample<21: #Starting the loop for different samples
    #************* Configuration file *********************
    cfg_body = "jetResponse"+str(sample)
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
    alg = 0
    while alg<NALG:#Starting the algorithm loop
      phrase = "module "+PREFIX+SHORT_JET_ALG_LIST[alg]+" = CaloJetResponse { \n"
      file.write(phrase)
      phrase = "string genjets = \""+JET_ALG_LIST[alg]+"GenJets\" \n"
      file.write(phrase)
      phrase = "string recjets = \""+JET_ALG_LIST[alg]+"CaloJets\" \n"
      file.write(phrase)  
      file.write("vdouble GenJetPtBins = {5,10,12,15,20,27,35,45,57,72,90,120,150,200,300,400,550,750,1000,1500,2000,2500,3000,3500,4000,4500,5000,10000} \n")
      phrase ='''vdouble EtaBoundaries = {-5.191,-4.889,-4.716,-4.538,-4.363,-4.191,-4.013,-3.839,-3.664,
                                        -3.489,-3.314,-3.139,-2.964,-2.853,-2.650,-2.500,-2.322,-2.172,
                                        -2.043,-1.930,-1.830,-1.740,-1.653,-1.566,-1.479,-1.392,-1.305,
                                        -1.218,-1.131,-1.044,-0.957,-0.879,-0.783,-0.696,-0.609,-0.522,
                                        -0.435,-0.348,-0.261,-0.174,-0.087,0.000,0.087,0.174,0.261,0.348,
                                         0.435,0.522,0.609,0.696,0.783,0.879,0.957,1.044,1.131,1.218,1.305,
                                         1.392,1.479,1.566,1.653,1.740,1.830,1.930,2.043,2.172,2.322,2.500,
                                         2.650,2.853,2.964,3.139,3.314,3.489,3.664,3.839,4.013,4.191,4.363,4.538,
                                         4.716,4.889,5.191} \n'''
      file.write(phrase)
      file.write("double MatchRadius = 0.25 \n") 
      file.write("double RecJetPtMin = 1.0 \n")
      file.write("int32  NJetMax = 2 \n")
      phrase = "string HistogramFile = '"+OUTPUT_PATH+PREFIX+SHORT_JET_ALG_LIST[alg]+"_"+str(sample)+".root' \n"
      file.write(phrase) 
      file.write("} \n")
      alg+=1
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

