void bjet_pt_tight()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jan 11 15:17:14 2018) by ROOT version6.08/07
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
   p1->Range(-50.60241,-2311.13,371.0843,16949.12);
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
   
   TH1F *frame__85 = new TH1F("frame__85","t#bar{t}",50,0,350);
   frame__85->SetMinimum(0.1);
   frame__85->SetMaximum(16756.52);
   frame__85->SetEntries(40513);
   frame__85->SetDirectory(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   frame__85->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   frame__85->SetMarkerColor(ci);
   frame__85->GetXaxis()->SetTitle("pt [GeV]");
   frame__85->GetXaxis()->SetLabelFont(42);
   frame__85->GetXaxis()->SetLabelSize(0.035);
   frame__85->GetXaxis()->SetTitleSize(0.035);
   frame__85->GetXaxis()->SetTitleFont(42);
   frame__85->GetYaxis()->SetTitle(" Events");
   frame__85->GetYaxis()->SetNoExponent();
   frame__85->GetYaxis()->SetLabelFont(42);
   frame__85->GetYaxis()->SetTitleSize(0.045);
   frame__85->GetYaxis()->SetTitleOffset(1.3);
   frame__85->GetYaxis()->SetTitleFont(42);
   frame__85->GetZaxis()->SetLabelFont(42);
   frame__85->GetZaxis()->SetLabelSize(0.035);
   frame__85->GetZaxis()->SetTitleSize(0.035);
   frame__85->GetZaxis()->SetTitleFont(42);
   frame__85->Draw("");
   
   THStack *mc = new THStack();
   mc->SetName("mc");
   mc->SetTitle("mc");
   
   TH1F *mc_stack_13 = new TH1F("mc_stack_13","mc",50,0,350);
   mc_stack_13->SetMinimum(-2.004637e-08);
   mc_stack_13->SetMaximum(13534.11);
   mc_stack_13->SetDirectory(0);
   mc_stack_13->SetStats(0);

   ci = TColor::GetColor("#000099");
   mc_stack_13->SetLineColor(ci);
   mc_stack_13->GetXaxis()->SetLabelFont(42);
   mc_stack_13->GetXaxis()->SetLabelSize(0.035);
   mc_stack_13->GetXaxis()->SetTitleSize(0.035);
   mc_stack_13->GetXaxis()->SetTitleFont(42);
   mc_stack_13->GetYaxis()->SetLabelFont(42);
   mc_stack_13->GetYaxis()->SetLabelSize(0.035);
   mc_stack_13->GetYaxis()->SetTitleSize(0.035);
   mc_stack_13->GetYaxis()->SetTitleFont(42);
   mc_stack_13->GetZaxis()->SetLabelFont(42);
   mc_stack_13->GetZaxis()->SetLabelSize(0.035);
   mc_stack_13->GetZaxis()->SetTitleSize(0.035);
   mc_stack_13->GetZaxis()->SetTitleFont(42);
   mc->SetHistogram(mc_stack_13);
   
   
   TH1F *bjet_pt_tight_t#bar{t}__86 = new TH1F("bjet_pt_tight_t#bar{t}__86","t#bar{t}",50,0,350);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(5,7278.594);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(6,11361.25);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(7,12370.96);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(8,12117.52);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(9,10732.28);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(10,10286.91);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(11,9416.66);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(12,8172.825);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(13,7094.806);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(14,6531.094);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(15,5478.522);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(16,4732.427);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(17,4069.203);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(18,3293.368);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(19,2790.241);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(20,2230.078);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(21,2047.521);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(22,1683.003);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(23,1421.911);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(24,1151.301);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(25,912.9026);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(26,808.617);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(27,611.6282);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(28,556.559);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(29,374.1895);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(30,426.6134);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(31,346.6161);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(32,274.3918);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(33,268.4373);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(34,208.1484);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(35,156.5078);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(36,157.1347);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(37,135.4189);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(38,101.5614);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(39,107.5548);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(40,95.30455);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(41,88.12737);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(42,69.23298);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(43,79.52349);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(44,22.2342);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(45,31.83138);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(46,33.05515);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(47,26.51385);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(48,33.9999);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(49,18.16299);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(50,8.336985);
   bjet_pt_tight_t#bar{t}__86->SetBinContent(51,178.434);
   bjet_pt_tight_t#bar{t}__86->SetBinError(5,168.1881);
   bjet_pt_tight_t#bar{t}__86->SetBinError(6,209.5908);
   bjet_pt_tight_t#bar{t}__86->SetBinError(7,218.873);
   bjet_pt_tight_t#bar{t}__86->SetBinError(8,216.5476);
   bjet_pt_tight_t#bar{t}__86->SetBinError(9,203.646);
   bjet_pt_tight_t#bar{t}__86->SetBinError(10,199.1735);
   bjet_pt_tight_t#bar{t}__86->SetBinError(11,190.7662);
   bjet_pt_tight_t#bar{t}__86->SetBinError(12,177.6754);
   bjet_pt_tight_t#bar{t}__86->SetBinError(13,165.3931);
   bjet_pt_tight_t#bar{t}__86->SetBinError(14,158.751);
   bjet_pt_tight_t#bar{t}__86->SetBinError(15,145.4853);
   bjet_pt_tight_t#bar{t}__86->SetBinError(16,135.1664);
   bjet_pt_tight_t#bar{t}__86->SetBinError(17,125.5087);
   bjet_pt_tight_t#bar{t}__86->SetBinError(18,112.739);
   bjet_pt_tight_t#bar{t}__86->SetBinError(19,103.8619);
   bjet_pt_tight_t#bar{t}__86->SetBinError(20,93.14263);
   bjet_pt_tight_t#bar{t}__86->SetBinError(21,88.93685);
   bjet_pt_tight_t#bar{t}__86->SetBinError(22,80.69318);
   bjet_pt_tight_t#bar{t}__86->SetBinError(23,74.18632);
   bjet_pt_tight_t#bar{t}__86->SetBinError(24,66.82864);
   bjet_pt_tight_t#bar{t}__86->SetBinError(25,59.70233);
   bjet_pt_tight_t#bar{t}__86->SetBinError(26,56.16013);
   bjet_pt_tight_t#bar{t}__86->SetBinError(27,48.88178);
   bjet_pt_tight_t#bar{t}__86->SetBinError(28,46.40837);
   bjet_pt_tight_t#bar{t}__86->SetBinError(29,38.39583);
   bjet_pt_tight_t#bar{t}__86->SetBinError(30,40.71027);
   bjet_pt_tight_t#bar{t}__86->SetBinError(31,36.68906);
   bjet_pt_tight_t#bar{t}__86->SetBinError(32,32.60787);
   bjet_pt_tight_t#bar{t}__86->SetBinError(33,32.4183);
   bjet_pt_tight_t#bar{t}__86->SetBinError(34,28.40435);
   bjet_pt_tight_t#bar{t}__86->SetBinError(35,24.42167);
   bjet_pt_tight_t#bar{t}__86->SetBinError(36,24.77168);
   bjet_pt_tight_t#bar{t}__86->SetBinError(37,22.81045);
   bjet_pt_tight_t#bar{t}__86->SetBinError(38,19.81805);
   bjet_pt_tight_t#bar{t}__86->SetBinError(39,20.56435);
   bjet_pt_tight_t#bar{t}__86->SetBinError(40,19.16883);
   bjet_pt_tight_t#bar{t}__86->SetBinError(41,18.55681);
   bjet_pt_tight_t#bar{t}__86->SetBinError(42,16.54135);
   bjet_pt_tight_t#bar{t}__86->SetBinError(43,17.80995);
   bjet_pt_tight_t#bar{t}__86->SetBinError(44,9.122961);
   bjet_pt_tight_t#bar{t}__86->SetBinError(45,11.2951);
   bjet_pt_tight_t#bar{t}__86->SetBinError(46,11.15208);
   bjet_pt_tight_t#bar{t}__86->SetBinError(47,9.843507);
   bjet_pt_tight_t#bar{t}__86->SetBinError(48,11.3958);
   bjet_pt_tight_t#bar{t}__86->SetBinError(49,8.150232);
   bjet_pt_tight_t#bar{t}__86->SetBinError(50,5.895468);
   bjet_pt_tight_t#bar{t}__86->SetBinError(51,26.44134);
   bjet_pt_tight_t#bar{t}__86->SetEntries(36205);
   bjet_pt_tight_t#bar{t}__86->SetDirectory(0);

   ci = TColor::GetColor("#cc0000");
   bjet_pt_tight_t#bar{t}__86->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   bjet_pt_tight_t#bar{t}__86->SetMarkerColor(ci);
   bjet_pt_tight_t#bar{t}__86->GetXaxis()->SetTitle("pt [GeV]");
   bjet_pt_tight_t#bar{t}__86->GetXaxis()->SetLabelFont(42);
   bjet_pt_tight_t#bar{t}__86->GetXaxis()->SetLabelSize(0.035);
   bjet_pt_tight_t#bar{t}__86->GetXaxis()->SetTitleSize(0.035);
   bjet_pt_tight_t#bar{t}__86->GetXaxis()->SetTitleFont(42);
   bjet_pt_tight_t#bar{t}__86->GetYaxis()->SetTitle(" Events");
   bjet_pt_tight_t#bar{t}__86->GetYaxis()->SetLabelFont(42);
   bjet_pt_tight_t#bar{t}__86->GetYaxis()->SetLabelSize(0.035);
   bjet_pt_tight_t#bar{t}__86->GetYaxis()->SetTitleSize(0.035);
   bjet_pt_tight_t#bar{t}__86->GetYaxis()->SetTitleFont(42);
   bjet_pt_tight_t#bar{t}__86->GetZaxis()->SetLabelFont(42);
   bjet_pt_tight_t#bar{t}__86->GetZaxis()->SetLabelSize(0.035);
   bjet_pt_tight_t#bar{t}__86->GetZaxis()->SetTitleSize(0.035);
   bjet_pt_tight_t#bar{t}__86->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_pt_tight_t#bar{t},"hist");
   
   TH1F *bjet_pt_tight_Diboson__87 = new TH1F("bjet_pt_tight_Diboson__87","Diboson",50,0,350);
   bjet_pt_tight_Diboson__87->SetBinContent(5,9.117944);
   bjet_pt_tight_Diboson__87->SetBinContent(6,9.352915);
   bjet_pt_tight_Diboson__87->SetBinContent(7,6.475751);
   bjet_pt_tight_Diboson__87->SetBinContent(8,3.142265);
   bjet_pt_tight_Diboson__87->SetBinContent(9,5.145102);
   bjet_pt_tight_Diboson__87->SetBinContent(10,6.318854);
   bjet_pt_tight_Diboson__87->SetBinContent(11,2.154971);
   bjet_pt_tight_Diboson__87->SetBinContent(12,0.9169664);
   bjet_pt_tight_Diboson__87->SetBinContent(13,3.716216);
   bjet_pt_tight_Diboson__87->SetBinContent(14,1.336578);
   bjet_pt_tight_Diboson__87->SetBinContent(15,1.607226);
   bjet_pt_tight_Diboson__87->SetBinContent(16,0.8103416);
   bjet_pt_tight_Diboson__87->SetBinContent(17,1.102377);
   bjet_pt_tight_Diboson__87->SetBinContent(18,0.007695047);
   bjet_pt_tight_Diboson__87->SetBinContent(19,0.9854149);
   bjet_pt_tight_Diboson__87->SetBinContent(20,1.150783);
   bjet_pt_tight_Diboson__87->SetBinContent(21,1.193081);
   bjet_pt_tight_Diboson__87->SetBinContent(22,1.188031);
   bjet_pt_tight_Diboson__87->SetBinContent(23,0.2853125);
   bjet_pt_tight_Diboson__87->SetBinContent(24,1.144748);
   bjet_pt_tight_Diboson__87->SetBinContent(25,0.4467701);
   bjet_pt_tight_Diboson__87->SetBinContent(26,0.4511124);
   bjet_pt_tight_Diboson__87->SetBinContent(27,0.3808447);
   bjet_pt_tight_Diboson__87->SetBinContent(28,0.8381888);
   bjet_pt_tight_Diboson__87->SetBinContent(29,0.4081971);
   bjet_pt_tight_Diboson__87->SetBinContent(31,0.3739505);
   bjet_pt_tight_Diboson__87->SetBinContent(33,0.3413283);
   bjet_pt_tight_Diboson__87->SetBinContent(37,0.688642);
   bjet_pt_tight_Diboson__87->SetBinContent(38,0.4303074);
   bjet_pt_tight_Diboson__87->SetBinContent(47,0.3785551);
   bjet_pt_tight_Diboson__87->SetBinContent(50,0.3986073);
   bjet_pt_tight_Diboson__87->SetBinContent(51,1.432576);
   bjet_pt_tight_Diboson__87->SetBinError(5,1.892227);
   bjet_pt_tight_Diboson__87->SetBinError(6,1.921954);
   bjet_pt_tight_Diboson__87->SetBinError(7,1.610528);
   bjet_pt_tight_Diboson__87->SetBinError(8,1.079046);
   bjet_pt_tight_Diboson__87->SetBinError(9,1.411911);
   bjet_pt_tight_Diboson__87->SetBinError(10,1.58277);
   bjet_pt_tight_Diboson__87->SetBinError(11,0.9066815);
   bjet_pt_tight_Diboson__87->SetBinError(12,0.6150457);
   bjet_pt_tight_Diboson__87->SetBinError(13,1.188673);
   bjet_pt_tight_Diboson__87->SetBinError(14,0.7113698);
   bjet_pt_tight_Diboson__87->SetBinError(15,0.808007);
   bjet_pt_tight_Diboson__87->SetBinError(16,0.5735815);
   bjet_pt_tight_Diboson__87->SetBinError(17,0.6420199);
   bjet_pt_tight_Diboson__87->SetBinError(18,0.007695047);
   bjet_pt_tight_Diboson__87->SetBinError(19,0.5822217);
   bjet_pt_tight_Diboson__87->SetBinError(20,0.6645085);
   bjet_pt_tight_Diboson__87->SetBinError(21,0.6900889);
   bjet_pt_tight_Diboson__87->SetBinError(22,0.6886624);
   bjet_pt_tight_Diboson__87->SetBinError(23,0.2853125);
   bjet_pt_tight_Diboson__87->SetBinError(24,0.6612639);
   bjet_pt_tight_Diboson__87->SetBinError(25,0.4467701);
   bjet_pt_tight_Diboson__87->SetBinError(26,0.4511124);
   bjet_pt_tight_Diboson__87->SetBinError(27,0.3808447);
   bjet_pt_tight_Diboson__87->SetBinError(28,0.5664845);
   bjet_pt_tight_Diboson__87->SetBinError(29,0.3893347);
   bjet_pt_tight_Diboson__87->SetBinError(31,0.3739505);
   bjet_pt_tight_Diboson__87->SetBinError(33,0.3413283);
   bjet_pt_tight_Diboson__87->SetBinError(37,0.4887396);
   bjet_pt_tight_Diboson__87->SetBinError(38,0.4303074);
   bjet_pt_tight_Diboson__87->SetBinError(47,0.3785551);
   bjet_pt_tight_Diboson__87->SetBinError(50,0.3986073);
   bjet_pt_tight_Diboson__87->SetBinError(51,0.7191099);
   bjet_pt_tight_Diboson__87->SetEntries(176);
   bjet_pt_tight_Diboson__87->SetDirectory(0);

   ci = TColor::GetColor("#ffff00");
   bjet_pt_tight_Diboson__87->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   bjet_pt_tight_Diboson__87->SetMarkerColor(ci);
   bjet_pt_tight_Diboson__87->GetXaxis()->SetTitle("pt [GeV]");
   bjet_pt_tight_Diboson__87->GetXaxis()->SetLabelFont(42);
   bjet_pt_tight_Diboson__87->GetXaxis()->SetLabelSize(0.035);
   bjet_pt_tight_Diboson__87->GetXaxis()->SetTitleSize(0.035);
   bjet_pt_tight_Diboson__87->GetXaxis()->SetTitleFont(42);
   bjet_pt_tight_Diboson__87->GetYaxis()->SetTitle(" Events");
   bjet_pt_tight_Diboson__87->GetYaxis()->SetLabelFont(42);
   bjet_pt_tight_Diboson__87->GetYaxis()->SetLabelSize(0.035);
   bjet_pt_tight_Diboson__87->GetYaxis()->SetTitleSize(0.035);
   bjet_pt_tight_Diboson__87->GetYaxis()->SetTitleFont(42);
   bjet_pt_tight_Diboson__87->GetZaxis()->SetLabelFont(42);
   bjet_pt_tight_Diboson__87->GetZaxis()->SetLabelSize(0.035);
   bjet_pt_tight_Diboson__87->GetZaxis()->SetTitleSize(0.035);
   bjet_pt_tight_Diboson__87->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_pt_tight_Diboson,"hist");
   
   TH1F *bjet_pt_tight_DY__88 = new TH1F("bjet_pt_tight_DY__88","DY",50,0,350);
   bjet_pt_tight_DY__88->SetBinContent(5,35.68578);
   bjet_pt_tight_DY__88->SetBinContent(6,32.58035);
   bjet_pt_tight_DY__88->SetBinContent(7,16.5393);
   bjet_pt_tight_DY__88->SetBinContent(11,19.68991);
   bjet_pt_tight_DY__88->SetBinContent(12,18.52124);
   bjet_pt_tight_DY__88->SetBinContent(21,19.95711);
   bjet_pt_tight_DY__88->SetBinContent(27,1.98969);
   bjet_pt_tight_DY__88->SetBinContent(39,19.12663);
   bjet_pt_tight_DY__88->SetBinError(5,25.32893);
   bjet_pt_tight_DY__88->SetBinError(6,23.05959);
   bjet_pt_tight_DY__88->SetBinError(7,16.5393);
   bjet_pt_tight_DY__88->SetBinError(11,19.68991);
   bjet_pt_tight_DY__88->SetBinError(12,18.52124);
   bjet_pt_tight_DY__88->SetBinError(21,19.95711);
   bjet_pt_tight_DY__88->SetBinError(27,1.98969);
   bjet_pt_tight_DY__88->SetBinError(39,19.12663);
   bjet_pt_tight_DY__88->SetEntries(10);
   bjet_pt_tight_DY__88->SetDirectory(0);

   ci = TColor::GetColor("#33ccff");
   bjet_pt_tight_DY__88->SetFillColor(ci);

   ci = TColor::GetColor("#33ccff");
   bjet_pt_tight_DY__88->SetMarkerColor(ci);
   bjet_pt_tight_DY__88->GetXaxis()->SetTitle("pt [GeV]");
   bjet_pt_tight_DY__88->GetXaxis()->SetLabelFont(42);
   bjet_pt_tight_DY__88->GetXaxis()->SetLabelSize(0.035);
   bjet_pt_tight_DY__88->GetXaxis()->SetTitleSize(0.035);
   bjet_pt_tight_DY__88->GetXaxis()->SetTitleFont(42);
   bjet_pt_tight_DY__88->GetYaxis()->SetTitle(" Events");
   bjet_pt_tight_DY__88->GetYaxis()->SetLabelFont(42);
   bjet_pt_tight_DY__88->GetYaxis()->SetLabelSize(0.035);
   bjet_pt_tight_DY__88->GetYaxis()->SetTitleSize(0.035);
   bjet_pt_tight_DY__88->GetYaxis()->SetTitleFont(42);
   bjet_pt_tight_DY__88->GetZaxis()->SetLabelFont(42);
   bjet_pt_tight_DY__88->GetZaxis()->SetLabelSize(0.035);
   bjet_pt_tight_DY__88->GetZaxis()->SetTitleSize(0.035);
   bjet_pt_tight_DY__88->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_pt_tight_DY,"hist");
   
   TH1F *bjet_pt_tight_W__89 = new TH1F("bjet_pt_tight_W__89","W",50,0,350);
   bjet_pt_tight_W__89->SetDirectory(0);

   ci = TColor::GetColor("#3366ff");
   bjet_pt_tight_W__89->SetFillColor(ci);

   ci = TColor::GetColor("#3366ff");
   bjet_pt_tight_W__89->SetMarkerColor(ci);
   bjet_pt_tight_W__89->GetXaxis()->SetTitle("pt [GeV]");
   bjet_pt_tight_W__89->GetXaxis()->SetLabelFont(42);
   bjet_pt_tight_W__89->GetXaxis()->SetLabelSize(0.035);
   bjet_pt_tight_W__89->GetXaxis()->SetTitleSize(0.035);
   bjet_pt_tight_W__89->GetXaxis()->SetTitleFont(42);
   bjet_pt_tight_W__89->GetYaxis()->SetTitle(" Events");
   bjet_pt_tight_W__89->GetYaxis()->SetLabelFont(42);
   bjet_pt_tight_W__89->GetYaxis()->SetLabelSize(0.035);
   bjet_pt_tight_W__89->GetYaxis()->SetTitleSize(0.035);
   bjet_pt_tight_W__89->GetYaxis()->SetTitleFont(42);
   bjet_pt_tight_W__89->GetZaxis()->SetLabelFont(42);
   bjet_pt_tight_W__89->GetZaxis()->SetLabelSize(0.035);
   bjet_pt_tight_W__89->GetZaxis()->SetTitleSize(0.035);
   bjet_pt_tight_W__89->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_pt_tight_W,"hist");
   
   TH1F *bjet_pt_tight_SinglesPtop__90 = new TH1F("bjet_pt_tight_SinglesPtop__90","Single top",50,0,350);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(5,332.1066);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(6,454.8139);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(7,495.6566);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(8,462.1692);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(9,460.4817);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(10,401.7209);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(11,331.1409);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(12,305.367);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(13,267.424);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(14,210.2325);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(15,168.3773);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(16,167.4364);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(17,117.1823);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(18,124.5659);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(19,114.1786);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(20,103.3265);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(21,76.22289);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(22,58.72152);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(23,52.50695);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(24,38.44094);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(25,38.75888);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(26,29.16736);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(27,33.04588);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(28,27.95198);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(29,17.95123);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(30,22.98428);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(31,22.01385);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(32,13.46994);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(33,9.81194);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(34,12.47699);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(35,9.978458);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(36,6.950271);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(37,18.12708);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(38,1.15467);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(39,7.7411);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(40,4.23044);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(41,8.253747);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(42,6.632142);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(43,6.696502);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(44,3.951572);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(45,1.531055);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(46,4.370384);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(47,4.135643);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(48,4.208641);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(49,2.716515);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(50,6.795969);
   bjet_pt_tight_SinglesPtop__90->SetBinContent(51,41.69119);
   bjet_pt_tight_SinglesPtop__90->SetBinError(5,20.91218);
   bjet_pt_tight_SinglesPtop__90->SetBinError(6,24.57154);
   bjet_pt_tight_SinglesPtop__90->SetBinError(7,25.89716);
   bjet_pt_tight_SinglesPtop__90->SetBinError(8,24.68241);
   bjet_pt_tight_SinglesPtop__90->SetBinError(9,24.91928);
   bjet_pt_tight_SinglesPtop__90->SetBinError(10,23.07013);
   bjet_pt_tight_SinglesPtop__90->SetBinError(11,21.14728);
   bjet_pt_tight_SinglesPtop__90->SetBinError(12,20.29941);
   bjet_pt_tight_SinglesPtop__90->SetBinError(13,18.98692);
   bjet_pt_tight_SinglesPtop__90->SetBinError(14,16.78704);
   bjet_pt_tight_SinglesPtop__90->SetBinError(15,15.06792);
   bjet_pt_tight_SinglesPtop__90->SetBinError(16,14.93141);
   bjet_pt_tight_SinglesPtop__90->SetBinError(17,12.47126);
   bjet_pt_tight_SinglesPtop__90->SetBinError(18,12.93108);
   bjet_pt_tight_SinglesPtop__90->SetBinError(19,12.37256);
   bjet_pt_tight_SinglesPtop__90->SetBinError(20,11.7626);
   bjet_pt_tight_SinglesPtop__90->SetBinError(21,10.04856);
   bjet_pt_tight_SinglesPtop__90->SetBinError(22,8.920793);
   bjet_pt_tight_SinglesPtop__90->SetBinError(23,8.336976);
   bjet_pt_tight_SinglesPtop__90->SetBinError(24,7.123555);
   bjet_pt_tight_SinglesPtop__90->SetBinError(25,7.22927);
   bjet_pt_tight_SinglesPtop__90->SetBinError(26,6.238914);
   bjet_pt_tight_SinglesPtop__90->SetBinError(27,6.629163);
   bjet_pt_tight_SinglesPtop__90->SetBinError(28,6.02786);
   bjet_pt_tight_SinglesPtop__90->SetBinError(29,4.862992);
   bjet_pt_tight_SinglesPtop__90->SetBinError(30,5.503973);
   bjet_pt_tight_SinglesPtop__90->SetBinError(31,5.271888);
   bjet_pt_tight_SinglesPtop__90->SetBinError(32,4.230283);
   bjet_pt_tight_SinglesPtop__90->SetBinError(33,3.682061);
   bjet_pt_tight_SinglesPtop__90->SetBinError(34,4.186749);
   bjet_pt_tight_SinglesPtop__90->SetBinError(35,3.78064);
   bjet_pt_tight_SinglesPtop__90->SetBinError(36,3.139955);
   bjet_pt_tight_SinglesPtop__90->SetBinError(37,4.912427);
   bjet_pt_tight_SinglesPtop__90->SetBinError(38,1.133169);
   bjet_pt_tight_SinglesPtop__90->SetBinError(39,3.21705);
   bjet_pt_tight_SinglesPtop__90->SetBinError(40,2.450269);
   bjet_pt_tight_SinglesPtop__90->SetBinError(41,3.240657);
   bjet_pt_tight_SinglesPtop__90->SetBinError(42,2.967466);
   bjet_pt_tight_SinglesPtop__90->SetBinError(43,2.998414);
   bjet_pt_tight_SinglesPtop__90->SetBinError(44,2.24402);
   bjet_pt_tight_SinglesPtop__90->SetBinError(45,1.269494);
   bjet_pt_tight_SinglesPtop__90->SetBinError(46,2.529923);
   bjet_pt_tight_SinglesPtop__90->SetBinError(47,2.391186);
   bjet_pt_tight_SinglesPtop__90->SetBinError(48,2.432593);
   bjet_pt_tight_SinglesPtop__90->SetBinError(49,1.713952);
   bjet_pt_tight_SinglesPtop__90->SetBinError(50,3.045874);
   bjet_pt_tight_SinglesPtop__90->SetBinError(51,7.389271);
   bjet_pt_tight_SinglesPtop__90->SetEntries(4122);
   bjet_pt_tight_SinglesPtop__90->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   bjet_pt_tight_SinglesPtop__90->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   bjet_pt_tight_SinglesPtop__90->SetMarkerColor(ci);
   bjet_pt_tight_SinglesPtop__90->GetXaxis()->SetTitle("pt [GeV]");
   bjet_pt_tight_SinglesPtop__90->GetXaxis()->SetLabelFont(42);
   bjet_pt_tight_SinglesPtop__90->GetXaxis()->SetLabelSize(0.035);
   bjet_pt_tight_SinglesPtop__90->GetXaxis()->SetTitleSize(0.035);
   bjet_pt_tight_SinglesPtop__90->GetXaxis()->SetTitleFont(42);
   bjet_pt_tight_SinglesPtop__90->GetYaxis()->SetTitle(" Events");
   bjet_pt_tight_SinglesPtop__90->GetYaxis()->SetLabelFont(42);
   bjet_pt_tight_SinglesPtop__90->GetYaxis()->SetLabelSize(0.035);
   bjet_pt_tight_SinglesPtop__90->GetYaxis()->SetTitleSize(0.035);
   bjet_pt_tight_SinglesPtop__90->GetYaxis()->SetTitleFont(42);
   bjet_pt_tight_SinglesPtop__90->GetZaxis()->SetLabelFont(42);
   bjet_pt_tight_SinglesPtop__90->GetZaxis()->SetLabelSize(0.035);
   bjet_pt_tight_SinglesPtop__90->GetZaxis()->SetTitleSize(0.035);
   bjet_pt_tight_SinglesPtop__90->GetZaxis()->SetTitleFont(42);
   mc->Add(bjet_pt_tight_Single top,"hist");
   mc->Draw("hist same");
   
   Double_t Graph_from_bjet_pt_tight_fx3025[51] = {
   3.5,
   10.5,
   17.5,
   24.5,
   31.5,
   38.5,
   45.5,
   52.5,
   59.5,
   66.5,
   73.5,
   80.5,
   87.5,
   94.5,
   101.5,
   108.5,
   115.5,
   122.5,
   129.5,
   136.5,
   143.5,
   150.5,
   157.5,
   164.5,
   171.5,
   178.5,
   185.5,
   192.5,
   199.5,
   206.5,
   213.5,
   220.5,
   227.5,
   234.5,
   241.5,
   248.5,
   255.5,
   262.5,
   269.5,
   276.5,
   283.5,
   290.5,
   297.5,
   304.5,
   311.5,
   318.5,
   325.5,
   332.5,
   339.5,
   346.5,
   0};
   Double_t Graph_from_bjet_pt_tight_fy3025[51] = {
   0,
   0,
   0,
   0,
   6685,
   10435,
   11018,
   10981,
   10501,
   9463,
   8445,
   7193,
   6433,
   5678,
   4883,
   4067,
   3463,
   2839,
   2385,
   2056,
   1666,
   1486,
   1211,
   952,
   780,
   649,
   595,
   456,
   366,
   362,
   241,
   225,
   195,
   134,
   157,
   145,
   104,
   76,
   59,
   61,
   62,
   44,
   52,
   24,
   29,
   27,
   18,
   25,
   26,
   19,
   0};
   Double_t Graph_from_bjet_pt_tight_felx3025[51] = {
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   0};
   Double_t Graph_from_bjet_pt_tight_fely3025[51] = {
   0,
   0,
   0,
   0,
   81.76185,
   102.1518,
   104.9667,
   104.7903,
   102.4744,
   97.27795,
   91.89668,
   84.81156,
   80.20598,
   75.3525,
   69.87847,
   63.77304,
   58.84726,
   53.28227,
   48.83646,
   45.34314,
   40.81666,
   38.54867,
   34.79943,
   30.8545,
   27.92848,
   25.47548,
   24.39262,
   21.35416,
   19.13113,
   19.0263,
   15.52417,
   15,
   13.95255,
   11.56162,
   12.51687,
   12.02795,
   10.18183,
   8.69875,
   7.659464,
   7.788934,
   7.852869,
   6.608069,
   7.187977,
   4.864704,
   5.354034,
   5.163869,
   4.202964,
   4.966428,
   5.066111,
   4.320299,
   0};
   Double_t Graph_from_bjet_pt_tight_fehx3025[51] = {
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   0};
   Double_t Graph_from_bjet_pt_tight_fehy3025[51] = {
   1.841055,
   1.841055,
   1.841055,
   1.841055,
   81.76185,
   102.1518,
   104.9667,
   104.7903,
   102.4744,
   97.27795,
   91.89668,
   84.81156,
   80.20598,
   75.3525,
   69.87847,
   63.77304,
   58.84726,
   53.28227,
   48.83646,
   45.34314,
   40.81666,
   38.54867,
   34.79943,
   30.8545,
   27.92848,
   25.47548,
   24.39262,
   21.35416,
   19.13113,
   19.0263,
   15.52417,
   15,
   14.98845,
   12.60492,
   13.55688,
   13.06958,
   11.23099,
   9.756266,
   8.724747,
   8.853137,
   8.916552,
   7.68367,
   8.257518,
   5.967055,
   6.447153,
   6.260373,
   5.321116,
   6.066714,
   6.164451,
   5.435307,
   1.841055};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(51,Graph_from_bjet_pt_tight_fx3025,Graph_from_bjet_pt_tight_fy3025,Graph_from_bjet_pt_tight_felx3025,Graph_from_bjet_pt_tight_fehx3025,Graph_from_bjet_pt_tight_fely3025,Graph_from_bjet_pt_tight_fehy3025);
   grae->SetName("Graph_from_bjet_pt_tight");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_bjet_pt_tight3025 = new TH1F("Graph_Graph_from_bjet_pt_tight3025","Data",100,0,385);
   Graph_Graph_from_bjet_pt_tight3025->SetMinimum(0);
   Graph_Graph_from_bjet_pt_tight3025->SetMaximum(12235.26);
   Graph_Graph_from_bjet_pt_tight3025->SetDirectory(0);
   Graph_Graph_from_bjet_pt_tight3025->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_bjet_pt_tight3025->SetLineColor(ci);
   Graph_Graph_from_bjet_pt_tight3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_pt_tight3025->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_pt_tight3025->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_pt_tight3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_pt_tight3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_pt_tight3025->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_pt_tight3025->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_pt_tight3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_bjet_pt_tight3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_bjet_pt_tight3025->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_bjet_pt_tight3025->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_bjet_pt_tight3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_bjet_pt_tight3025);
   
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
   TLegendEntry *entry=leg->AddEntry("Graph_from_bjet_pt_tight","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.4);
   entry->SetTextFont(43);
   entry=leg->AddEntry("bjet_pt_tight_t#bar{t}","t#bar{t}","f");

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
   entry=leg->AddEntry("bjet_pt_tight_Diboson","Diboson","f");

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
   entry=leg->AddEntry("bjet_pt_tight_DY","DY","f");

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
   entry=leg->AddEntry("bjet_pt_tight_W","W","f");

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
   entry=leg->AddEntry("bjet_pt_tight_Single top","Single top","f");

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
   p2->Range(-50.60241,0.4485106,371.0843,1.597447);
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
   
   TH1F *ratioframe__91 = new TH1F("ratioframe__91","t#bar{t}",50,0,350);
   ratioframe__91->SetMinimum(0.46);
   ratioframe__91->SetMaximum(1.54);
   ratioframe__91->SetEntries(40513);

   ci = TColor::GetColor("#cc0000");
   ratioframe__91->SetFillColor(ci);

   ci = TColor::GetColor("#cc0000");
   ratioframe__91->SetMarkerColor(ci);
   ratioframe__91->GetXaxis()->SetTitle("pt [GeV]");
   ratioframe__91->GetXaxis()->SetLabelFont(42);
   ratioframe__91->GetXaxis()->SetLabelSize(0);
   ratioframe__91->GetXaxis()->SetTitleSize(0);
   ratioframe__91->GetXaxis()->SetTitleOffset(0);
   ratioframe__91->GetXaxis()->SetTitleFont(42);
   ratioframe__91->GetYaxis()->SetTitle("Data/MC");
   ratioframe__91->GetYaxis()->SetNoExponent();
   ratioframe__91->GetYaxis()->SetNdivisions(5);
   ratioframe__91->GetYaxis()->SetLabelFont(42);
   ratioframe__91->GetYaxis()->SetLabelSize(0.18);
   ratioframe__91->GetYaxis()->SetTitleSize(0.2);
   ratioframe__91->GetYaxis()->SetTitleOffset(0.2);
   ratioframe__91->GetYaxis()->SetTitleFont(42);
   ratioframe__91->GetZaxis()->SetLabelFont(42);
   ratioframe__91->GetZaxis()->SetLabelSize(0.035);
   ratioframe__91->GetZaxis()->SetTitleSize(0.035);
   ratioframe__91->GetZaxis()->SetTitleFont(42);
   ratioframe__91->Draw("");
   
   Double_t Graph_from_ratio_fx3026[50] = {
   3.5,
   10.5,
   17.5,
   24.5,
   31.5,
   38.5,
   45.5,
   52.5,
   59.5,
   66.5,
   73.5,
   80.5,
   87.5,
   94.5,
   101.5,
   108.5,
   115.5,
   122.5,
   129.5,
   136.5,
   143.5,
   150.5,
   157.5,
   164.5,
   171.5,
   178.5,
   185.5,
   192.5,
   199.5,
   206.5,
   213.5,
   220.5,
   227.5,
   234.5,
   241.5,
   248.5,
   255.5,
   262.5,
   269.5,
   276.5,
   283.5,
   290.5,
   297.5,
   304.5,
   311.5,
   318.5,
   325.5,
   332.5,
   339.5,
   346.5};
   Double_t Graph_from_ratio_fy3026[50] = {
   0,
   0,
   0,
   0,
   0.873228,
   0.879997,
   0.8547959,
   0.8726974,
   0.9377642,
   0.8848102,
   0.8644121,
   0.8464713,
   0.8733433,
   0.8421005,
   0.8644761,
   0.8298858,
   0.8269875,
   0.830617,
   0.8208839,
   0.8806818,
   0.7767283,
   0.8525957,
   0.8211823,
   0.7994045,
   0.8192345,
   0.7742454,
   0.9195656,
   0.7790222,
   0.9323678,
   0.8051642,
   0.6531096,
   0.7816252,
   0.6999519,
   0.6073644,
   0.9430205,
   0.8836884,
   0.6742976,
   0.7368172,
   0.4389145,
   0.6128498,
   0.6432796,
   0.5799767,
   0.6031083,
   0.9165281,
   0.869241,
   0.7214326,
   0.5801202,
   0.654304,
   1.24524,
   1.223316};
   Double_t Graph_from_ratio_felx3026[50] = {
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5};
   Double_t Graph_from_ratio_fely3026[50] = {
   0,
   0,
   0,
   0,
   0.02227536,
   0.01795584,
   0.01676792,
   0.01725863,
   0.01946691,
   0.01891862,
   0.01949149,
   0.02050252,
   0.02254325,
   0.02285585,
   0.02557625,
   0.02645111,
   0.0285999,
   0.03167828,
   0.03399855,
   0.04039297,
   0.03827438,
   0.04545859,
   0.04780133,
   0.05202641,
   0.05948281,
   0.06039737,
   0.07965092,
   0.07218385,
   0.1040491,
   0.0848724,
   0.07793736,
   0.1033753,
   0.0960881,
   0.09486946,
   0.1589282,
   0.1531977,
   0.1215844,
   0.1651062,
   0.108556,
   0.1425294,
   0.1499402,
   0.1554046,
   0.1515098,
   0.378326,
   0.3372742,
   0.2605152,
   0.2337014,
   0.2386264,
   0.5534947,
   0.5940702};
   Double_t Graph_from_ratio_fehx3026[50] = {
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5,
   3.5};
   Double_t Graph_from_ratio_fehy3026[50] = {
   0,
   0,
   0,
   0,
   0.02227536,
   0.01795584,
   0.01676792,
   0.01725863,
   0.01946691,
   0.01891862,
   0.01949149,
   0.02050252,
   0.02254325,
   0.02285585,
   0.02557625,
   0.02645111,
   0.0285999,
   0.03167828,
   0.03399855,
   0.04039297,
   0.03827438,
   0.04545859,
   0.04780133,
   0.05202641,
   0.05948281,
   0.06039737,
   0.07965092,
   0.07218385,
   0.1040491,
   0.0848724,
   0.07793736,
   0.1033753,
   0.0960881,
   0.09486946,
   0.1589282,
   0.1531977,
   0.1215844,
   0.1651062,
   0.108556,
   0.1425294,
   0.1499402,
   0.1554046,
   0.1515098,
   0.378326,
   0.3372742,
   0.2605152,
   0.2337014,
   0.2386264,
   0.5534947,
   0.5940702};
   grae = new TGraphAsymmErrors(50,Graph_from_ratio_fx3026,Graph_from_ratio_fy3026,Graph_from_ratio_felx3026,Graph_from_ratio_fehx3026,Graph_from_ratio_fely3026,Graph_from_ratio_fehy3026);
   grae->SetName("Graph_from_ratio");
   grae->SetTitle("Data");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.4);
   
   TH1F *Graph_Graph_from_ratio3026 = new TH1F("Graph_Graph_from_ratio3026","Data",100,0,385);
   Graph_Graph_from_ratio3026->SetMinimum(0);
   Graph_Graph_from_ratio3026->SetMaximum(1.999124);
   Graph_Graph_from_ratio3026->SetDirectory(0);
   Graph_Graph_from_ratio3026->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_ratio3026->SetLineColor(ci);
   Graph_Graph_from_ratio3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3026->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3026->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3026->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3026->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_ratio3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_ratio3026->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_ratio3026->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_ratio3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_from_ratio3026);
   
   grae->Draw("p");
   p2->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
