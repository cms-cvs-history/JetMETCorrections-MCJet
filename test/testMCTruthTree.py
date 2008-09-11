import FWCore.ParameterSet.Config as cms

process = cms.Process("Ana")
process.load("FWCore.MessageService.MessageLogger_cfi")
#############   Set the number of events #############
process.maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(100)
)
#############   Define the source file ###############
process.source = cms.Source("PoolSource",
    fileNames = cms.untracked.vstring(
'/store/relval/CMSSW_2_1_2/RelValQCD_Pt_80_120/GEN-SIM-DIGI-RAW-HLTDEBUG-RECO/IDEAL_V6_10TeV_v7/0000/044A7A03-BE6E-DD11-B3C0-000423D98B08.root')
)
#############    CaloJets ############################
process.caloMctruthTree = cms.EDAnalyzer("CaloMCTruthTreeProducer",
    jets               = cms.string('iterativeCone5CaloJets'),
    genjets            = cms.string('iterativeCone5GenJets'),
    histogramFile      = cms.string('caloMCTruthTree.root')
)
#############    PFJets   ############################
process.pfMctruthTree = cms.EDAnalyzer("PFMCTruthTreeProducer",
    jets               = cms.string('iterativeCone5PFJets'),
    genjets            = cms.string('iterativeCone5GenJets'),
    histogramFile      = cms.string('pfMCTruthTree.root')
)
#############   Path       ###########################
process.p = cms.Path(process.caloMctruthTree * process.pfMctruthTree)
#############   Format MessageLogger #################
process.MessageLogger.cerr.FwkReport.reportEvery = 10
