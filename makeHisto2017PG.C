{
TFile *f = new TFile("histo2017PG.root","RECREATE"); 
f->cd(); 

/*
Events->Draw("recoPFJets_ak4PFJets__RECO.obj.m_state.p4Polar_.fCoordinates.fPt>>h1","recoPFJets_ak4PFJets__RECO.obj.m_state.p4Polar_.fCoordinates.fPt<300.");
h1->SetFillColor(4);
h1->SetTitle("Jets distributions - Particle Gun 2017 ; Jets p_{T} [GeV]");

Events->Draw("recoPFJets_ak4PFJets__RECO.obj.m_state.p4Polar_.fCoordinates.fEta>>h2");
h2->SetFillColor(4);
h2->SetTitle("Jets distributions - Particle Gun 2017 ; Jets #eta");

Events->Draw("recoPFJets_ak4PFJets__RECO.obj.m_state.p4Polar_.fCoordinates.fPhi>>h3");
h3->SetFillColor(4);
h3->SetTitle("Jets distributions - Particle Gun 2017 ; Jets #phi");
*/

Events->Draw("PSimHits_g4SimHits_CTPPSPixelHits_SIM.obj.entryPoint().x()>>h4");
h4->SetFillColor(3);
h4->SetTitle("PPS Pixel PSimHits - Particle Gun 2017 ; LocalEntryPoint_x [mm]");

Events->Draw("PSimHits_g4SimHits_CTPPSPixelHits_SIM.obj.entryPoint().y()>>h5");
h5->SetFillColor(3);
h5->SetTitle("PPS Pixel PSimHits - Particle Gun 2017 ; LocalEntryPoint_y [mm]"); 

Events->Draw("PSimHits_g4SimHits_CTPPSPixelHits_SIM.obj.detUnitId()>>h6");
h6->SetFillColor(3);
h6->SetTitle("PPS Pixel PSimHits - Particle Gun 2017 ; detUnitId");

Events->Draw("PSimHits_g4SimHits_TotemHitsRP_SIM.obj.entryPoint().x()>>h7");
h7->SetFillColor(2);
h7->SetTitle("PPS Strip PSimHits - Particle Gun 2017 ; LocalEntryPoint_u [mm]");

Events->Draw("PSimHits_g4SimHits_TotemHitsRP_SIM.obj.entryPoint().y()>>h8");
h8->SetFillColor(2);
h8->SetTitle("PPS Strip PSimHits - Particle Gun 2017 ; LocalEntryPoint_v [mm]"); 

Events->Draw("PSimHits_g4SimHits_TotemHitsRP_SIM.obj.detUnitId()>>h9");
h9->SetFillColor(2);
h9->SetTitle("PPS Strip PSimHits - Particle Gun 2017 ; detUnitId");

Events->Draw("PSimHits_g4SimHits_CTPPSTimingHits_SIM.obj.entryPoint().y()>>h10");
h10->SetFillColor(28);
h10->SetTitle("PPS Timing PSimHits - Particle Gun 2017 ; LocalEntryPoint_y [mm]"); 

Events->Draw("PSimHits_g4SimHits_CTPPSTimingHits_SIM.obj.entryPoint().x()>>h11");
h11->SetFillColor(28);
h11->SetTitle("PPS Timing PSimHits - Particle Gun 2017 ; LocalEntryPoint_x [mm]");

Events->Draw("PSimHits_g4SimHits_CTPPSTimingHits_SIM.obj.detUnitId()>>h12");
h12->SetFillColor(28);
h12->SetTitle("PPS Timing PSimHits - Particle Gun 2017 ; detUnitId");

Events->Draw("CTPPSPixelRecHitedmDetSetVector_ctppsPixelRecHits__RECO.obj._sets.data.getPoint().x()>>h13");
h13->SetFillColor(3);
h13->SetTitle("PPS Pixel RecHit - Particle Gun 2017 ; Local_x [mm]");

Events->Draw("CTPPSPixelRecHitedmDetSetVector_ctppsPixelRecHits__RECO.obj._sets.data.getPoint().y()>>h14");
h14->SetFillColor(3);
h14->SetTitle("PPS Pixel RecHit - Particle Gun 2017 ; Local_y [mm]");

Events->Draw("CTPPSPixelRecHitedmDetSetVector_ctppsPixelRecHits__RECO.obj._sets.detId()>>h15");
h15->SetFillColor(3);
h15->SetTitle("PPS Pixel RecHit - Particle Gun 2017 ; detId");

Events->Draw("TotemRPRecHitedmDetSetVector_totemRPRecHitProducer__RECO.obj._sets.detId()>>h16");
h16->SetFillColor(2);
h16->SetTitle("PPS Strip RecHit - Particle Gun 2017 ; detId");

Events->Draw("TotemRPRecHitedmDetSetVector_totemRPRecHitProducer__RECO.obj._sets.data.getPosition()>>h17");
h17->SetFillColor(2);
h17->SetTitle("PPS Strip RecHit - Particle Gun 2017 ; Position");

Events->Draw("CTPPSPixelLocalTrackedmDetSetVector_ctppsPixelLocalTracks__RECO.obj._sets.data.getX0()>>h18");
h18->SetFillColor(3);
h18->SetTitle("PPS Pixel LocalTracks - Particle Gun 2017 ; Global_x [mm]");

Events->Draw("CTPPSPixelLocalTrackedmDetSetVector_ctppsPixelLocalTracks__RECO.obj._sets.data.getY0()>>h19");
h19->SetFillColor(3);
h19->SetTitle("PPS Pixel LocalTracks - Particle Gun 2017 ; Global_y [mm]");

Events->Draw("CTPPSPixelLocalTrackedmDetSetVector_ctppsPixelLocalTracks__RECO.obj._sets.data.getZ0()>>h20");
h20->SetFillColor(3);
h20->SetTitle("PPS Pixel LocalTracks - Particle Gun 2017 ; Global_z [mm]");

Events->Draw("TotemRPLocalTrackedmDetSetVector_totemRPLocalTrackFitter__RECO.obj._sets.data.getX0()>>h21");
h21->SetFillColor(2);
h21->SetTitle("PPS Strip LocalTracks - Particle Gun 2017 ; Global_x [mm]");

Events->Draw("TotemRPLocalTrackedmDetSetVector_totemRPLocalTrackFitter__RECO.obj._sets.data.getY0()>>h22");
h22->SetFillColor(2);
h22->SetTitle("PPS Strip LocalTracks - Particle Gun 2017 ; Global_y [mm]");

Events->Draw("TotemRPLocalTrackedmDetSetVector_totemRPLocalTrackFitter__RECO.obj._sets.data.getZ0()>>h23");
h23->SetFillColor(2);
h23->SetTitle("PPS Strip LocalTracks - Particle Gun 2017 ; Global_z [mm]");

Events->Draw("TotemRPDigiedmDetSetVector_RPSiDetDigitizer__DIGI2RAW.obj._sets.data.strip_no_:TotemRPDigiedmDetSetVector_totemRPRawToDigi_TrackingStrip_RECO.obj._sets.data.strip_no_>>h24");
h24->SetFillColor(2);
h24->SetTitle("PPS Strip RPSiDetDigitizer vs totemRPRawToDigi - Particle Gun 2017 ; totemRPRawToDigi strip_no_; RPSiDetDigitizer strip_no_");

Events->Draw("TotemRPDigiedmDetSetVector_RPSiDetDigitizer__DIGI2RAW.obj._sets.data.strip_no_:TotemRPDigiedmDetSetVector_totemRPRawToDigi_TrackingStrip_RECO.obj._sets.data.strip_no_>>h25", "TotemRPDigiedmDetSetVector_RPSiDetDigitizer__DIGI2RAW.obj._sets.detId()==TotemRPDigiedmDetSetVector_totemRPRawToDigi_TrackingStrip_RECO.obj._sets.detId()&&TotemRPDigiedmDetSetVector_RPSiDetDigitizer__DIGI2RAW.obj._sets.size()<15");
h25->SetTitle("PPS Strip RPSiDetDigitizer vs totemRPRawToDigi / multiplicity cut - Particle Gun 2017 ; totemRPRawToDigi strip_no_; RPSiDetDigitizer strip_no_"); 

Events->Draw("CTPPSPixelDigiedmDetSetVector_RPixDetDigitizer__DIGI2RAW.obj._sets.data.theData:CTPPSPixelDigiedmDetSetVector_ctppsPixelDigis__RECO.obj._sets.data.theData>>h28");
h28->SetTitle("PPS Pixel RPixDetDigitizer vs ctppsPixelDigis - Particle Gun 2017; ctppsPixelDigis theData ; RPixDetDigitizer theData");

Events->Draw("CTPPSPixelDigiedmDetSetVector_RPixDetDigitizer__DIGI2RAW.obj._sets.data.row():CTPPSPixelDigiedmDetSetVector_ctppsPixelDigis__RECO.obj._sets.data.row()>>h28r");
h28r->SetTitle("PPS Pixel RPixDetDigitizer vs ctppsPixelDigis - Particle Gun 2017; ctppsPixelDigis row ; RPixDetDigitizer row");

Events->Draw("CTPPSPixelDigiedmDetSetVector_RPixDetDigitizer__DIGI2RAW.obj._sets.data.column():CTPPSPixelDigiedmDetSetVector_ctppsPixelDigis__RECO.obj._sets.data.column()>>h28c");
h28c->SetTitle("PPS Pixel RPixDetDigitizer vs ctppsPixelDigis - Particle Gun 2017; ctppsPixelDigis column ; RPixDetDigitizer column");

Events->Draw("PSimHits_g4SimHits_CTPPSPixelHits_SIM.obj.entryPoint().x()-CTPPSPixelRecHitedmDetSetVector_ctppsPixelRecHits__RECO.obj._sets.data.getPoint().x()>>h29(100,-1,1)","CTPPSPixelRecHitedmDetSetVector_ctppsPixelRecHits__RECO.obj._sets.data.getPoint().x()>-200");
h29->SetFillColor(3); 
h29->SetTitle("PPS Pixel RecHits and SimHits difference local x coordinate ; x_rec - x_sim [mm]");


Events->Draw("PSimHits_g4SimHits_CTPPSPixelHits_SIM.obj.entryPoint().y()-CTPPSPixelRecHitedmDetSetVector_ctppsPixelRecHits__RECO.obj._sets.data.getPoint().y()>>h30(100,-1,1)","CTPPSPixelRecHitedmDetSetVector_ctppsPixelRecHits__RECO.obj._sets.data.getPoint().y()>-200");
h30->SetFillColor(3);
h30->SetTitle("PPS Pixel RecHits and SimHits difference local y coordinate ; y_rec - y_sim [mm]");

//gPad->SetLogy(); 
Events->Draw("TotemRPDigiedmDetSetVector_RPSiDetDigitizer__DIGI2RAW.obj._sets.size()>>h26");
//h26->SetLineColor(0);
h26->SetTitle("PPS Strip RPSiDetDigitizer multiplicities ; Strip multiplicity");

Events->Draw("TotemRPDigiedmDetSetVector_totemRPRawToDigi_TrackingStrip_RECO.obj._sets.size()>>h27");
h27->SetLineColor(4); 
h27->SetTitle("PPS Strip totemRPRawToDigi multiplicities ; Strip multiplicity");

h26->Draw(); 
h27->Draw("same");

f->Write();
} 
