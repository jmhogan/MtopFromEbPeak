void nvtx()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 16:36:54 2018) by ROOT version6.08/07
   TCanvas *c = new TCanvas("c", "c",0,0,500,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0);
   c->SetRightMargin(0);
   c->SetTopMargin(0);
   c->SetBottomMargin(0);
   c->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p1
   TPad *p1 = new TPad("p1", "p1",0,0,1,0.85);
   p1->Draw();
   p1->cd();
   p1->Range(-5.783133,-1614.217,42.40964,11838.43);
   p1->SetFillColor(0);
   p1->SetBorderMode(0);
   p1->SetBorderSize(2);
   p1->SetGridx();
   p1->SetLeftMargin(0.12);
   p1->SetRightMargin(0.05);
   p1->SetTopMargin(0.01);
   p1->SetBottomMargin(0.12);
   p1->SetFrameBorderMode(0);
   p1->SetFrameBorderMode(0);
   
   TH1F *frame__71 = new TH1F("frame__71","t#bar{t}",40,0,40);
   frame__71->SetMinimum(0.1);
   frame__71->SetMaximum(11703.9);
   frame__71->SetEntries(369734);
   frame__71->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__71->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__71->SetMarkerColor(ci);
   frame__71->GetXaxis()->SetTitle("Vertex multiplicity");
   frame__71->GetXaxis()->SetLabelFont(42);
   frame__71->GetXaxis()->SetLabelSize(0.035);
   frame__71->GetXaxis()->SetTitleSize(0.035);
   frame__71->GetXaxis()->SetTitleFont(42);
   frame__71->GetYaxis()->SetTitle(" Events");
   frame__71->GetYaxis()->SetNoExponent();
   frame__71->GetYaxis()->SetLabelFont(42);
   frame__71->GetYaxis()->SetTitleSize(0.045);
   frame__71->GetYaxis()->SetTitleOffset(1.3);
   frame__71->GetYaxis()->SetTitleFont(42);
   frame__71->GetZaxis()->SetLabelFont(42);
   frame__71->GetZaxis()->SetLabelSize(0.035);
   frame__71->GetZaxis()->SetTitleSize(0.035);
   frame__71->GetZaxis()->SetTitleFont(42);
   frame__71->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_11 = new TH1F("mc_stack_11","mc",40,0,40);
   mc_stack_11->SetMinimum(-7.572143e-07);
   mc_stack_11->SetMaximum(9050.705);
   mc_stack_11->SetDirectory(0);
   mc_stack_11->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_11->SetLineColor(ci);
   mc_stack_11->GetXaxis()->SetLabelFont(42);
   mc_stack_11->GetXaxis()->SetLabelSize(0.035);
   mc_stack_11->GetXaxis()->SetTitleSize(0.035);
   mc_stack_11->GetXaxis()->SetTitleFont(42);
   mc_stack_11->GetYaxis()->SetLabelFont(42);
   mc_stack_11->GetYaxis()->SetLabelSize(0.035);
   mc_stack_11->GetYaxis()->SetTitleSize(0.035);
   mc_stack_11->GetYaxis()->SetTitleFont(42);
   mc_stack_11->GetZaxis()->SetLabelFont(42);
   mc_stack_11->GetZaxis()->SetLabelSize(0.035);
   mc_stack_11->GetZaxis()->SetTitleSize(0.035);
   mc_stack_11->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_11);
   
   
   TH1F *nvtx_t#bar{t}__72 = new TH1F("nvtx_t#bar{t}__72","t#bar{t}",40,0,40);
   nvtx_t#bar{t}__72->SetBinContent(2,5.003424);
   nvtx_t#bar{t}__72->SetBinContent(3,16.73344);
   nvtx_t#bar{t}__72->SetBinContent(4,39.52368);
   nvtx_t#bar{t}__72->SetBinContent(5,110.0149);
   nvtx_t#bar{t}__72->SetBinContent(6,221.7576);
   nvtx_t#bar{t}__72->SetBinContent(7,460.8466);
   nvtx_t#bar{t}__72->SetBinContent(8,801.9134);
   nvtx_t#bar{t}__72->SetBinContent(9,1366.987);
   nvtx_t#bar{t}__72->SetBinContent(10,2107.914);
   nvtx_t#bar{t}__72->SetBinContent(11,2952.685);
   nvtx_t#bar{t}__72->SetBinContent(12,3895.324);
   nvtx_t#bar{t}__72->SetBinContent(13,4894.923);
   nvtx_t#bar{t}__72->SetBinContent(14,5878.372);
   nvtx_t#bar{t}__72->SetBinContent(15,6682.689);
   nvtx_t#bar{t}__72->SetBinContent(16,7384.229);
   nvtx_t#bar{t}__72->SetBinContent(17,7876.408);
   nvtx_t#bar{t}__72->SetBinContent(18,8197.992);
   nvtx_t#bar{t}__72->SetBinContent(19,8218.74);
   nvtx_t#bar{t}__72->SetBinContent(20,8159.588);
   nvtx_t#bar{t}__72->SetBinContent(21,7803.309);
   nvtx_t#bar{t}__72->SetBinContent(22,7472.588);
   nvtx_t#bar{t}__72->SetBinContent(23,6806.26);
   nvtx_t#bar{t}__72->SetBinContent(24,6248.671);
   nvtx_t#bar{t}__72->SetBinContent(25,5603.016);
   nvtx_t#bar{t}__72->SetBinContent(26,5047.766);
   nvtx_t#bar{t}__72->SetBinContent(27,4451.063);
   nvtx_t#bar{t}__72->SetBinContent(28,3819.703);
   nvtx_t#bar{t}__72->SetBinContent(29,3306.322);
   nvtx_t#bar{t}__72->SetBinContent(30,2850.199);
   nvtx_t#bar{t}__72->SetBinContent(31,2482.685);
   nvtx_t#bar{t}__72->SetBinContent(32,2115.282);
   nvtx_t#bar{t}__72->SetBinContent(33,1836.857);
   nvtx_t#bar{t}__72->SetBinContent(34,1581.534);
   nvtx_t#bar{t}__72->SetBinContent(35,1340.178);
   nvtx_t#bar{t}__72->SetBinContent(36,1118.604);
   nvtx_t#bar{t}__72->SetBinContent(37,959.5425);
   nvtx_t#bar{t}__72->SetBinContent(38,869.9392);
   nvtx_t#bar{t}__72->SetBinContent(39,663.993);
   nvtx_t#bar{t}__72->SetBinContent(40,579.6433);
   nvtx_t#bar{t}__72->SetBinContent(41,2969.813);
   nvtx_t#bar{t}__72->SetBinError(2,1.429886);
   nvtx_t#bar{t}__72->SetBinError(3,2.617018);
   nvtx_t#bar{t}__72->SetBinError(4,3.987496);
   nvtx_t#bar{t}__72->SetBinError(5,6.77365);
   nvtx_t#bar{t}__72->SetBinError(6,9.559263);
   nvtx_t#bar{t}__72->SetBinError(7,13.78712);
   nvtx_t#bar{t}__72->SetBinError(8,18.12297);
   nvtx_t#bar{t}__72->SetBinError(9,23.68473);
   nvtx_t#bar{t}__72->SetBinError(10,29.45452);
   nvtx_t#bar{t}__72->SetBinError(11,34.81846);
   nvtx_t#bar{t}__72->SetBinError(12,39.98982);
   nvtx_t#bar{t}__72->SetBinError(13,44.87656);
   nvtx_t#bar{t}__72->SetBinError(14,49.12321);
   nvtx_t#bar{t}__72->SetBinError(15,52.35048);
   nvtx_t#bar{t}__72->SetBinError(16,55.08265);
   nvtx_t#bar{t}__72->SetBinError(17,56.87253);
   nvtx_t#bar{t}__72->SetBinError(18,58.01157);
   nvtx_t#bar{t}__72->SetBinError(19,58.14879);
   nvtx_t#bar{t}__72->SetBinError(20,57.88467);
   nvtx_t#bar{t}__72->SetBinError(21,56.60982);
   nvtx_t#bar{t}__72->SetBinError(22,55.39753);
   nvtx_t#bar{t}__72->SetBinError(23,52.88773);
   nvtx_t#bar{t}__72->SetBinError(24,50.63613);
   nvtx_t#bar{t}__72->SetBinError(25,47.97879);
   nvtx_t#bar{t}__72->SetBinError(26,45.53007);
   nvtx_t#bar{t}__72->SetBinError(27,42.75001);
   nvtx_t#bar{t}__72->SetBinError(28,39.61646);
   nvtx_t#bar{t}__72->SetBinError(29,36.81542);
   nvtx_t#bar{t}__72->SetBinError(30,34.19745);
   nvtx_t#bar{t}__72->SetBinError(31,31.93658);
   nvtx_t#bar{t}__72->SetBinError(32,29.5054);
   nvtx_t#bar{t}__72->SetBinError(33,27.50843);
   nvtx_t#bar{t}__72->SetBinError(34,25.5012);
   nvtx_t#bar{t}__72->SetBinError(35,23.4697);
   nvtx_t#bar{t}__72->SetBinError(36,21.45573);
   nvtx_t#bar{t}__72->SetBinError(37,19.87316);
   nvtx_t#bar{t}__72->SetBinError(38,18.8999);
   nvtx_t#bar{t}__72->SetBinError(39,16.4889);
   nvtx_t#bar{t}__72->SetBinError(40,15.41597);
   nvtx_t#bar{t}__72->SetBinError(41,34.92375);
   nvtx_t#bar{t}__72->SetEntries(364017);
   nvtx_t#bar{t}__72->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}__72->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   nvtx_t#bar{t}__72->SetMarkerColor(ci);
   nvtx_t#bar{t}__72->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_t#bar{t}__72->GetXaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__72->GetXaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__72->GetXaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__72->GetXaxis()->SetTitleFont(42);
   nvtx_t#bar{t}__72->GetYaxis()->SetTitle(" Events");
   nvtx_t#bar{t}__72->GetYaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__72->GetYaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__72->GetYaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__72->GetYaxis()->SetTitleFont(42);
   nvtx_t#bar{t}__72->GetZaxis()->SetLabelFont(42);
   nvtx_t#bar{t}__72->GetZaxis()->SetLabelSize(0.035);
   nvtx_t#bar{t}__72->GetZaxis()->SetTitleSize(0.035);
   nvtx_t#bar{t}__72->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_t#bar{t},"hist");
   
   TH1F *nvtx_Diboson__73 = new TH1F("nvtx_Diboson__73","Diboson",40,0,40);
   nvtx_Diboson__73->SetBinContent(5,0.3458666);
   nvtx_Diboson__73->SetBinContent(7,0.4341311);
   nvtx_Diboson__73->SetBinContent(8,1.540293);
   nvtx_Diboson__73->SetBinContent(9,2.073714);
   nvtx_Diboson__73->SetBinContent(10,3.200663);
   nvtx_Diboson__73->SetBinContent(11,5.7331);
   nvtx_Diboson__73->SetBinContent(12,4.378333);
   nvtx_Diboson__73->SetBinContent(13,4.462409);
   nvtx_Diboson__73->SetBinContent(14,5.729887);
   nvtx_Diboson__73->SetBinContent(15,8.17416);
   nvtx_Diboson__73->SetBinContent(16,8.262775);
   nvtx_Diboson__73->SetBinContent(17,9.446387);
   nvtx_Diboson__73->SetBinContent(18,8.873469);
   nvtx_Diboson__73->SetBinContent(19,6.904152);
   nvtx_Diboson__73->SetBinContent(20,8.424392);
   nvtx_Diboson__73->SetBinContent(21,10.60277);
   nvtx_Diboson__73->SetBinContent(22,8.900023);
   nvtx_Diboson__73->SetBinContent(23,11.10779);
   nvtx_Diboson__73->SetBinContent(24,7.209071);
   nvtx_Diboson__73->SetBinContent(25,9.180158);
   nvtx_Diboson__73->SetBinContent(26,5.970304);
   nvtx_Diboson__73->SetBinContent(27,7.281801);
   nvtx_Diboson__73->SetBinContent(28,5.937562);
   nvtx_Diboson__73->SetBinContent(29,4.949276);
   nvtx_Diboson__73->SetBinContent(30,5.061709);
   nvtx_Diboson__73->SetBinContent(31,1.809576);
   nvtx_Diboson__73->SetBinContent(32,3.410291);
   nvtx_Diboson__73->SetBinContent(33,3.932836);
   nvtx_Diboson__73->SetBinContent(34,2.994125);
   nvtx_Diboson__73->SetBinContent(35,1.743477);
   nvtx_Diboson__73->SetBinContent(36,2.015735);
   nvtx_Diboson__73->SetBinContent(37,1.209946);
   nvtx_Diboson__73->SetBinContent(38,0.8021368);
   nvtx_Diboson__73->SetBinContent(39,1.920902);
   nvtx_Diboson__73->SetBinContent(40,0.8037142);
   nvtx_Diboson__73->SetBinContent(41,6.281992);
   nvtx_Diboson__73->SetBinError(5,0.3458666);
   nvtx_Diboson__73->SetBinError(7,0.4341312);
   nvtx_Diboson__73->SetBinError(8,0.7721904);
   nvtx_Diboson__73->SetBinError(9,0.9303489);
   nvtx_Diboson__73->SetBinError(10,1.13432);
   nvtx_Diboson__73->SetBinError(11,1.487459);
   nvtx_Diboson__73->SetBinError(12,1.320199);
   nvtx_Diboson__73->SetBinError(13,1.309422);
   nvtx_Diboson__73->SetBinError(14,1.515861);
   nvtx_Diboson__73->SetBinError(15,1.772246);
   nvtx_Diboson__73->SetBinError(16,1.775844);
   nvtx_Diboson__73->SetBinError(17,1.928752);
   nvtx_Diboson__73->SetBinError(18,1.886167);
   nvtx_Diboson__73->SetBinError(19,1.556927);
   nvtx_Diboson__73->SetBinError(20,1.808415);
   nvtx_Diboson__73->SetBinError(21,1.980794);
   nvtx_Diboson__73->SetBinError(22,1.878721);
   nvtx_Diboson__73->SetBinError(23,2.120653);
   nvtx_Diboson__73->SetBinError(24,1.702971);
   nvtx_Diboson__73->SetBinError(25,1.904716);
   nvtx_Diboson__73->SetBinError(26,1.497112);
   nvtx_Diboson__73->SetBinError(27,1.676912);
   nvtx_Diboson__73->SetBinError(28,1.510425);
   nvtx_Diboson__73->SetBinError(29,1.369896);
   nvtx_Diboson__73->SetBinError(30,1.363266);
   nvtx_Diboson__73->SetBinError(31,0.8206712);
   nvtx_Diboson__73->SetBinError(32,1.144002);
   nvtx_Diboson__73->SetBinError(33,1.245123);
   nvtx_Diboson__73->SetBinError(34,1.067556);
   nvtx_Diboson__73->SetBinError(35,0.8053047);
   nvtx_Diboson__73->SetBinError(36,0.8989404);
   nvtx_Diboson__73->SetBinError(37,0.6634141);
   nvtx_Diboson__73->SetBinError(38,0.5687176);
   nvtx_Diboson__73->SetBinError(39,0.8751835);
   nvtx_Diboson__73->SetBinError(40,0.5692468);
   nvtx_Diboson__73->SetBinError(41,1.563421);
   nvtx_Diboson__73->SetEntries(511);
   nvtx_Diboson__73->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson__73->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   nvtx_Diboson__73->SetMarkerColor(ci);
   nvtx_Diboson__73->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_Diboson__73->GetXaxis()->SetLabelFont(42);
   nvtx_Diboson__73->GetXaxis()->SetLabelSize(0.035);
   nvtx_Diboson__73->GetXaxis()->SetTitleSize(0.035);
   nvtx_Diboson__73->GetXaxis()->SetTitleFont(42);
   nvtx_Diboson__73->GetYaxis()->SetTitle(" Events");
   nvtx_Diboson__73->GetYaxis()->SetLabelFont(42);
   nvtx_Diboson__73->GetYaxis()->SetLabelSize(0.035);
   nvtx_Diboson__73->GetYaxis()->SetTitleSize(0.035);
   nvtx_Diboson__73->GetYaxis()->SetTitleFont(42);
   nvtx_Diboson__73->GetZaxis()->SetLabelFont(42);
   nvtx_Diboson__73->GetZaxis()->SetLabelSize(0.035);
   nvtx_Diboson__73->GetZaxis()->SetTitleSize(0.035);
   nvtx_Diboson__73->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Diboson,"hist");
   
   TH1F *nvtx_DY__74 = new TH1F("nvtx_DY__74","DY",40,0,40);
   nvtx_DY__74->SetBinContent(13,38.66452);
   nvtx_DY__74->SetBinContent(14,19.39491);
   nvtx_DY__74->SetBinContent(15,33.82054);
   nvtx_DY__74->SetBinContent(16,17.57083);
   nvtx_DY__74->SetBinContent(18,16.29086);
   nvtx_DY__74->SetBinContent(21,36.22921);
   nvtx_DY__74->SetBinContent(22,14.39964);
   nvtx_DY__74->SetBinContent(23,34.98171);
   nvtx_DY__74->SetBinContent(26,15.96457);
   nvtx_DY__74->SetBinContent(27,18.13515);
   nvtx_DY__74->SetBinContent(30,19.12663);
   nvtx_DY__74->SetBinContent(31,34.51785);
   nvtx_DY__74->SetBinContent(34,16.99921);
   nvtx_DY__74->SetBinContent(41,15.61073);
   nvtx_DY__74->SetBinError(13,27.35422);
   nvtx_DY__74->SetBinError(14,19.39491);
   nvtx_DY__74->SetBinError(15,23.14632);
   nvtx_DY__74->SetBinError(16,15.70766);
   nvtx_DY__74->SetBinError(18,16.29087);
   nvtx_DY__74->SetBinError(21,25.71461);
   nvtx_DY__74->SetBinError(22,14.39964);
   nvtx_DY__74->SetBinError(23,24.77869);
   nvtx_DY__74->SetBinError(26,15.96457);
   nvtx_DY__74->SetBinError(27,18.13515);
   nvtx_DY__74->SetBinError(30,19.12663);
   nvtx_DY__74->SetBinError(31,24.4698);
   nvtx_DY__74->SetBinError(34,16.99921);
   nvtx_DY__74->SetBinError(41,15.61073);
   nvtx_DY__74->SetEntries(21);
   nvtx_DY__74->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY__74->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   nvtx_DY__74->SetMarkerColor(ci);
   nvtx_DY__74->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_DY__74->GetXaxis()->SetLabelFont(42);
   nvtx_DY__74->GetXaxis()->SetLabelSize(0.035);
   nvtx_DY__74->GetXaxis()->SetTitleSize(0.035);
   nvtx_DY__74->GetXaxis()->SetTitleFont(42);
   nvtx_DY__74->GetYaxis()->SetTitle(" Events");
   nvtx_DY__74->GetYaxis()->SetLabelFont(42);
   nvtx_DY__74->GetYaxis()->SetLabelSize(0.035);
   nvtx_DY__74->GetYaxis()->SetTitleSize(0.035);
   nvtx_DY__74->GetYaxis()->SetTitleFont(42);
   nvtx_DY__74->GetZaxis()->SetLabelFont(42);
   nvtx_DY__74->GetZaxis()->SetLabelSize(0.035);
   nvtx_DY__74->GetZaxis()->SetTitleSize(0.035);
   nvtx_DY__74->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_DY,"hist");
   
   TH1F *nvtx_W__75 = new TH1F("nvtx_W__75","W",40,0,40);
   nvtx_W__75->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   nvtx_W__75->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   nvtx_W__75->SetMarkerColor(ci);
   nvtx_W__75->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_W__75->GetXaxis()->SetLabelFont(42);
   nvtx_W__75->GetXaxis()->SetLabelSize(0.035);
   nvtx_W__75->GetXaxis()->SetTitleSize(0.035);
   nvtx_W__75->GetXaxis()->SetTitleFont(42);
   nvtx_W__75->GetYaxis()->SetTitle(" Events");
   nvtx_W__75->GetYaxis()->SetLabelFont(42);
   nvtx_W__75->GetYaxis()->SetLabelSize(0.035);
   nvtx_W__75->GetYaxis()->SetTitleSize(0.035);
   nvtx_W__75->GetYaxis()->SetTitleFont(42);
   nvtx_W__75->GetZaxis()->SetLabelFont(42);
   nvtx_W__75->GetZaxis()->SetLabelSize(0.035);
   nvtx_W__75->GetZaxis()->SetTitleSize(0.035);
   nvtx_W__75->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_W,"hist");
   
   TH1F *nvtx_SinglesPtop__76 = new TH1F("nvtx_SinglesPtop__76","Single top",40,0,40);
   nvtx_SinglesPtop__76->SetBinContent(2,1.462832);
   nvtx_SinglesPtop__76->SetBinContent(3,1.553983);
   nvtx_SinglesPtop__76->SetBinContent(5,5.582844);
   nvtx_SinglesPtop__76->SetBinContent(6,9.929082);
   nvtx_SinglesPtop__76->SetBinContent(7,24.94729);
   nvtx_SinglesPtop__76->SetBinContent(8,55.89536);
   nvtx_SinglesPtop__76->SetBinContent(9,63.2588);
   nvtx_SinglesPtop__76->SetBinContent(10,95.54023);
   nvtx_SinglesPtop__76->SetBinContent(11,115.875);
   nvtx_SinglesPtop__76->SetBinContent(12,174.3499);
   nvtx_SinglesPtop__76->SetBinContent(13,239.1669);
   nvtx_SinglesPtop__76->SetBinContent(14,264.8333);
   nvtx_SinglesPtop__76->SetBinContent(15,296.9505);
   nvtx_SinglesPtop__76->SetBinContent(16,358.7266);
   nvtx_SinglesPtop__76->SetBinContent(17,352.5374);
   nvtx_SinglesPtop__76->SetBinContent(18,396.5621);
   nvtx_SinglesPtop__76->SetBinContent(19,375.9591);
   nvtx_SinglesPtop__76->SetBinContent(20,382.1055);
   nvtx_SinglesPtop__76->SetBinContent(21,362.1274);
   nvtx_SinglesPtop__76->SetBinContent(22,323.1664);
   nvtx_SinglesPtop__76->SetBinContent(23,290.4366);
   nvtx_SinglesPtop__76->SetBinContent(24,268.4556);
   nvtx_SinglesPtop__76->SetBinContent(25,268.2792);
   nvtx_SinglesPtop__76->SetBinContent(26,235.7692);
   nvtx_SinglesPtop__76->SetBinContent(27,220.0368);
   nvtx_SinglesPtop__76->SetBinContent(28,161.9085);
   nvtx_SinglesPtop__76->SetBinContent(29,152.587);
   nvtx_SinglesPtop__76->SetBinContent(30,158.2337);
   nvtx_SinglesPtop__76->SetBinContent(31,129.4226);
   nvtx_SinglesPtop__76->SetBinContent(32,103.2569);
   nvtx_SinglesPtop__76->SetBinContent(33,81.11939);
   nvtx_SinglesPtop__76->SetBinContent(34,78.3559);
   nvtx_SinglesPtop__76->SetBinContent(35,65.17318);
   nvtx_SinglesPtop__76->SetBinContent(36,57.20678);
   nvtx_SinglesPtop__76->SetBinContent(37,40.99373);
   nvtx_SinglesPtop__76->SetBinContent(38,40.44538);
   nvtx_SinglesPtop__76->SetBinContent(39,23.87106);
   nvtx_SinglesPtop__76->SetBinContent(40,25.82519);
   nvtx_SinglesPtop__76->SetBinContent(41,130.9335);
   nvtx_SinglesPtop__76->SetBinError(2,1.462832);
   nvtx_SinglesPtop__76->SetBinError(3,1.553983);
   nvtx_SinglesPtop__76->SetBinError(5,2.796876);
   nvtx_SinglesPtop__76->SetBinError(6,3.517771);
   nvtx_SinglesPtop__76->SetBinError(7,5.74149);
   nvtx_SinglesPtop__76->SetBinError(8,8.633463);
   nvtx_SinglesPtop__76->SetBinError(9,9.164872);
   nvtx_SinglesPtop__76->SetBinError(10,11.40477);
   nvtx_SinglesPtop__76->SetBinError(11,12.5095);
   nvtx_SinglesPtop__76->SetBinError(12,15.36554);
   nvtx_SinglesPtop__76->SetBinError(13,17.71468);
   nvtx_SinglesPtop__76->SetBinError(14,18.8103);
   nvtx_SinglesPtop__76->SetBinError(15,19.98791);
   nvtx_SinglesPtop__76->SetBinError(16,21.95328);
   nvtx_SinglesPtop__76->SetBinError(17,21.76872);
   nvtx_SinglesPtop__76->SetBinError(18,23.03629);
   nvtx_SinglesPtop__76->SetBinError(19,22.46363);
   nvtx_SinglesPtop__76->SetBinError(20,22.56098);
   nvtx_SinglesPtop__76->SetBinError(21,21.85153);
   nvtx_SinglesPtop__76->SetBinError(22,20.84791);
   nvtx_SinglesPtop__76->SetBinError(23,19.76736);
   nvtx_SinglesPtop__76->SetBinError(24,18.99818);
   nvtx_SinglesPtop__76->SetBinError(25,18.88106);
   nvtx_SinglesPtop__76->SetBinError(26,17.63483);
   nvtx_SinglesPtop__76->SetBinError(27,17.10138);
   nvtx_SinglesPtop__76->SetBinError(28,14.74031);
   nvtx_SinglesPtop__76->SetBinError(29,14.34931);
   nvtx_SinglesPtop__76->SetBinError(30,14.58096);
   nvtx_SinglesPtop__76->SetBinError(31,13.16423);
   nvtx_SinglesPtop__76->SetBinError(32,11.79756);
   nvtx_SinglesPtop__76->SetBinError(33,10.42819);
   nvtx_SinglesPtop__76->SetBinError(34,10.30644);
   nvtx_SinglesPtop__76->SetBinError(35,9.347118);
   nvtx_SinglesPtop__76->SetBinError(36,8.672227);
   nvtx_SinglesPtop__76->SetBinError(37,7.334421);
   nvtx_SinglesPtop__76->SetBinError(38,7.418589);
   nvtx_SinglesPtop__76->SetBinError(39,5.677711);
   nvtx_SinglesPtop__76->SetBinError(40,5.977724);
   nvtx_SinglesPtop__76->SetBinError(41,13.15296);
   nvtx_SinglesPtop__76->SetEntries(5185);
   nvtx_SinglesPtop__76->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop__76->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   nvtx_SinglesPtop__76->SetMarkerColor(ci);
   nvtx_SinglesPtop__76->GetXaxis()->SetTitle("Vertex multiplicity");
   nvtx_SinglesPtop__76->GetXaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__76->GetXaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__76->GetXaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__76->GetXaxis()->SetTitleFont(42);
   nvtx_SinglesPtop__76->GetYaxis()->SetTitle(" Events");
   nvtx_SinglesPtop__76->GetYaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__76->GetYaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__76->GetYaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__76->GetYaxis()->SetTitleFont(42);
   nvtx_SinglesPtop__76->GetZaxis()->SetLabelFont(42);
   nvtx_SinglesPtop__76->GetZaxis()->SetLabelSize(0.035);
   nvtx_SinglesPtop__76->GetZaxis()->SetTitleSize(0.035);
   nvtx_SinglesPtop__76->GetZaxis()->SetTitleFont(42);
   mc->Add(nvtx_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_nvtx_fx3021[41] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   30.5,
   31.5,
   32.5,
   33.5,
   34.5,
   35.5,
   36.5,
   37.5,
   38.5,
   39.5,
   0};
   Double_t Graph_from_nvtx_fy3021[41] = {
   0,
   9,
   16,
   47,
   114,
   295,
   617,
   1099,
   1920,
   2838,
   3840,
   5111,
   6290,
   7395,
   8229,
   8727,
   8921,
   9003,
   8528,
   8216,
   7602,
   6803,
   6090,
   5327,
   4573,
   3935,
   3261,
   2749,
   2273,
   1762,
   1377,
   1200,
   899,
   744,
   587,
   455,
   339,
   293,
   228,
   163,
   0};
   Double_t Graph_from_nvtx_felx3021[41] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nvtx_fely3021[41] = {
   0,
   2.943511,
   3.957873,
   6.831306,
   10.66162,
   17.17556,
   24.83948,
   33.15117,
   43.8178,
   53.27288,
   61.96773,
   71.49126,
   79.30952,
   85.99419,
   90.71384,
   93.41841,
   94.45105,
   94.88414,
   92.34717,
   90.64215,
   87.18945,
   82.4803,
   78.03845,
   72.9863,
   67.62396,
   62.72958,
   57.10517,
   52.43091,
   47.67599,
   41.97618,
   37.10795,
   34.64102,
   29.98333,
   27.27636,
   24.22808,
   21.33073,
   18.41195,
   17.11724,
   15.09967,
   12.75431,
   0};
   Double_t Graph_from_nvtx_fehx3021[41] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0};
   Double_t Graph_from_nvtx_fehy3021[41] = {
   1.841055,
   4.110286,
   5.083169,
   7.904454,
   11.70857,
   17.17556,
   24.83948,
   33.15117,
   43.8178,
   53.27288,
   61.96773,
   71.49126,
   79.30952,
   85.99419,
   90.71384,
   93.41841,
   94.45105,
   94.88414,
   92.34717,
   90.64215,
   87.18945,
   82.4803,
   78.03845,
   72.9863,
   67.62396,
   62.72958,
   57.10517,
   52.43091,
   47.67599,
   41.97618,
   37.10795,
   34.64102,
   29.98333,
   27.27636,
   24.22808,
   21.33073,
   18.41195,
   17.11724,
   15.09967,
   13.79357,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(41,Graph_from_nvtx_fx3021,Graph_from_nvtx_fy3021,Graph_from_nvtx_felx3021,Graph_from_nvtx_fehx3021,Graph_from_nvtx_fely3021,Graph_from_nvtx_fehy3021);
   grae->SetName("Graph_from_nvtx");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_nvtx3021 = new TH1F("Graph_Graph_from_nvtx3021","Data",100,0,44);
   Graph_Graph_from_nvtx3021->SetMinimum(0);
   Graph_Graph_from_nvtx3021->SetMaximum(10007.67);
   Graph_Graph_from_nvtx3021->SetDirectory(0);
   Graph_Graph_from_nvtx3021->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_nvtx3021->SetLineColor(ci);
   Graph_Graph_from_nvtx3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3021->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3021->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3021->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3021->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_nvtx3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_nvtx3021->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_nvtx3021->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_nvtx3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_nvtx3021);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.45,0.815,0.98,0.925,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(16);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph_from_nvtx","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nvtx_t#bar{t}","t#bar{t}","f");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nvtx_Diboson","Diboson","f");

   ci = TColor::GetColor("#ffff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nvtx_DY","DY","f");

   ci = TColor::GetColor("#33ccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nvtx_W","W","f");

   ci = TColor::GetColor("#3366ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   entry=leg->AddEntry("nvtx_Single top","Single top","f");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(43);
   leg->Draw();
   TLatex *   tex = new TLatex(0.18,0.95,"#bf{CMS} #it{Preliminary} 35.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(43);
   tex->SetTextSize(16);
   tex->SetLineWidth(2);
   tex->Draw();
   p1->Modified();
   c->cd();
  
// ------------>Primitives in pad: p2
   TPad *p2 = new TPad("p2", "p2",0,0.85,1,1);
   p2->Draw();
   p2->cd();
   p2->Range(-5.783133,0.4485106,42.40964,1.597447);
   p2->SetFillColor(0);
   p2->SetBorderMode(0);
   p2->SetBorderSize(2);
   p2->SetGridx();
   p2->SetGridy();
   p2->SetLeftMargin(0.12);
   p2->SetRightMargin(0.05);
   p2->SetTopMargin(0.05);
   p2->SetBottomMargin(0.01);
   p2->SetFrameBorderMode(0);
   p2->SetFrameBorderMode(0);
   
   TH1F *ratioframe__77 = new TH1F("ratioframe__77","t#bar{t}",40,0,40);
   ratioframe__77->SetMinimum(0.46);
   ratioframe__77->SetMaximum(1.54);
   ratioframe__77->SetEntries(369734);

   ci = TColor::GetColor("#cc0000");
   ratioframe__77->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__77->SetMarkerColor(ci);
   ratioframe__77->GetXaxis()->SetTitle("Vertex multiplicity");
   ratioframe__77->GetXaxis()->SetLabelFont(42);
   ratioframe__77->GetXaxis()->SetLabelSize(0);
   ratioframe__77->GetXaxis()->SetTitleSize(0);
   ratioframe__77->GetXaxis()->SetTitleOffset(0);
   ratioframe__77->GetXaxis()->SetTitleFont(42);
   ratioframe__77->GetYaxis()->SetTitle("Data/MC");
   ratioframe__77->GetYaxis()->SetNoExponent();
   ratioframe__77->GetYaxis()->SetNdivisions(5);
   ratioframe__77->GetYaxis()->SetLabelFont(42);
   ratioframe__77->GetYaxis()->SetLabelSize(0.18);
   ratioframe__77->GetYaxis()->SetTitleSize(0.2);
   ratioframe__77->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__77->GetYaxis()->SetTitleFont(42);
   ratioframe__77->GetZaxis()->SetLabelFont(42);
   ratioframe__77->GetZaxis()->SetLabelSize(0.035);
   ratioframe__77->GetZaxis()->SetTitleSize(0.035);
   ratioframe__77->GetZaxis()->SetTitleFont(42);
   ratioframe__77->Draw("");
   
   Double_t Graph_from_ratio_fx3022[40] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5,
   15.5,
   16.5,
   17.5,
   18.5,
   19.5,
   20.5,
   21.5,
   22.5,
   23.5,
   24.5,
   25.5,
   26.5,
   27.5,
   28.5,
   29.5,
   30.5,
   31.5,
   32.5,
   33.5,
   34.5,
   35.5,
   36.5,
   37.5,
   38.5,
   39.5};
   Double_t Graph_from_ratio_fy3022[40] = {
   0,
   1.391841,
   0.874918,
   1.189161,
   0.9832368,
   1.273271,
   1.268952,
   1.278875,
   1.340483,
   1.28611,
   1.249068,
   1.254525,
   1.214939,
   1.198866,
   1.171949,
   1.123341,
   1.082857,
   1.044466,
   0.991443,
   0.9609224,
   0.9256883,
   0.8700541,
   0.8526085,
   0.8164816,
   0.7776582,
   0.7416875,
   0.6943444,
   0.6893958,
   0.6562047,
   0.5810155,
   0.5199297,
   0.5400663,
   0.4677641,
   0.442888,
   0.4171715,
   0.3863048,
   0.3384091,
   0.3215587,
   0.3305378,
   0.2688561};
   Double_t Graph_from_ratio_felx3022[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fely3022[40] = {
   0,
   0.6396228,
   0.2627666,
   0.2109047,
   0.1111356,
   0.09289389,
   0.06426708,
   0.04880566,
   0.0387498,
   0.0303671,
   0.02515186,
   0.02195723,
   0.0201037,
   0.01769676,
   0.01641318,
   0.01494441,
   0.01398472,
   0.01350274,
   0.01291978,
   0.01269562,
   0.01295981,
   0.01254052,
   0.01317575,
   0.01307659,
   0.01337161,
   0.01383517,
   0.01419262,
   0.01504529,
   0.01566981,
   0.01599423,
   0.01629128,
   0.01740089,
   0.0171681,
   0.01834098,
   0.01877846,
   0.0196387,
   0.01972511,
   0.02010675,
   0.02343498,
   0.02229987};
   Double_t Graph_from_ratio_fehx3022[40] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_ratio_fehy3022[40] = {
   0,
   0.6396228,
   0.2627666,
   0.2109047,
   0.1111356,
   0.09289389,
   0.06426708,
   0.04880566,
   0.0387498,
   0.0303671,
   0.02515186,
   0.02195723,
   0.0201037,
   0.01769676,
   0.01641318,
   0.01494441,
   0.01398472,
   0.01350274,
   0.01291978,
   0.01269562,
   0.01295981,
   0.01254052,
   0.01317575,
   0.01307659,
   0.01337161,
   0.01383517,
   0.01419262,
   0.01504529,
   0.01566981,
   0.01599423,
   0.01629128,
   0.01740089,
   0.0171681,
   0.01834098,
   0.01877846,
   0.0196387,
   0.01972511,
   0.02010675,
   0.02343498,
   0.02229987};
   grae = new TGraphAsymmErrors(40,Graph_from_ratio_fx3022,Graph_from_ratio_fy3022,Graph_from_ratio_felx3022,Graph_from_ratio_fehx3022,Graph_from_ratio_fely3022,Graph_from_ratio_fehy3022);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3022 = new TH1F("Graph_Graph_from_ratio3022","Data",100,0,44);
   Graph_Graph_from_ratio3022->SetMinimum(0);
   Graph_Graph_from_ratio3022->SetMaximum(2.23461);
   Graph_Graph_from_ratio3022->SetDirectory(0);
   Graph_Graph_from_ratio3022->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3022->SetLineColor(ci);
   Graph_Graph_from_ratio3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3022->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3022->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3022);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
