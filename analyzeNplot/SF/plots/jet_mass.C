void jet_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 16:38:00 2018) by ROOT version6.08/07
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
   p1->Range(-14.45783,-14561.96,106.0241,106788.5);
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
   
   TH1F *frame__57 = new TH1F("frame__57","t#bar{t}",50,0,100);
   frame__57->SetMinimum(0.1);
   frame__57->SetMaximum(105575);
   frame__57->SetEntries(971099);
   frame__57->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__57->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__57->SetMarkerColor(ci);
   frame__57->GetXaxis()->SetTitle("mass [GeV]");
   frame__57->GetXaxis()->SetLabelFont(42);
   frame__57->GetXaxis()->SetLabelSize(0.035);
   frame__57->GetXaxis()->SetTitleSize(0.035);
   frame__57->GetXaxis()->SetTitleFont(42);
   frame__57->GetYaxis()->SetTitle(" Events");
   frame__57->GetYaxis()->SetNoExponent();
   frame__57->GetYaxis()->SetLabelFont(42);
   frame__57->GetYaxis()->SetTitleSize(0.045);
   frame__57->GetYaxis()->SetTitleOffset(1.3);
   frame__57->GetYaxis()->SetTitleFont(42);
   frame__57->GetZaxis()->SetLabelFont(42);
   frame__57->GetZaxis()->SetLabelSize(0.035);
   frame__57->GetZaxis()->SetTitleSize(0.035);
   frame__57->GetZaxis()->SetTitleFont(42);
   frame__57->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_9 = new TH1F("mc_stack_9","mc",50,0,100);
   mc_stack_9->SetMinimum(-1.768051e-06);
   mc_stack_9->SetMaximum(85272.12);
   mc_stack_9->SetDirectory(0);
   mc_stack_9->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_9->SetLineColor(ci);
   mc_stack_9->GetXaxis()->SetLabelFont(42);
   mc_stack_9->GetXaxis()->SetLabelSize(0.035);
   mc_stack_9->GetXaxis()->SetTitleSize(0.035);
   mc_stack_9->GetXaxis()->SetTitleFont(42);
   mc_stack_9->GetYaxis()->SetLabelFont(42);
   mc_stack_9->GetYaxis()->SetLabelSize(0.035);
   mc_stack_9->GetYaxis()->SetTitleSize(0.035);
   mc_stack_9->GetYaxis()->SetTitleFont(42);
   mc_stack_9->GetZaxis()->SetLabelFont(42);
   mc_stack_9->GetZaxis()->SetLabelSize(0.035);
   mc_stack_9->GetZaxis()->SetTitleSize(0.035);
   mc_stack_9->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_9);
   
   
   TH1F *jet_mass_t#bar{t}__58 = new TH1F("jet_mass_t#bar{t}__58","t#bar{t}",50,0,100);
   jet_mass_t#bar{t}__58->SetBinContent(0,2.439904);
   jet_mass_t#bar{t}__58->SetBinContent(1,32.61117);
   jet_mass_t#bar{t}__58->SetBinContent(2,1472.533);
   jet_mass_t#bar{t}__58->SetBinContent(3,24273.18);
   jet_mass_t#bar{t}__58->SetBinContent(4,75430.48);
   jet_mass_t#bar{t}__58->SetBinContent(5,77664.31);
   jet_mass_t#bar{t}__58->SetBinContent(6,58931.5);
   jet_mass_t#bar{t}__58->SetBinContent(7,41277.11);
   jet_mass_t#bar{t}__58->SetBinContent(8,27897.71);
   jet_mass_t#bar{t}__58->SetBinContent(9,18297.12);
   jet_mass_t#bar{t}__58->SetBinContent(10,12114.5);
   jet_mass_t#bar{t}__58->SetBinContent(11,8107.121);
   jet_mass_t#bar{t}__58->SetBinContent(12,5482.308);
   jet_mass_t#bar{t}__58->SetBinContent(13,3749.67);
   jet_mass_t#bar{t}__58->SetBinContent(14,2659.299);
   jet_mass_t#bar{t}__58->SetBinContent(15,1965.432);
   jet_mass_t#bar{t}__58->SetBinContent(16,1438.717);
   jet_mass_t#bar{t}__58->SetBinContent(17,1053.85);
   jet_mass_t#bar{t}__58->SetBinContent(18,826.0034);
   jet_mass_t#bar{t}__58->SetBinContent(19,611.6428);
   jet_mass_t#bar{t}__58->SetBinContent(20,492.0499);
   jet_mass_t#bar{t}__58->SetBinContent(21,392.8153);
   jet_mass_t#bar{t}__58->SetBinContent(22,294.6489);
   jet_mass_t#bar{t}__58->SetBinContent(23,248.4975);
   jet_mass_t#bar{t}__58->SetBinContent(24,191.9943);
   jet_mass_t#bar{t}__58->SetBinContent(25,163.6761);
   jet_mass_t#bar{t}__58->SetBinContent(26,133.61);
   jet_mass_t#bar{t}__58->SetBinContent(27,113.407);
   jet_mass_t#bar{t}__58->SetBinContent(28,95.66453);
   jet_mass_t#bar{t}__58->SetBinContent(29,74.19067);
   jet_mass_t#bar{t}__58->SetBinContent(30,75.62052);
   jet_mass_t#bar{t}__58->SetBinContent(31,63.00461);
   jet_mass_t#bar{t}__58->SetBinContent(32,43.31319);
   jet_mass_t#bar{t}__58->SetBinContent(33,46.72568);
   jet_mass_t#bar{t}__58->SetBinContent(34,34.68843);
   jet_mass_t#bar{t}__58->SetBinContent(35,30.65079);
   jet_mass_t#bar{t}__58->SetBinContent(36,19.05219);
   jet_mass_t#bar{t}__58->SetBinContent(37,23.86176);
   jet_mass_t#bar{t}__58->SetBinContent(38,19.68991);
   jet_mass_t#bar{t}__58->SetBinContent(39,15.58502);
   jet_mass_t#bar{t}__58->SetBinContent(40,15.3025);
   jet_mass_t#bar{t}__58->SetBinContent(41,10.2715);
   jet_mass_t#bar{t}__58->SetBinContent(42,12.13289);
   jet_mass_t#bar{t}__58->SetBinContent(43,10.0099);
   jet_mass_t#bar{t}__58->SetBinContent(44,7.252941);
   jet_mass_t#bar{t}__58->SetBinContent(45,6.870716);
   jet_mass_t#bar{t}__58->SetBinContent(46,7.21734);
   jet_mass_t#bar{t}__58->SetBinContent(47,8.370443);
   jet_mass_t#bar{t}__58->SetBinContent(48,5.148865);
   jet_mass_t#bar{t}__58->SetBinContent(49,4.777431);
   jet_mass_t#bar{t}__58->SetBinContent(50,3.994116);
   jet_mass_t#bar{t}__58->SetBinContent(51,31.98185);
   jet_mass_t#bar{t}__58->SetBinError(0,0.9989119);
   jet_mass_t#bar{t}__58->SetBinError(1,3.61458);
   jet_mass_t#bar{t}__58->SetBinError(2,24.60908);
   jet_mass_t#bar{t}__58->SetBinError(3,99.87895);
   jet_mass_t#bar{t}__58->SetBinError(4,176.0208);
   jet_mass_t#bar{t}__58->SetBinError(5,178.6143);
   jet_mass_t#bar{t}__58->SetBinError(6,155.5663);
   jet_mass_t#bar{t}__58->SetBinError(7,130.1983);
   jet_mass_t#bar{t}__58->SetBinError(8,107.0223);
   jet_mass_t#bar{t}__58->SetBinError(9,86.67808);
   jet_mass_t#bar{t}__58->SetBinError(10,70.55775);
   jet_mass_t#bar{t}__58->SetBinError(11,57.73141);
   jet_mass_t#bar{t}__58->SetBinError(12,47.46388);
   jet_mass_t#bar{t}__58->SetBinError(13,39.26967);
   jet_mass_t#bar{t}__58->SetBinError(14,33.06524);
   jet_mass_t#bar{t}__58->SetBinError(15,28.4248);
   jet_mass_t#bar{t}__58->SetBinError(16,24.27496);
   jet_mass_t#bar{t}__58->SetBinError(17,20.74966);
   jet_mass_t#bar{t}__58->SetBinError(18,18.41355);
   jet_mass_t#bar{t}__58->SetBinError(19,15.82279);
   jet_mass_t#bar{t}__58->SetBinError(20,14.19696);
   jet_mass_t#bar{t}__58->SetBinError(21,12.67078);
   jet_mass_t#bar{t}__58->SetBinError(22,10.96943);
   jet_mass_t#bar{t}__58->SetBinError(23,10.09506);
   jet_mass_t#bar{t}__58->SetBinError(24,8.89802);
   jet_mass_t#bar{t}__58->SetBinError(25,8.152275);
   jet_mass_t#bar{t}__58->SetBinError(26,7.428758);
   jet_mass_t#bar{t}__58->SetBinError(27,6.796695);
   jet_mass_t#bar{t}__58->SetBinError(28,6.26448);
   jet_mass_t#bar{t}__58->SetBinError(29,5.522137);
   jet_mass_t#bar{t}__58->SetBinError(30,5.539368);
   jet_mass_t#bar{t}__58->SetBinError(31,5.063387);
   jet_mass_t#bar{t}__58->SetBinError(32,4.199846);
   jet_mass_t#bar{t}__58->SetBinError(33,4.38771);
   jet_mass_t#bar{t}__58->SetBinError(34,3.754807);
   jet_mass_t#bar{t}__58->SetBinError(35,3.590819);
   jet_mass_t#bar{t}__58->SetBinError(36,2.782099);
   jet_mass_t#bar{t}__58->SetBinError(37,3.138974);
   jet_mass_t#bar{t}__58->SetBinError(38,2.863014);
   jet_mass_t#bar{t}__58->SetBinError(39,2.530248);
   jet_mass_t#bar{t}__58->SetBinError(40,2.498985);
   jet_mass_t#bar{t}__58->SetBinError(41,1.987706);
   jet_mass_t#bar{t}__58->SetBinError(42,2.250216);
   jet_mass_t#bar{t}__58->SetBinError(43,2.011813);
   jet_mass_t#bar{t}__58->SetBinError(44,1.726212);
   jet_mass_t#bar{t}__58->SetBinError(45,1.641645);
   jet_mass_t#bar{t}__58->SetBinError(46,1.694423);
   jet_mass_t#bar{t}__58->SetBinError(47,1.877187);
   jet_mass_t#bar{t}__58->SetBinError(48,1.46721);
   jet_mass_t#bar{t}__58->SetBinError(49,1.400912);
   jet_mass_t#bar{t}__58->SetBinError(50,1.274505);
   jet_mass_t#bar{t}__58->SetBinError(51,3.609154);
   jet_mass_t#bar{t}__58->SetEntries(957304);
   jet_mass_t#bar{t}__58->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   jet_mass_t#bar{t}__58->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   jet_mass_t#bar{t}__58->SetMarkerColor(ci);
   jet_mass_t#bar{t}__58->GetXaxis()->SetTitle("mass [GeV]");
   jet_mass_t#bar{t}__58->GetXaxis()->SetLabelFont(42);
   jet_mass_t#bar{t}__58->GetXaxis()->SetLabelSize(0.035);
   jet_mass_t#bar{t}__58->GetXaxis()->SetTitleSize(0.035);
   jet_mass_t#bar{t}__58->GetXaxis()->SetTitleFont(42);
   jet_mass_t#bar{t}__58->GetYaxis()->SetTitle(" Events");
   jet_mass_t#bar{t}__58->GetYaxis()->SetLabelFont(42);
   jet_mass_t#bar{t}__58->GetYaxis()->SetLabelSize(0.035);
   jet_mass_t#bar{t}__58->GetYaxis()->SetTitleSize(0.035);
   jet_mass_t#bar{t}__58->GetYaxis()->SetTitleFont(42);
   jet_mass_t#bar{t}__58->GetZaxis()->SetLabelFont(42);
   jet_mass_t#bar{t}__58->GetZaxis()->SetLabelSize(0.035);
   jet_mass_t#bar{t}__58->GetZaxis()->SetTitleSize(0.035);
   jet_mass_t#bar{t}__58->GetZaxis()->SetTitleFont(42);
   mc->Add(jet_mass_t#bar{t},"hist");
   
   TH1F *jet_mass_Diboson__59 = new TH1F("jet_mass_Diboson__59","Diboson",50,0,100);
   jet_mass_Diboson__59->SetBinContent(1,0.3754105);
   jet_mass_Diboson__59->SetBinContent(2,4.682919);
   jet_mass_Diboson__59->SetBinContent(3,42.45911);
   jet_mass_Diboson__59->SetBinContent(4,96.3009);
   jet_mass_Diboson__59->SetBinContent(5,95.53221);
   jet_mass_Diboson__59->SetBinContent(6,42.81783);
   jet_mass_Diboson__59->SetBinContent(7,40.84133);
   jet_mass_Diboson__59->SetBinContent(8,21.23939);
   jet_mass_Diboson__59->SetBinContent(9,16.93663);
   jet_mass_Diboson__59->SetBinContent(10,13.39002);
   jet_mass_Diboson__59->SetBinContent(11,11.21381);
   jet_mass_Diboson__59->SetBinContent(12,8.563224);
   jet_mass_Diboson__59->SetBinContent(13,8.026514);
   jet_mass_Diboson__59->SetBinContent(14,4.404388);
   jet_mass_Diboson__59->SetBinContent(15,3.700307);
   jet_mass_Diboson__59->SetBinContent(16,3.619642);
   jet_mass_Diboson__59->SetBinContent(17,2.990189);
   jet_mass_Diboson__59->SetBinContent(18,4.221807);
   jet_mass_Diboson__59->SetBinContent(19,0.8174824);
   jet_mass_Diboson__59->SetBinContent(20,2.407136);
   jet_mass_Diboson__59->SetBinContent(21,2.654902);
   jet_mass_Diboson__59->SetBinContent(22,0.7657267);
   jet_mass_Diboson__59->SetBinContent(23,2.157194);
   jet_mass_Diboson__59->SetBinContent(24,1.169143);
   jet_mass_Diboson__59->SetBinContent(25,1.233407);
   jet_mass_Diboson__59->SetBinContent(26,1.142713);
   jet_mass_Diboson__59->SetBinContent(27,0.319912);
   jet_mass_Diboson__59->SetBinContent(29,1.002345);
   jet_mass_Diboson__59->SetBinContent(30,0.3817545);
   jet_mass_Diboson__59->SetBinContent(31,0.003944129);
   jet_mass_Diboson__59->SetBinContent(32,0.3840374);
   jet_mass_Diboson__59->SetBinContent(34,0.4029604);
   jet_mass_Diboson__59->SetBinContent(35,0.3779458);
   jet_mass_Diboson__59->SetBinContent(36,0.7409413);
   jet_mass_Diboson__59->SetBinContent(37,0.4392546);
   jet_mass_Diboson__59->SetBinError(1,0.3754105);
   jet_mass_Diboson__59->SetBinError(2,1.333073);
   jet_mass_Diboson__59->SetBinError(3,4.059795);
   jet_mass_Diboson__59->SetBinError(4,6.127908);
   jet_mass_Diboson__59->SetBinError(5,6.118428);
   jet_mass_Diboson__59->SetBinError(6,4.055612);
   jet_mass_Diboson__59->SetBinError(7,3.998142);
   jet_mass_Diboson__59->SetBinError(8,2.843179);
   jet_mass_Diboson__59->SetBinError(9,2.566534);
   jet_mass_Diboson__59->SetBinError(10,2.284072);
   jet_mass_Diboson__59->SetBinError(11,2.051158);
   jet_mass_Diboson__59->SetBinError(12,1.817271);
   jet_mass_Diboson__59->SetBinError(13,1.742812);
   jet_mass_Diboson__59->SetBinError(14,1.278418);
   jet_mass_Diboson__59->SetBinError(15,1.180646);
   jet_mass_Diboson__59->SetBinError(16,1.159799);
   jet_mass_Diboson__59->SetBinError(17,1.058814);
   jet_mass_Diboson__59->SetBinError(18,1.275477);
   jet_mass_Diboson__59->SetBinError(19,0.5808625);
   jet_mass_Diboson__59->SetBinError(20,0.9960199);
   jet_mass_Diboson__59->SetBinError(21,1.001858);
   jet_mass_Diboson__59->SetBinError(22,0.5450171);
   jet_mass_Diboson__59->SetBinError(23,0.8897183);
   jet_mass_Diboson__59->SetBinError(24,0.675496);
   jet_mass_Diboson__59->SetBinError(25,0.7132615);
   jet_mass_Diboson__59->SetBinError(26,0.6597895);
   jet_mass_Diboson__59->SetBinError(27,0.3199121);
   jet_mass_Diboson__59->SetBinError(29,0.5821369);
   jet_mass_Diboson__59->SetBinError(30,0.3817545);
   jet_mass_Diboson__59->SetBinError(31,0.003944129);
   jet_mass_Diboson__59->SetBinError(32,0.3840374);
   jet_mass_Diboson__59->SetBinError(34,0.4029604);
   jet_mass_Diboson__59->SetBinError(35,0.3779458);
   jet_mass_Diboson__59->SetBinError(36,0.5241503);
   jet_mass_Diboson__59->SetBinError(37,0.4392546);
   jet_mass_Diboson__59->SetEntries(1233);
   jet_mass_Diboson__59->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   jet_mass_Diboson__59->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   jet_mass_Diboson__59->SetMarkerColor(ci);
   jet_mass_Diboson__59->GetXaxis()->SetTitle("mass [GeV]");
   jet_mass_Diboson__59->GetXaxis()->SetLabelFont(42);
   jet_mass_Diboson__59->GetXaxis()->SetLabelSize(0.035);
   jet_mass_Diboson__59->GetXaxis()->SetTitleSize(0.035);
   jet_mass_Diboson__59->GetXaxis()->SetTitleFont(42);
   jet_mass_Diboson__59->GetYaxis()->SetTitle(" Events");
   jet_mass_Diboson__59->GetYaxis()->SetLabelFont(42);
   jet_mass_Diboson__59->GetYaxis()->SetLabelSize(0.035);
   jet_mass_Diboson__59->GetYaxis()->SetTitleSize(0.035);
   jet_mass_Diboson__59->GetYaxis()->SetTitleFont(42);
   jet_mass_Diboson__59->GetZaxis()->SetLabelFont(42);
   jet_mass_Diboson__59->GetZaxis()->SetLabelSize(0.035);
   jet_mass_Diboson__59->GetZaxis()->SetTitleSize(0.035);
   jet_mass_Diboson__59->GetZaxis()->SetTitleFont(42);
   mc->Add(jet_mass_Diboson,"hist");
   
   TH1F *jet_mass_DY__60 = new TH1F("jet_mass_DY__60","DY",50,0,100);
   jet_mass_DY__60->SetBinContent(3,101.5626);
   jet_mass_DY__60->SetBinContent(4,136.868);
   jet_mass_DY__60->SetBinContent(5,211.9647);
   jet_mass_DY__60->SetBinContent(6,70.84422);
   jet_mass_DY__60->SetBinContent(7,51.41822);
   jet_mass_DY__60->SetBinContent(8,35.5871);
   jet_mass_DY__60->SetBinContent(9,52.92117);
   jet_mass_DY__60->SetBinContent(10,1.98969);
   jet_mass_DY__60->SetBinContent(11,16.02805);
   jet_mass_DY__60->SetBinContent(12,15.61073);
   jet_mass_DY__60->SetBinContent(13,17.96951);
   jet_mass_DY__60->SetBinContent(15,19.68991);
   jet_mass_DY__60->SetBinContent(25,19.12663);
   jet_mass_DY__60->SetBinError(3,41.66878);
   jet_mass_DY__60->SetBinError(4,47.99119);
   jet_mass_DY__60->SetBinError(5,61.03436);
   jet_mass_DY__60->SetBinError(6,35.63076);
   jet_mass_DY__60->SetBinError(7,29.04041);
   jet_mass_DY__60->SetBinError(8,25.2344);
   jet_mass_DY__60->SetBinError(9,30.81136);
   jet_mass_DY__60->SetBinError(10,1.98969);
   jet_mass_DY__60->SetBinError(11,16.02805);
   jet_mass_DY__60->SetBinError(12,15.61073);
   jet_mass_DY__60->SetBinError(13,17.96951);
   jet_mass_DY__60->SetBinError(15,19.68991);
   jet_mass_DY__60->SetBinError(25,19.12663);
   jet_mass_DY__60->SetEntries(47);
   jet_mass_DY__60->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   jet_mass_DY__60->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   jet_mass_DY__60->SetMarkerColor(ci);
   jet_mass_DY__60->GetXaxis()->SetTitle("mass [GeV]");
   jet_mass_DY__60->GetXaxis()->SetLabelFont(42);
   jet_mass_DY__60->GetXaxis()->SetLabelSize(0.035);
   jet_mass_DY__60->GetXaxis()->SetTitleSize(0.035);
   jet_mass_DY__60->GetXaxis()->SetTitleFont(42);
   jet_mass_DY__60->GetYaxis()->SetTitle(" Events");
   jet_mass_DY__60->GetYaxis()->SetLabelFont(42);
   jet_mass_DY__60->GetYaxis()->SetLabelSize(0.035);
   jet_mass_DY__60->GetYaxis()->SetTitleSize(0.035);
   jet_mass_DY__60->GetYaxis()->SetTitleFont(42);
   jet_mass_DY__60->GetZaxis()->SetLabelFont(42);
   jet_mass_DY__60->GetZaxis()->SetLabelSize(0.035);
   jet_mass_DY__60->GetZaxis()->SetTitleSize(0.035);
   jet_mass_DY__60->GetZaxis()->SetTitleFont(42);
   mc->Add(jet_mass_DY,"hist");
   
   TH1F *jet_mass_W__61 = new TH1F("jet_mass_W__61","W",50,0,100);
   jet_mass_W__61->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   jet_mass_W__61->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   jet_mass_W__61->SetMarkerColor(ci);
   jet_mass_W__61->GetXaxis()->SetTitle("mass [GeV]");
   jet_mass_W__61->GetXaxis()->SetLabelFont(42);
   jet_mass_W__61->GetXaxis()->SetLabelSize(0.035);
   jet_mass_W__61->GetXaxis()->SetTitleSize(0.035);
   jet_mass_W__61->GetXaxis()->SetTitleFont(42);
   jet_mass_W__61->GetYaxis()->SetTitle(" Events");
   jet_mass_W__61->GetYaxis()->SetLabelFont(42);
   jet_mass_W__61->GetYaxis()->SetLabelSize(0.035);
   jet_mass_W__61->GetYaxis()->SetTitleSize(0.035);
   jet_mass_W__61->GetYaxis()->SetTitleFont(42);
   jet_mass_W__61->GetZaxis()->SetLabelFont(42);
   jet_mass_W__61->GetZaxis()->SetLabelSize(0.035);
   jet_mass_W__61->GetZaxis()->SetTitleSize(0.035);
   jet_mass_W__61->GetZaxis()->SetTitleFont(42);
   mc->Add(jet_mass_W,"hist");
   
   TH1F *jet_mass_SinglesPtop__62 = new TH1F("jet_mass_SinglesPtop__62","Single top",50,0,100);
   jet_mass_SinglesPtop__62->SetBinContent(2,69.58601);
   jet_mass_SinglesPtop__62->SetBinContent(3,1156.455);
   jet_mass_SinglesPtop__62->SetBinContent(4,3413.085);
   jet_mass_SinglesPtop__62->SetBinContent(5,3239.742);
   jet_mass_SinglesPtop__62->SetBinContent(6,2392.866);
   jet_mass_SinglesPtop__62->SetBinContent(7,1570.892);
   jet_mass_SinglesPtop__62->SetBinContent(8,1003.359);
   jet_mass_SinglesPtop__62->SetBinContent(9,761.4987);
   jet_mass_SinglesPtop__62->SetBinContent(10,507.6777);
   jet_mass_SinglesPtop__62->SetBinContent(11,320.1687);
   jet_mass_SinglesPtop__62->SetBinContent(12,271.5014);
   jet_mass_SinglesPtop__62->SetBinContent(13,182.5503);
   jet_mass_SinglesPtop__62->SetBinContent(14,124.5949);
   jet_mass_SinglesPtop__62->SetBinContent(15,88.29615);
   jet_mass_SinglesPtop__62->SetBinContent(16,85.00468);
   jet_mass_SinglesPtop__62->SetBinContent(17,60.91505);
   jet_mass_SinglesPtop__62->SetBinContent(18,64.12775);
   jet_mass_SinglesPtop__62->SetBinContent(19,35.93717);
   jet_mass_SinglesPtop__62->SetBinContent(20,34.62452);
   jet_mass_SinglesPtop__62->SetBinContent(21,21.30569);
   jet_mass_SinglesPtop__62->SetBinContent(22,22.23093);
   jet_mass_SinglesPtop__62->SetBinContent(23,21.21279);
   jet_mass_SinglesPtop__62->SetBinContent(24,15.49484);
   jet_mass_SinglesPtop__62->SetBinContent(25,12.24872);
   jet_mass_SinglesPtop__62->SetBinContent(26,9.425515);
   jet_mass_SinglesPtop__62->SetBinContent(27,4.730192);
   jet_mass_SinglesPtop__62->SetBinContent(28,1.790703);
   jet_mass_SinglesPtop__62->SetBinContent(29,2.878812);
   jet_mass_SinglesPtop__62->SetBinContent(30,1.333864);
   jet_mass_SinglesPtop__62->SetBinContent(31,3.791555);
   jet_mass_SinglesPtop__62->SetBinContent(32,7.143363);
   jet_mass_SinglesPtop__62->SetBinContent(33,6.892849);
   jet_mass_SinglesPtop__62->SetBinContent(34,3.918708);
   jet_mass_SinglesPtop__62->SetBinContent(35,2.661753);
   jet_mass_SinglesPtop__62->SetBinContent(36,2.594714);
   jet_mass_SinglesPtop__62->SetBinContent(38,1.279825);
   jet_mass_SinglesPtop__62->SetBinContent(39,1.191233);
   jet_mass_SinglesPtop__62->SetBinContent(40,1.315734);
   jet_mass_SinglesPtop__62->SetBinContent(41,2.921847);
   jet_mass_SinglesPtop__62->SetBinContent(42,1.288945);
   jet_mass_SinglesPtop__62->SetBinContent(44,1.328573);
   jet_mass_SinglesPtop__62->SetBinContent(45,0.7844936);
   jet_mass_SinglesPtop__62->SetBinContent(51,4.571284);
   jet_mass_SinglesPtop__62->SetBinError(2,9.691146);
   jet_mass_SinglesPtop__62->SetBinError(3,39.35294);
   jet_mass_SinglesPtop__62->SetBinError(4,67.54922);
   jet_mass_SinglesPtop__62->SetBinError(5,65.8846);
   jet_mass_SinglesPtop__62->SetBinError(6,56.55191);
   jet_mass_SinglesPtop__62->SetBinError(7,45.80494);
   jet_mass_SinglesPtop__62->SetBinError(8,36.69143);
   jet_mass_SinglesPtop__62->SetBinError(9,31.90958);
   jet_mass_SinglesPtop__62->SetBinError(10,26.10808);
   jet_mass_SinglesPtop__62->SetBinError(11,20.73133);
   jet_mass_SinglesPtop__62->SetBinError(12,19.22103);
   jet_mass_SinglesPtop__62->SetBinError(13,15.62615);
   jet_mass_SinglesPtop__62->SetBinError(14,12.77616);
   jet_mass_SinglesPtop__62->SetBinError(15,10.94648);
   jet_mass_SinglesPtop__62->SetBinError(16,10.75574);
   jet_mass_SinglesPtop__62->SetBinError(17,8.916771);
   jet_mass_SinglesPtop__62->SetBinError(18,9.382939);
   jet_mass_SinglesPtop__62->SetBinError(19,6.902864);
   jet_mass_SinglesPtop__62->SetBinError(20,6.82753);
   jet_mass_SinglesPtop__62->SetBinError(21,5.256656);
   jet_mass_SinglesPtop__62->SetBinError(22,5.354081);
   jet_mass_SinglesPtop__62->SetBinError(23,5.285106);
   jet_mass_SinglesPtop__62->SetBinError(24,4.574794);
   jet_mass_SinglesPtop__62->SetBinError(25,4.117013);
   jet_mass_SinglesPtop__62->SetBinError(26,3.467556);
   jet_mass_SinglesPtop__62->SetBinError(27,2.378494);
   jet_mass_SinglesPtop__62->SetBinError(28,1.359712);
   jet_mass_SinglesPtop__62->SetBinError(29,2.040164);
   jet_mass_SinglesPtop__62->SetBinError(30,1.333864);
   jet_mass_SinglesPtop__62->SetBinError(31,2.190892);
   jet_mass_SinglesPtop__62->SetBinError(32,3.019492);
   jet_mass_SinglesPtop__62->SetBinError(33,3.088508);
   jet_mass_SinglesPtop__62->SetBinError(34,2.276457);
   jet_mass_SinglesPtop__62->SetBinError(35,1.882281);
   jet_mass_SinglesPtop__62->SetBinError(36,1.840457);
   jet_mass_SinglesPtop__62->SetBinError(38,1.279825);
   jet_mass_SinglesPtop__62->SetBinError(39,1.191233);
   jet_mass_SinglesPtop__62->SetBinError(40,1.315734);
   jet_mass_SinglesPtop__62->SetBinError(41,2.070498);
   jet_mass_SinglesPtop__62->SetBinError(42,1.288945);
   jet_mass_SinglesPtop__62->SetBinError(44,1.328573);
   jet_mass_SinglesPtop__62->SetBinError(45,0.7844936);
   jet_mass_SinglesPtop__62->SetBinError(51,2.6396);
   jet_mass_SinglesPtop__62->SetEntries(12515);
   jet_mass_SinglesPtop__62->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   jet_mass_SinglesPtop__62->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   jet_mass_SinglesPtop__62->SetMarkerColor(ci);
   jet_mass_SinglesPtop__62->GetXaxis()->SetTitle("mass [GeV]");
   jet_mass_SinglesPtop__62->GetXaxis()->SetLabelFont(42);
   jet_mass_SinglesPtop__62->GetXaxis()->SetLabelSize(0.035);
   jet_mass_SinglesPtop__62->GetXaxis()->SetTitleSize(0.035);
   jet_mass_SinglesPtop__62->GetXaxis()->SetTitleFont(42);
   jet_mass_SinglesPtop__62->GetYaxis()->SetTitle(" Events");
   jet_mass_SinglesPtop__62->GetYaxis()->SetLabelFont(42);
   jet_mass_SinglesPtop__62->GetYaxis()->SetLabelSize(0.035);
   jet_mass_SinglesPtop__62->GetYaxis()->SetTitleSize(0.035);
   jet_mass_SinglesPtop__62->GetYaxis()->SetTitleFont(42);
   jet_mass_SinglesPtop__62->GetZaxis()->SetLabelFont(42);
   jet_mass_SinglesPtop__62->GetZaxis()->SetLabelSize(0.035);
   jet_mass_SinglesPtop__62->GetZaxis()->SetTitleSize(0.035);
   jet_mass_SinglesPtop__62->GetZaxis()->SetTitleFont(42);
   mc->Add(jet_mass_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_jet_mass_fx3017[51] = {
   1,
   3,
   5,
   7,
   9,
   11,
   13,
   15,
   17,
   19,
   21,
   23,
   25,
   27,
   29,
   31,
   33,
   35,
   37,
   39,
   41,
   43,
   45,
   47,
   49,
   51,
   53,
   55,
   57,
   59,
   61,
   63,
   65,
   67,
   69,
   71,
   73,
   75,
   77,
   79,
   81,
   83,
   85,
   87,
   89,
   91,
   93,
   95,
   97,
   99,
   0};
   Double_t Graph_from_jet_mass_fy3017[51] = {
   48,
   1888,
   26367,
   76418,
   76638,
   56777,
   38734,
   25221,
   16360,
   10880,
   7067,
   4871,
   3295,
   2420,
   1744,
   1340,
   1030,
   747,
   627,
   444,
   363,
   287,
   206,
   180,
   159,
   97,
   88,
   76,
   87,
   67,
   41,
   46,
   43,
   32,
   21,
   23,
   15,
   21,
   17,
   17,
   11,
   8,
   14,
   8,
   10,
   2,
   4,
   7,
   4,
   2,
   0};
   Double_t Graph_from_jet_mass_felx3017[51] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   0};
   Double_t Graph_from_jet_mass_fely3017[51] = {
   6.904115,
   43.45112,
   162.3792,
   276.4381,
   276.8357,
   238.2792,
   196.8096,
   158.8112,
   127.9062,
   104.3072,
   84.06545,
   69.79255,
   57.40209,
   49.1935,
   41.76123,
   36.60601,
   32.09361,
   27.3313,
   25.03997,
   21.07131,
   19.05256,
   16.94107,
   14.3527,
   13.40422,
   12.59651,
   9.832053,
   9.363164,
   8.69875,
   9.309608,
   8.165035,
   6.377022,
   6.757713,
   6.531962,
   5.627243,
   4.545892,
   4.760806,
   3.829449,
   4.545892,
   4.082258,
   4.082258,
   3.265636,
   2.768432,
   3.696566,
   2.768432,
   3.108748,
   1.29183,
   1.914367,
   2.581513,
   1.914367,
   1.29183,
   0};
   Double_t Graph_from_jet_mass_fehx3017[51] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   0};
   Double_t Graph_from_jet_mass_fehy3017[51] = {
   7.976496,
   43.45112,
   162.3792,
   276.4381,
   276.8357,
   238.2792,
   196.8096,
   158.8112,
   127.9062,
   104.3072,
   84.06545,
   69.79255,
   57.40209,
   49.1935,
   41.76123,
   36.60601,
   32.09361,
   27.3313,
   25.03997,
   21.07131,
   19.05256,
   16.94107,
   14.3527,
   14.44158,
   13.63627,
   10.88296,
   10.41661,
   9.756266,
   10.36336,
   9.226295,
   7.45534,
   7.831652,
   7.608436,
   6.715892,
   5.655298,
   5.865355,
   4.958839,
   5.655298,
   5.203825,
   5.203825,
   4.416609,
   3.94522,
   4.830479,
   3.94522,
   4.267035,
   2.63791,
   3.162815,
   3.770356,
   3.162815,
   2.63791,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(51,Graph_from_jet_mass_fx3017,Graph_from_jet_mass_fy3017,Graph_from_jet_mass_felx3017,Graph_from_jet_mass_fehx3017,Graph_from_jet_mass_fely3017,Graph_from_jet_mass_fehy3017);
   grae->SetName("Graph_from_jet_mass");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_jet_mass3017 = new TH1F("Graph_Graph_from_jet_mass3017","Data",100,0,110);
   Graph_Graph_from_jet_mass3017->SetMinimum(0);
   Graph_Graph_from_jet_mass3017->SetMaximum(84606.32);
   Graph_Graph_from_jet_mass3017->SetDirectory(0);
   Graph_Graph_from_jet_mass3017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_jet_mass3017->SetLineColor(ci);
   Graph_Graph_from_jet_mass3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_jet_mass3017->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_jet_mass3017->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_jet_mass3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_jet_mass3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_jet_mass3017->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_jet_mass3017->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_jet_mass3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_jet_mass3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_jet_mass3017->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_jet_mass3017->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_jet_mass3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_jet_mass3017);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_jet_mass","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("jet_mass_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("jet_mass_Diboson","Diboson","f");

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
   entry=leg->AddEntry("jet_mass_DY","DY","f");

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
   entry=leg->AddEntry("jet_mass_W","W","f");

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
   entry=leg->AddEntry("jet_mass_Single top","Single top","f");

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
   p2->Range(-14.45783,0.4485106,106.0241,1.597447);
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
   
   TH1F *ratioframe__63 = new TH1F("ratioframe__63","t#bar{t}",50,0,100);
   ratioframe__63->SetMinimum(0.46);
   ratioframe__63->SetMaximum(1.54);
   ratioframe__63->SetEntries(971099);

   ci = TColor::GetColor("#cc0000");
   ratioframe__63->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__63->SetMarkerColor(ci);
   ratioframe__63->GetXaxis()->SetTitle("mass [GeV]");
   ratioframe__63->GetXaxis()->SetLabelFont(42);
   ratioframe__63->GetXaxis()->SetLabelSize(0);
   ratioframe__63->GetXaxis()->SetTitleSize(0);
   ratioframe__63->GetXaxis()->SetTitleOffset(0);
   ratioframe__63->GetXaxis()->SetTitleFont(42);
   ratioframe__63->GetYaxis()->SetTitle("Data/MC");
   ratioframe__63->GetYaxis()->SetNoExponent();
   ratioframe__63->GetYaxis()->SetNdivisions(5);
   ratioframe__63->GetYaxis()->SetLabelFont(42);
   ratioframe__63->GetYaxis()->SetLabelSize(0.18);
   ratioframe__63->GetYaxis()->SetTitleSize(0.2);
   ratioframe__63->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__63->GetYaxis()->SetTitleFont(42);
   ratioframe__63->GetZaxis()->SetLabelFont(42);
   ratioframe__63->GetZaxis()->SetLabelSize(0.035);
   ratioframe__63->GetZaxis()->SetTitleSize(0.035);
   ratioframe__63->GetZaxis()->SetTitleFont(42);
   ratioframe__63->Draw("");
   
   Double_t Graph_from_ratio_fx3018[50] = {
   1,
   3,
   5,
   7,
   9,
   11,
   13,
   15,
   17,
   19,
   21,
   23,
   25,
   27,
   29,
   31,
   33,
   35,
   37,
   39,
   41,
   43,
   45,
   47,
   49,
   51,
   53,
   55,
   57,
   59,
   61,
   63,
   65,
   67,
   69,
   71,
   73,
   75,
   77,
   79,
   81,
   83,
   85,
   87,
   89,
   91,
   93,
   95,
   97,
   99};
   Double_t Graph_from_ratio_fy3018[50] = {
   1.455137,
   1.220583,
   1.031022,
   0.9663778,
   0.9436836,
   0.9241345,
   0.9020441,
   0.8709541,
   0.8552691,
   0.860926,
   0.8358831,
   0.8430277,
   0.8324457,
   0.8679129,
   0.8396248,
   0.8773414,
   0.9214898,
   0.8352407,
   0.9669995,
   0.83919,
   0.8709717,
   0.9035229,
   0.7577221,
   0.8626546,
   0.810047,
   0.6727784,
   0.7428851,
   0.7798452,
   1.114359,
   0.8663479,
   0.6137714,
   0.9047889,
   0.8019616,
   0.8203003,
   0.6233213,
   1.027343,
   0.6172583,
   1.001443,
   1.013337,
   1.022973,
   0.8337534,
   0.5960435,
   1.398615,
   0.9322364,
   1.3063,
   0.2771104,
   0.477872,
   1.359523,
   0.8372701,
   0.5007367};
   Double_t Graph_from_ratio_felx3018[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_ratio_fely3018[50] = {
   0.2642187,
   0.03501125,
   0.007867406,
   0.004228363,
   0.00412577,
   0.00464024,
   0.005458264,
   0.006499138,
   0.007979861,
   0.009717758,
   0.01175587,
   0.01438693,
   0.01742788,
   0.02081281,
   0.02488779,
   0.02841616,
   0.03423208,
   0.03616393,
   0.04642141,
   0.04704215,
   0.05399992,
   0.06365793,
   0.0616592,
   0.07650556,
   0.1085663,
   0.07835329,
   0.09118501,
   0.1031183,
   0.1462982,
   0.1236715,
   0.1084335,
   0.1622265,
   0.1462788,
   0.1721196,
   0.1554886,
   0.264383,
   0.1785557,
   0.2649278,
   0.2982262,
   0.3029537,
   0.3099904,
   0.2401472,
   0.4676949,
   0.4057444,
   0.5167565,
   0.2064644,
   0.2618696,
   0.6435272,
   0.4853185,
   0.3884574};
   Double_t Graph_from_ratio_fehx3018[50] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_ratio_fehy3018[50] = {
   0.2642187,
   0.03501125,
   0.007867406,
   0.004228363,
   0.00412577,
   0.00464024,
   0.005458264,
   0.006499138,
   0.007979861,
   0.009717758,
   0.01175587,
   0.01438693,
   0.01742788,
   0.02081281,
   0.02488779,
   0.02841616,
   0.03423208,
   0.03616393,
   0.04642141,
   0.04704215,
   0.05399992,
   0.06365793,
   0.0616592,
   0.07650556,
   0.1085663,
   0.07835329,
   0.09118501,
   0.1031183,
   0.1462982,
   0.1236715,
   0.1084335,
   0.1622265,
   0.1462788,
   0.1721196,
   0.1554886,
   0.264383,
   0.1785557,
   0.2649278,
   0.2982262,
   0.3029537,
   0.3099904,
   0.2401472,
   0.4676949,
   0.4057444,
   0.5167565,
   0.2064644,
   0.2618696,
   0.6435272,
   0.4853185,
   0.3884574};
   grae = new TGraphAsymmErrors(50,Graph_from_ratio_fx3018,Graph_from_ratio_fy3018,Graph_from_ratio_felx3018,Graph_from_ratio_fehx3018,Graph_from_ratio_fely3018,Graph_from_ratio_fehy3018);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3018 = new TH1F("Graph_Graph_from_ratio3018","Data",100,0,110);
   Graph_Graph_from_ratio3018->SetMinimum(0);
   Graph_Graph_from_ratio3018->SetMaximum(2.19629);
   Graph_Graph_from_ratio3018->SetDirectory(0);
   Graph_Graph_from_ratio3018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3018->SetLineColor(ci);
   Graph_Graph_from_ratio3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3018->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3018->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3018->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3018->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3018->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3018->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3018);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
