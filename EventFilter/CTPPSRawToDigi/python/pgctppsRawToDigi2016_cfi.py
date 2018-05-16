import FWCore.ParameterSet.Config as cms

# modify CTPPS 2016 raw-to-digi modules
from Configuration.Eras.Modifier_ctpps_2016_cff import ctpps_2016

from EventFilter.CTPPSRawToDigi.ctppsRawToDigi_cff import *

from EventFilter.CTPPSRawToDigi.totemRPRawToDigi_cfi import totemRPRawToDigi
totemRPRawToDigi.rawDataTag = cms.InputTag("ctppsTotemRawData")
from EventFilter.CTPPSRawToDigi.totemTriggerRawToDigi_cfi import totemTriggerRawToDigi
totemTriggerRawToDigi.rawDataTag = cms.InputTag("rawDataCollector")
from Configuration.Eras.Modifier_ctpps_2016_cff import ctpps_2016
from EventFilter.CTPPSRawToDigi.ctppsDiamondRawToDigi_cfi import ctppsDiamondRawToDigi
ctppsDiamondRawToDigi.rawDataTag = cms.InputTag("rawDataCollector")
from EventFilter.CTPPSRawToDigi.ctppsPixelRawToDigi_cfi import ctppsPixelDigis
ctppsPixelDigis.inputLabel = cms.InputTag("ctppsPixelRawData")
ctpps_2016.toReplaceWith(ctppsRawToDigi, ctppsRawToDigi.copyAndExclude([ctppsDiamondRawToDigi]))
ctpps_2016.toReplaceWith(ctppsRawToDigi, ctppsRawToDigi.copyAndExclude([ctppsPixelDigis]))


