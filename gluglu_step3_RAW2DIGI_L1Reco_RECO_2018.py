# Auto generated configuration file
# using: 
# Revision: 1.19 
# Source: /local/reps/CMSSW/CMSSW/Configuration/Applications/python/ConfigBuilder.py,v 
# with command line options: step3 --conditions auto:phase1_2017_realistic -n 10 --era Run2_2017 --eventcontent RECOSIM,MINIAODSIM,DQM --runUnscheduled -s RAW2DIGI,L1Reco,RECO,EI,PAT,VALIDATION:@standardValidation+@miniAODValidation,DQM:@standardDQM+@miniAODDQM --datatier GEN-SIM-RECO,MINIAODSIM,DQMIO --geometry DB:Extended --filein file:step2.root --fileout file:step3.root
import FWCore.ParameterSet.Config as cms

from Configuration.StandardSequences.Eras import eras

process = cms.Process('RECO',eras.Run2_2018)

# import of standard configurations
process.load('Configuration.StandardSequences.Services_cff')
process.load('SimGeneral.HepPDTESSource.pythiapdt_cfi')
process.load('FWCore.MessageService.MessageLogger_cfi')
process.load('Configuration.EventContent.EventContent_cff')
process.load('SimGeneral.MixingModule.mixNoPU_cfi')
process.load('Configuration.StandardSequences.GeometryRecoDB_cff')
process.load('Configuration.StandardSequences.MagneticField_cff')
process.load('Configuration.StandardSequences.RawToDigi_cff')
process.load('Configuration.StandardSequences.L1Reco_cff')
process.load('Configuration.StandardSequences.ctppsReconstruction2018_cff')
process.load('CommonTools.ParticleFlow.EITopPAG_cff')
process.load('Configuration.StandardSequences.FrontierConditions_GlobalTag_cff')


process.maxEvents = cms.untracked.PSet(
    input = cms.untracked.int32(-1)
)

# Input source
process.source = cms.Source("PoolSource",
    fileNames = cms.untracked.vstring('file:GluGlu_DIGI_DIGI2RAW_2018.root'),
    secondaryFileNames = cms.untracked.vstring()
)

process.options = cms.untracked.PSet(

)

# Production Info
process.configurationMetadata = cms.untracked.PSet(
    annotation = cms.untracked.string('step3 nevts:10'),
    name = cms.untracked.string('Applications'),
    version = cms.untracked.string('$Revision: 1.19 $')
)

# Output definition

process.output = cms.OutputModule("PoolOutputModule",
    fileName = cms.untracked.string('file:GluGlu_RAW2DIGI_L1Reco_RECO_2018.root'),
    outputCommands = cms.untracked.vstring("drop *","keep PSimHits_*_*_*","keep CTPPS*_*_*_*","keep *_ak4*_*_*")
)

# Additional output definition

# Other statements
process.mix.playback = True
process.mix.digitizers = cms.PSet()
for a in process.aliases: delattr(process, a)
process.RandomNumberGeneratorService.restoreStateLabel=cms.untracked.string("randomEngineStateProducer")
from Configuration.AlCa.GlobalTag import GlobalTag
process.GlobalTag = GlobalTag(process.GlobalTag, '101X_upgrade2018_realistic_v7', '')
      
process.GlobalTag.toGet = cms.VPSet(
    cms.PSet(record = cms.string("CTPPSPixelDAQMappingRcd"),
             tag = cms.string("CTPPSPixelDAQMapping_v16Mar18"),
             connect = cms.string("sqlite_file:ctppspixgainsv27Mar.db")
             ),
    cms.PSet(
        record = cms.string('CTPPSPixelAnalysisMaskRcd'),
        tag = cms.string("CTPPSPixelAnalysisMask_v16Mar18"),
        label = cms.untracked.string(""),
        connect = cms.string("sqlite_file:ctppspixgainsv27Mar.db")
        ),
    cms.PSet(
        record = cms.string('CTPPSPixelGainCalibrationsRcd'),
        tag = cms.string("CTPPSPixelGainCalibrations_v27Mar18"),
        connect = cms.string("sqlite_file:ctppspixgainsv27Mar.db")
        )
)

# modify CTPPS 2018 raw-to-digi modules

from Configuration.Eras.Modifier_ctpps_2016_cff import ctpps_2016

from Configuration.StandardSequences.RawToDigi_cff import RawToDigi
process.load('EventFilter.CTPPSRawToDigi.ctppsRawToDigi_cff')
from EventFilter.CTPPSRawToDigi.ctppsRawToDigi_cff import *
ctpps_2016.toReplaceWith(ctppsRawToDigi, ctppsRawToDigi.copyAndExclude([ctppsDiamondRawToDigi]))
ctpps_2016.toReplaceWith(ctppsRawToDigi, ctppsRawToDigi.copyAndExclude([totemTimingRawToDigi]))
ctpps_2016.toReplaceWith(ctppsRawToDigi, ctppsRawToDigi.copyAndExclude([totemRPRawToDigi]))
ctpps_2016.toReplaceWith(ctppsRawToDigi, ctppsRawToDigi.copyAndExclude([totemTriggerRawToDigi]))

 
# Path and EndPath definitions
process.raw2digi_step = cms.Path(process.RawToDigi)
process.L1Reco_step = cms.Path(process.L1Reco)
process.reconstruction_step = cms.Path(process.reconstruction)
process.output_step = cms.EndPath(process.output)

# Schedule definition
process.schedule = cms.Schedule(process.raw2digi_step,process.L1Reco_step,process.reconstruction_step,process.output_step)
#from PhysicsTools.PatAlgos.tools.helpers import associatePatAlgosToolsTask
#associatePatAlgosToolsTask(process)

# customisation of the process.

# Automatic addition of the customisation function from SimGeneral.MixingModule.fullMixCustomize_cff
from SimGeneral.MixingModule.fullMixCustomize_cff import setCrossingFrameOn 

#call to customisation function setCrossingFrameOn imported from SimGeneral.MixingModule.fullMixCustomize_cff
process = setCrossingFrameOn(process)

# End of customisation functions
#do not add changes to your config after this point (unless you know what you are doing)
from FWCore.ParameterSet.Utilities import convertToUnscheduled
process=convertToUnscheduled(process)

# customisation of the process.

# End of customisation functions

# Customisation from command line

# Add early deletion of temporary data products to reduce peak memory need
from Configuration.StandardSequences.earlyDeleteSettings_cff import customiseEarlyDelete
process = customiseEarlyDelete(process)
# End adding early deletion
