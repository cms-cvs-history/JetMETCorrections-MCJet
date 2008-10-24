import FWCore.ParameterSet.Config as cms

process = cms.Process("Ana")
process.load("FWCore.MessageService.MessageLogger_cfi")
#############   Set the number of events #############
process.maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(100)
)
#############   Define the source file ###############
#process.load("JetMETCorrections.MCJet.QCDDiJet_50_80_cfi")
process.source = cms.Source("PoolSource",
    fileNames = cms.untracked.vstring('/store/mc/Summer08/QCDDiJetPt50to80/GEN-SIM-RECO/IDEAL_V9_v3/0001/0079B347-9E9A-DD11-ADD9-003048C17FC0.root')
)
#############   Include the jet corrections ##########
process.load("JetMETCorrections.Configuration.L2L3Corrections_iCSA08_S156_cff")
# set the record's IOV. Must be defined once. Choose ANY correction service. #
process.prefer("L2L3JetCorrectorIcone5")
#############    CaloJets ############################
process.caloMctruthTree = cms.EDAnalyzer("CaloMCTruthTreeProducer",
    jets               = cms.string('L2L3CorJetIcone5'),
    genjets            = cms.string('iterativeCone5GenJets'),
    histogramFile      = cms.string('ic05CaloClosureMctruthTree.root')
)
#############    PFJets   ############################
process.pfMctruthTree = cms.EDAnalyzer("PFMCTruthTreeProducer",
    jets               = cms.string('L2L3CorJetPFIcone5'),
    genjets            = cms.string('iterativeCone5GenJets'),
    histogramFile      = cms.string('ic05PFClosureMctruthTree.root')
)
#############   Path       ###########################
process.p = cms.Path(process.L2L3CorJetIcone5 * process.caloMctruthTree * process.L2L3CorJetPFIcone5 * process.pfMctruthTree)
#############   Format MessageLogger #################
process.MessageLogger.cerr.FwkReport.reportEvery = 10
