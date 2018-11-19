////////////////////////////////////////////////////////create TH2Poly for FH
void HGCTB::createTH2PolyFH(TH2Poly* hitmapoly){

  double waferX[] = {107.127, 107.127, 0, 0, 0, -107.127, -107.127};
  double waferY[] = {-61.85, 61.85,  -123.7, 0, 123.7, -61.85,  61.85};

  for(int iwafer=0; iwafer<7; iwafer++){
    
    double waferXPos = waferX[iwafer]/10.;
    double waferYPos = waferY[iwafer]/10.;
    

    Double_t Graph_fx1[4] = {
    6.171528+waferXPos ,
    6.496345+waferXPos,
    7.14598+waferXPos,
    6.496345+waferXPos};
  Double_t Graph_fy1[4] = {
    0.5626+waferYPos,
    1.166027e-08+waferYPos,
    1.282629e-08+waferYPos,
    1.1252+waferYPos};
  TGraph *graph = new TGraph(4, Graph_fx1, Graph_fy1);
  graph -> SetName(Form("Sensor_1_%d",iwafer));
  graph -> SetTitle("Sensor_1");
  graph -> SetFillColor(1);
  hitmapoly -> AddBin(graph);

  Double_t Graph_fx2[4] = {
    6.171528+waferXPos,
    6.496345+waferXPos,
    7.14598+waferXPos,
    6.496345+waferXPos};
  Double_t Graph_fy2[4] = {
    -0.5626+waferYPos,
    -1.1252+waferYPos,
    1.282629e-08+waferYPos,
    1.166027e-08+waferYPos};
  graph = new TGraph(4,Graph_fx2,Graph_fy2);
  graph->SetName(Form("Sensor_2_%d",iwafer));
  graph->SetTitle("Sensor_2");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);
  Double_t Graph_fx3[4] = {
    5.197076+waferXPos,
    5.521893+waferXPos,
    6.171528+waferXPos,
    5.521893+waferXPos};
  Double_t Graph_fy3[4] = {
    2.2504+waferYPos,
    1.6878+waferYPos,
    1.6878+waferYPos,
    2.813+waferYPos};
  graph = new TGraph(4,Graph_fx3,Graph_fy3);
  graph->SetName(Form("Sensor_3_%d",iwafer));
  graph->SetTitle("Sensor_3");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx4[6] = {
    5.197076+waferXPos,
    5.521893+waferXPos,
    6.171528+waferXPos,
    6.496345+waferXPos,
    6.171528+waferXPos,
    5.521893+waferXPos};
  Double_t Graph_fy4[6] = {
    1.1252+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos,
    1.6878+waferYPos,
    1.6878+waferYPos};
  graph = new TGraph(6,Graph_fx4,Graph_fy4);
  graph->SetName(Form("Sensor_4_%d",iwafer));
  graph->SetTitle("Sensor_4");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx5[6] = {
    5.197076+waferXPos,
    5.521893+waferXPos,
    6.171528+waferXPos,
    6.496345+waferXPos,
    6.171528+waferXPos,
    5.521893+waferXPos};
  Double_t Graph_fy5[6] = {
    9.328214e-09+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos,
    1.166027e-08+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx5,Graph_fy5);
  graph->SetName(Form("Sensor_5_%d",iwafer));
  graph->SetTitle("Sensor_5");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx6[6] = {
    5.197076+waferXPos,
    5.521893+waferXPos,
    6.171528+waferXPos,
    6.496345+waferXPos,
    6.171528+waferXPos,
    5.521893+waferXPos};
  Double_t Graph_fy6[6] = {
    -1.1252+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos,
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx6,Graph_fy6);
  graph->SetName(Form("Sensor_6_%d",iwafer));
  graph->SetTitle("Sensor_6");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx7[4] = {
    5.197076+waferXPos,
    5.521893+waferXPos,
    6.171528+waferXPos,
    5.521893+waferXPos};
  Double_t Graph_fy7[4] = {
    -2.2504+waferYPos,
    -2.813+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos};
  graph = new TGraph(4,Graph_fx7,Graph_fy7);
  graph->SetName(Form("Sensor_7_%d",iwafer));
  graph->SetTitle("Sensor_7");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx8[4] = {
    4.222624+waferXPos,
    4.547442+waferXPos,
    5.197076+waferXPos,
    4.547442+waferXPos};
  Double_t Graph_fy8[4] = {
    3.9382+waferYPos,
    3.3756+waferYPos,
    3.3756+waferYPos,
    4.5008+waferYPos};
  graph = new TGraph(4,Graph_fx8,Graph_fy8);
  graph->SetName(Form("Sensor_8_%d",iwafer));
  graph->SetTitle("Sensor_8");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx9[6] = {
    4.222624+waferXPos,
    4.547442+waferXPos,
    5.197076+waferXPos,
    5.521893+waferXPos,
    5.197076+waferXPos,
    4.547442+waferXPos};
  Double_t Graph_fy9[6] = {
    2.813+waferYPos,
    2.2504+waferYPos,
    2.2504+waferYPos,
    2.813+waferYPos,
    3.3756+waferYPos,
    3.3756+waferYPos};
  graph = new TGraph(6,Graph_fx9,Graph_fy9);
  graph->SetName(Form("Sensor_9_%d",iwafer));
  graph->SetTitle("Sensor_9");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx10[6] = {
    4.222624+waferXPos,
    4.547442+waferXPos,
    5.197076+waferXPos,
    5.521893+waferXPos,
    5.197076+waferXPos,
    4.547442+waferXPos};
  Double_t Graph_fy10[6] = {
    1.6878+waferYPos,
    1.1252+waferYPos,
    1.1252+waferYPos,
    1.6878+waferYPos,
    2.2504+waferYPos,
    2.2504+waferYPos};
  graph = new TGraph(6,Graph_fx10,Graph_fy10);
  graph->SetName(Form("Sensor_10_%d",iwafer));
  graph->SetTitle("Sensor_10");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx11[6] = {
    4.222624+waferXPos,
    4.547442+waferXPos,
    5.197076+waferXPos,
    5.521893+waferXPos,
    5.197076+waferXPos,
    4.547442+waferXPos};
  Double_t Graph_fy11[6] = {
    0.5626+waferYPos,
    8.162187e-09+waferYPos,
    9.328214e-09+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos,
    1.1252+waferYPos};
  graph = new TGraph(6,Graph_fx11,Graph_fy11);
  graph->SetName(Form("Sensor_11_%d",iwafer));
  graph->SetTitle("Sensor_11");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx12[6] = {
    4.222624+waferXPos,
    4.547441+waferXPos,
    5.197076+waferXPos,
    5.521893+waferXPos,
    5.197076+waferXPos,
    4.547442+waferXPos};
  Double_t Graph_fy12[6] = {
    -0.5626+waferYPos,
    -1.1252+waferYPos,
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    9.328214e-09+waferYPos,
    8.162187e-09+waferYPos};
  graph = new TGraph(6,Graph_fx12,Graph_fy12);
  graph->SetName(Form("Sensor_12_%d",iwafer));
  graph->SetTitle("Sensor_12");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx13[6] = {
    4.222624+waferXPos,
    4.547441+waferXPos,
    5.197076+waferXPos,
    5.521893+waferXPos,
    5.197076+waferXPos,
    4.547441+waferXPos};
  Double_t Graph_fy13[6] = {
    -1.6878+waferYPos,
    -2.2504+waferYPos,
    -2.2504+waferYPos,
    -1.6878+waferYPos,
    -1.1252+waferYPos,
    -1.1252+waferYPos};
  graph = new TGraph(6,Graph_fx13,Graph_fy13);
  graph->SetName(Form("Sensor_13_%d",iwafer));
  graph->SetTitle("Sensor_13");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx14[6] = {
    4.222624+waferXPos,
    4.547441+waferXPos,
    5.197076+waferXPos,
    5.521893+waferXPos,
    5.197076+waferXPos,
    4.547441+waferXPos};
  Double_t Graph_fy14[6] = {
    -2.813+waferYPos,
    -3.3756+waferYPos,
    -3.3756+waferYPos,
    -2.813+waferYPos,
    -2.2504+waferYPos,
    -2.2504+waferYPos};
  graph = new TGraph(6,Graph_fx14,Graph_fy14);
  graph->SetName(Form("Sensor_14_%d",iwafer));
  graph->SetTitle("Sensor_14");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx15[4] = {
    4.222624+waferXPos,
    4.547441+waferXPos,
    5.197076+waferXPos,
    4.547441+waferXPos};
  Double_t Graph_fy15[4] = {
    -3.9382+waferYPos,
    -4.5008+waferYPos,
    -3.3756+waferYPos,
    -3.3756+waferYPos};
  graph = new TGraph(4,Graph_fx15,Graph_fy15);
  graph->SetName(Form("Sensor_15_%d",iwafer));
  graph->SetTitle("Sensor_15");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx16[4] = {
    3.248173+waferXPos,
    3.57299+waferXPos,
    4.222624+waferXPos,
    3.57299+waferXPos};
  Double_t Graph_fy16[4] = {
    5.626+waferYPos,
    5.0634+waferYPos,
    5.0634+waferYPos,
    6.1886+waferYPos};
  graph = new TGraph(4,Graph_fx16,Graph_fy16);
  graph->SetName(Form("Sensor_16_%d",iwafer));
  graph->SetTitle("Sensor_16");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx17[6] = {
    3.248173+waferXPos,
    3.57299+waferXPos,
    4.222624+waferXPos,
    4.547442+waferXPos,
    4.222624+waferXPos,
    3.57299+waferXPos};
  Double_t Graph_fy17[6] = {
    4.5008+waferYPos,
    3.9382+waferYPos,
    3.9382+waferYPos,
    4.5008+waferYPos,
    5.0634+waferYPos,
    5.0634+waferYPos};
  graph = new TGraph(6,Graph_fx17,Graph_fy17);
  graph->SetName(Form("Sensor_17_%d",iwafer));
  graph->SetTitle("Sensor_17");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx18[6] = {
    3.248173+waferXPos,
    3.57299+waferXPos,
    4.222624+waferXPos,
    4.547442+waferXPos,
    4.222624+waferXPos,
    3.57299+waferXPos};
  Double_t Graph_fy18[6] = {
    3.3756+waferYPos,
    2.813+waferYPos,
    2.813+waferYPos,
    3.3756+waferYPos,
    3.9382+waferYPos,
    3.9382+waferYPos};
  graph = new TGraph(6,Graph_fx18,Graph_fy18);
  graph->SetName(Form("Sensor_18_%d",iwafer));
  graph->SetTitle("Sensor_18");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx19[6] = {
    3.248173+waferXPos,
    3.57299+waferXPos,
    4.222624+waferXPos,
    4.547442+waferXPos,
    4.222624+waferXPos,
    3.57299+waferXPos};
  Double_t Graph_fy19[6] = {
    2.2504+waferYPos,
    1.6878+waferYPos,
    1.6878+waferYPos,
    2.2504+waferYPos,
    2.813+waferYPos,
    2.813+waferYPos};
  graph = new TGraph(6,Graph_fx19,Graph_fy19);
  graph->SetName(Form("Sensor_19_%d",iwafer));
  graph->SetTitle("Sensor_19");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx20[6] = {
    3.248173+waferXPos,
    3.57299+waferXPos,
    4.222624+waferXPos,
    4.547442+waferXPos,
    4.222624+waferXPos,
    3.57299+waferXPos};
  Double_t Graph_fy20[6] = {
    1.1252+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos,
    1.6878+waferYPos,
    1.6878+waferYPos};
  graph = new TGraph(6,Graph_fx20,Graph_fy20);
  graph->SetName(Form("Sensor_20_%d",iwafer));
  graph->SetTitle("Sensor_20");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);
  Double_t Graph_fx21[6] = {
    3.248173+waferXPos,
    3.57299+waferXPos,
    4.222624+waferXPos,
    4.547442+waferXPos,
    4.222624+waferXPos,
    3.57299+waferXPos};
  Double_t Graph_fy21[6] = {
    5.830134e-09+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos,
    8.162187e-09+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx21,Graph_fy21);
  graph->SetName(Form("Sensor_21_%d",iwafer));
  graph->SetTitle("Sensor_21");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx22[6] = {
    3.248172+waferXPos,
    3.57299+waferXPos,
    4.222624+waferXPos,
    4.547441+waferXPos,
    4.222624+waferXPos,
    3.57299+waferXPos};
  Double_t Graph_fy22[6] = {
    -1.1252+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos,
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx22,Graph_fy22);
  graph->SetName(Form("Sensor_22_%d",iwafer));
  graph->SetTitle("Sensor_22");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx23[6] = {
    3.248172+waferXPos,
    3.57299+waferXPos,
    4.222624+waferXPos,
    4.547441+waferXPos,
    4.222624+waferXPos,
    3.57299+waferXPos};
  Double_t Graph_fy23[6] = {
    -2.2504+waferYPos,
    -2.813+waferYPos,
    -2.813+waferYPos,
    -2.2504+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos};
  graph = new TGraph(6,Graph_fx23,Graph_fy23);
  graph->SetName(Form("Sensor_23_%d",iwafer));
  graph->SetTitle("Sensor_23");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx24[6] = {
    3.248172+waferXPos,
    3.57299+waferXPos,
    4.222624+waferXPos,
    4.547441+waferXPos,
    4.222624+waferXPos,
    3.57299+waferXPos};
  Double_t Graph_fy24[6] = {
    -3.3756+waferYPos,
    -3.9382+waferYPos,
    -3.9382+waferYPos,
    -3.3756+waferYPos,
    -2.813+waferYPos,
    -2.813+waferYPos};
  graph = new TGraph(6,Graph_fx24,Graph_fy24);
  graph->SetName(Form("Sensor_24_%d",iwafer));
  graph->SetTitle("Sensor_24");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx25[6] = {
    3.248172+waferXPos,
    3.57299+waferXPos,
    4.222624+waferXPos,
    4.547441+waferXPos,
    4.222624+waferXPos,
    3.57299+waferXPos};
  Double_t Graph_fy25[6] = {
    -4.5008+waferYPos,
    -5.0634+waferYPos,
    -5.0634+waferYPos,
    -4.5008+waferYPos,
    -3.9382+waferYPos,
    -3.9382+waferYPos};
  graph = new TGraph(6,Graph_fx25,Graph_fy25);
  graph->SetName(Form("Sensor_25_%d",iwafer));
  graph->SetTitle("Sensor_25");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx26[4] = {
    3.248172+waferXPos,
    3.57299+waferXPos,
    4.222624+waferXPos,
    3.57299+waferXPos};
  Double_t Graph_fy26[4] = {
    -5.626+waferYPos,
    -6.1886+waferYPos,
    -5.0634+waferYPos,
    -5.0634+waferYPos};
  graph = new TGraph(4,Graph_fx26,Graph_fy26);
  graph->SetName(Form("Sensor_26_%d",iwafer));
  graph->SetTitle("Sensor_26");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx27[4] = {
    2.273721+waferXPos,
    2.598538+waferXPos,
    3.248173+waferXPos,
    3.57299+waferXPos};
  Double_t Graph_fy27[4] = {
    6.1886+waferYPos,
    5.626+waferYPos,
    5.626+waferYPos,
    6.1886+waferYPos};
  graph = new TGraph(4,Graph_fx27,Graph_fy27);
  graph->SetName(Form("Sensor_27_%d",iwafer));
  graph->SetTitle("Sensor_27");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx28[6] = {
    2.273721+waferXPos,
    2.598538+waferXPos,
    3.248173+waferXPos,
    3.57299+waferXPos,
    3.248173+waferXPos,
    2.598538+waferXPos};
  Double_t Graph_fy28[6] = {
    5.0634+waferYPos,
    4.5008+waferYPos,
    4.5008+waferYPos,
    5.0634+waferYPos,
    5.626+waferYPos,
    5.626+waferYPos};
  graph = new TGraph(6,Graph_fx28,Graph_fy28);
  graph->SetName(Form("Sensor_28_%d",iwafer));
  graph->SetTitle("Sensor_28");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx29[6] = {
    2.273721+waferXPos,
    2.598538+waferXPos,
    3.248173+waferXPos,
    3.57299+waferXPos,
    3.248173+waferXPos,
    2.598538+waferXPos};
  Double_t Graph_fy29[6] = {
    3.9382+waferYPos,
    3.3756+waferYPos,
    3.3756+waferYPos,
    3.9382+waferYPos,
    4.5008+waferYPos,
    4.5008+waferYPos};
  graph = new TGraph(6,Graph_fx29,Graph_fy29);
  graph->SetName(Form("Sensor_29_%d",iwafer));
  graph->SetTitle("Sensor_29");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx30[6] = {
    2.273721+waferXPos,
    2.598538+waferXPos,
    3.248173+waferXPos,
    3.57299+waferXPos,
    3.248173+waferXPos,
    2.598538+waferXPos};
  Double_t Graph_fy30[6] = {
    2.813+waferYPos,
    2.2504+waferYPos,
    2.2504+waferYPos,
    2.813+waferYPos,
    3.3756+waferYPos,
    3.3756+waferYPos};
  graph = new TGraph(6,Graph_fx30,Graph_fy30);
  graph->SetName(Form("Sensor_30_%d",iwafer));
  graph->SetTitle("Sensor_30");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);
  Double_t Graph_fx31[6] = {
    2.273721+waferXPos,
    2.598538+waferXPos,
    3.248173+waferXPos,
    3.57299+waferXPos,
    3.248173+waferXPos,
    2.598538+waferXPos};
  Double_t Graph_fy31[6] = {
    1.6878+waferYPos,
    1.1252+waferYPos,
    1.1252+waferYPos,
    1.6878+waferYPos,
    2.2504+waferYPos,
    2.2504+waferYPos};
  graph = new TGraph(6,Graph_fx31,Graph_fy31);
  graph->SetName(Form("Sensor_31_%d",iwafer));
  graph->SetTitle("Sensor_31");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx32[6] = {
    2.273721+waferXPos,
    2.598538+waferXPos,
    3.248173+waferXPos,
    3.57299+waferXPos,
    3.248173+waferXPos,
    2.598538+waferXPos};
  Double_t Graph_fy32[6] = {
    0.5626+waferYPos,
    4.664107e-09+waferYPos,
    5.830134e-09+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos,
    1.1252+waferYPos};
  graph = new TGraph(6,Graph_fx32,Graph_fy32);
  graph->SetName(Form("Sensor_32_%d",iwafer));
  graph->SetTitle("Sensor_32");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx33[6] = {
    2.273721+waferXPos,
    2.598538+waferXPos,
    3.248172+waferXPos,
    3.57299+waferXPos,
    3.248173+waferXPos,
    2.598538+waferXPos};
  Double_t Graph_fy33[6] = {
    -0.5626+waferYPos,
    -1.1252+waferYPos,
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    5.830134e-09+waferYPos,
    4.664107e-09+waferYPos};
  graph = new TGraph(6,Graph_fx33,Graph_fy33);
  graph->SetName(Form("Sensor_33_%d",iwafer));
  graph->SetTitle("Sensor_33");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx34[6] = {
    2.273721+waferXPos,
    2.598538+waferXPos,
    3.248172+waferXPos,
    3.57299+waferXPos,
    3.248172+waferXPos,
    2.598538+waferXPos};
  Double_t Graph_fy34[6] = {
    -1.6878+waferYPos,
    -2.2504+waferYPos,
    -2.2504+waferYPos,
    -1.6878+waferYPos,
    -1.1252+waferYPos,
    -1.1252+waferYPos};
  graph = new TGraph(6,Graph_fx34,Graph_fy34);
  graph->SetName(Form("Sensor_34_%d",iwafer));
  graph->SetTitle("Sensor_34");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx35[6] = {
    2.273721+waferXPos,
    2.598538+waferXPos,
    3.248172+waferXPos,
    3.57299+waferXPos,
    3.248172+waferXPos,
    2.598538+waferXPos};
  Double_t Graph_fy35[6] = {
    -2.813+waferYPos,
    -3.3756+waferYPos,
    -3.3756+waferYPos,
    -2.813+waferYPos,
    -2.2504+waferYPos,
    -2.2504+waferYPos};
  graph = new TGraph(6,Graph_fx35,Graph_fy35);
  graph->SetName(Form("Sensor_35_%d",iwafer));
  graph->SetTitle("Sensor_35");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx36[6] = {
    2.273721+waferXPos,
    2.598538+waferXPos,
    3.248172+waferXPos,
    3.57299+waferXPos,
    3.248172+waferXPos,
    2.598538+waferXPos};
  Double_t Graph_fy36[6] = {
    -3.9382+waferYPos,
    -4.5008+waferYPos,
    -4.5008+waferYPos,
    -3.9382+waferYPos,
    -3.3756+waferYPos,
    -3.3756+waferYPos};
  graph = new TGraph(6,Graph_fx36,Graph_fy36);
  graph->SetName(Form("Sensor_36_%d",iwafer));
  graph->SetTitle("Sensor_36");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx37[6] = {
    2.273721+waferXPos,
    2.598538+waferXPos,
    3.248172+waferXPos,
    3.57299+waferXPos,
    3.248172+waferXPos,
    2.598538+waferXPos};
  Double_t Graph_fy37[6] = {
    -5.0634+waferYPos,
    -5.626+waferYPos,
    -5.626+waferYPos,
    -5.0634+waferYPos,
    -4.5008+waferYPos,
    -4.5008+waferYPos};
  graph = new TGraph(6,Graph_fx37,Graph_fy37);
  graph->SetName(Form("Sensor_37_%d",iwafer));
  graph->SetTitle("Sensor_37");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx38[4] = {
    2.273721+waferXPos,
    3.57299+waferXPos,
    3.248172+waferXPos,
    2.598538+waferXPos};
  Double_t Graph_fy38[4] = {
    -6.1886+waferYPos,
    -6.1886+waferYPos,
    -5.626+waferYPos,
    -5.626+waferYPos};
  graph = new TGraph(4,Graph_fx38,Graph_fy38);
  graph->SetName(Form("Sensor_38_%d",iwafer));
  graph->SetTitle("Sensor_38");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx39[6] = {
    1.299269+waferXPos,
    1.624086+waferXPos,
    2.273721+waferXPos,
    2.598538+waferXPos,
    2.273721+waferXPos,
    1.624086+waferXPos};
  Double_t Graph_fy39[6] = {
    5.626+waferYPos,
    5.0634+waferYPos,
    5.0634+waferYPos,
    5.626+waferYPos,
    6.1886+waferYPos,
    6.1886+waferYPos};
  graph = new TGraph(6,Graph_fx39,Graph_fy39);
  graph->SetName(Form("Sensor_39_%d",iwafer));
  graph->SetTitle("Sensor_39");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx40[6] = {
    1.299269+waferXPos,
    1.624086+waferXPos,
    2.273721+waferXPos,
    2.598538+waferXPos,
    2.273721+waferXPos,
    1.624086+waferXPos};
  Double_t Graph_fy40[6] = {
    4.5008+waferYPos,
    3.9382+waferYPos,
    3.9382+waferYPos,
    4.5008+waferYPos,
    5.0634+waferYPos,
    5.0634+waferYPos};
  graph = new TGraph(6,Graph_fx40,Graph_fy40);
  graph->SetName(Form("Sensor_40_%d",iwafer));
  graph->SetTitle("Sensor_40");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx41[6] = {
    1.299269+waferXPos,
    1.624086+waferXPos,
    2.273721+waferXPos,
    2.598538+waferXPos,
    2.273721+waferXPos,
    1.624086+waferXPos};
  Double_t Graph_fy41[6] = {
    3.3756+waferYPos,
    2.813+waferYPos,
    2.813+waferYPos,
    3.3756+waferYPos,
    3.9382+waferYPos,
    3.9382+waferYPos};
  graph = new TGraph(6,Graph_fx41,Graph_fy41);
  graph->SetName(Form("Sensor_41_%d",iwafer));
  graph->SetTitle("Sensor_41");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx42[6] = {
    1.299269+waferXPos,
    1.624086+waferXPos,
    2.273721+waferXPos,
    2.598538+waferXPos,
    2.273721+waferXPos,
    1.624086+waferXPos};
  Double_t Graph_fy42[6] = {
    2.2504+waferYPos,
    1.6878+waferYPos,
    1.6878+waferYPos,
    2.2504+waferYPos,
    2.813+waferYPos,
    2.813+waferYPos};
  graph = new TGraph(6,Graph_fx42,Graph_fy42);
  graph->SetName(Form("Sensor_42_%d",iwafer));
  graph->SetTitle("Sensor_42");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx43[6] = {
    1.299269+waferXPos,
    1.624086+waferXPos,
    2.273721+waferXPos,
    2.598538+waferXPos,
    2.273721+waferXPos,
    1.624086+waferXPos};
  Double_t Graph_fy43[6] = {
    1.1252+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos,
    1.6878+waferYPos,
    1.6878+waferYPos};
  graph = new TGraph(6,Graph_fx43,Graph_fy43);
  graph->SetName(Form("Sensor_43_%d",iwafer));
  graph->SetTitle("Sensor_43");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx44[6] = {
    1.299269+waferXPos,
    1.624086+waferXPos,
    2.273721+waferXPos,
    2.598538+waferXPos,
    2.273721+waferXPos,
    1.624086+waferXPos};
  Double_t Graph_fy44[6] = {
    2.332053e-09+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos,
    4.664107e-09+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx44,Graph_fy44);
  graph->SetName(Form("Sensor_44_%d",iwafer));
  graph->SetTitle("Sensor_44");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx45[6] = {
    1.299269+waferXPos,
    1.624086+waferXPos,
    2.273721+waferXPos,
    2.598538+waferXPos,
    2.273721+waferXPos,
    1.624086+waferXPos};
  Double_t Graph_fy45[6] = {
    -1.1252+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos,
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx45,Graph_fy45);
  graph->SetName(Form("Sensor_45_%d",iwafer));
  graph->SetTitle("Sensor_45");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx46[6] = {
    1.299269+waferXPos,
    1.624086+waferXPos,
    2.273721+waferXPos,
    2.598538+waferXPos,
    2.273721+waferXPos,
    1.624086+waferXPos};
  Double_t Graph_fy46[6] = {
    -2.2504+waferYPos,
    -2.813+waferYPos,
    -2.813+waferYPos,
    -2.2504+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos};
  graph = new TGraph(6,Graph_fx46,Graph_fy46);
  graph->SetName(Form("Sensor_46_%d",iwafer));
  graph->SetTitle("Sensor_46");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx47[6] = {
    1.299269+waferXPos,
    1.624086+waferXPos,
    2.273721+waferXPos,
    2.598538+waferXPos,
    2.273721+waferXPos,
    1.624086+waferXPos};
  Double_t Graph_fy47[6] = {
    -3.3756+waferYPos,
    -3.9382+waferYPos,
    -3.9382+waferYPos,
    -3.3756+waferYPos,
    -2.813+waferYPos,
    -2.813+waferYPos};
  graph = new TGraph(6,Graph_fx47,Graph_fy47);
  graph->SetName(Form("Sensor_47_%d",iwafer));
  graph->SetTitle("Sensor_47");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx48[6] = {
    1.299269+waferXPos,
    1.624086+waferXPos,
    2.273721+waferXPos,
    2.598538+waferXPos,
    2.273721+waferXPos,
    1.624086+waferXPos};
  Double_t Graph_fy48[6] = {
    -4.5008+waferYPos,
    -5.0634+waferYPos,
    -5.0634+waferYPos,
    -4.5008+waferYPos,
    -3.9382+waferYPos,
    -3.9382+waferYPos};
  graph = new TGraph(6,Graph_fx48,Graph_fy48);
  graph->SetName(Form("Sensor_48_%d",iwafer));
  graph->SetTitle("Sensor_48");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx49[6] = {
    1.299269+waferXPos,
    1.624086+waferXPos,
    2.273721+waferXPos,
    2.598538+waferXPos,
    2.273721+waferXPos,
    1.624086+waferXPos};
  Double_t Graph_fy49[6] = {
    -5.626+waferYPos,
    -6.1886+waferYPos,
    -6.1886+waferYPos,
    -5.626+waferYPos,
    -5.0634+waferYPos,
    -5.0634+waferYPos};
  graph = new TGraph(6,Graph_fx49,Graph_fy49);
  graph->SetName(Form("Sensor_49_%d",iwafer));
  graph->SetTitle("Sensor_49");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx50[4] = {
    0.3248173+waferXPos,
    0.6496345+waferXPos,
    1.299269+waferXPos,
    1.624086+waferXPos};
  Double_t Graph_fy50[4] = {
    6.1886+waferYPos,
    5.626+waferYPos,
    5.626+waferYPos,
    6.1886+waferYPos};
  graph = new TGraph(4,Graph_fx50,Graph_fy50);
  graph->SetName(Form("Sensor_50_%d",iwafer));
  graph->SetTitle("Sensor_50");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx51[6] = {
    0.3248173+waferXPos,
    0.6496345+waferXPos,
    1.299269+waferXPos,
    1.624086+waferXPos,
    1.299269+waferXPos,
    0.6496345+waferXPos};
  Double_t Graph_fy51[6] = {
    5.0634+waferYPos,
    4.5008+waferYPos,
    4.5008+waferYPos,
    5.0634+waferYPos,
    5.626+waferYPos,
    5.626+waferYPos};
  graph = new TGraph(6,Graph_fx51,Graph_fy51);
  graph->SetName(Form("Sensor_51_%d",iwafer));
  graph->SetTitle("Sensor_51");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx52[6] = {
    0.3248173+waferXPos,
    0.6496345+waferXPos,
    1.299269+waferXPos,
    1.624086+waferXPos,
    1.299269+waferXPos,
    0.6496345+waferXPos};
  Double_t Graph_fy52[6] = {
    3.9382+waferYPos,
    3.3756+waferYPos,
    3.3756+waferYPos,
    3.9382+waferYPos,
    4.5008+waferYPos,
    4.5008+waferYPos};
  graph = new TGraph(6,Graph_fx52,Graph_fy52);
  graph->SetName(Form("Sensor_52_%d",iwafer));
  graph->SetTitle("Sensor_52");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx53[6] = {
    0.3248173+waferXPos,
    0.6496345+waferXPos,
    1.299269+waferXPos,
    1.624086+waferXPos,
    1.299269+waferXPos,
    0.6496345+waferXPos};
  Double_t Graph_fy53[6] = {
    2.813+waferYPos,
    2.2504+waferYPos,
    2.2504+waferYPos,
    2.813+waferYPos,
    3.3756+waferYPos,
    3.3756+waferYPos};
  graph = new TGraph(6,Graph_fx53,Graph_fy53);
  graph->SetName(Form("Sensor_53_%d",iwafer));
  graph->SetTitle("Sensor_53");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx54[6] = {
    0.3248173+waferXPos,
    0.6496345+waferXPos,
    1.299269+waferXPos,
    1.624086+waferXPos,
    1.299269+waferXPos,
    0.6496345+waferXPos};
  Double_t Graph_fy54[6] = {
    1.6878+waferYPos,
    1.1252+waferYPos,
    1.1252+waferYPos,
    1.6878+waferYPos,
    2.2504+waferYPos,
    2.2504+waferYPos};
  graph = new TGraph(6,Graph_fx54,Graph_fy54);
  graph->SetName(Form("Sensor_54_%d",iwafer));
  graph->SetTitle("Sensor_54");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx55[6] = {
    0.3248173+waferXPos,
    0.6496345+waferXPos,
    1.299269+waferXPos,
    1.624086+waferXPos,
    1.299269+waferXPos,
    0.6496345+waferXPos};
  Double_t Graph_fy55[6] = {
    0.5626+waferYPos,
    1.166027e-09+waferYPos,
    2.332053e-09+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos,
    1.1252+waferYPos};
  graph = new TGraph(6,Graph_fx55,Graph_fy55);
  graph->SetName(Form("Sensor_55_%d",iwafer));
  graph->SetTitle("Sensor_55");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx56[6] = {
    0.3248172+waferXPos,
    0.6496345+waferXPos,
    1.299269+waferXPos,
    1.624086+waferXPos,
    1.299269+waferXPos,
    0.6496345+waferXPos};
  Double_t Graph_fy56[6] = {
    -0.5626+waferYPos,
    -1.1252+waferYPos,
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    2.332053e-09+waferYPos,
    1.166027e-09+waferYPos};
  graph = new TGraph(6,Graph_fx56,Graph_fy56);
  graph->SetName(Form("Sensor_56_%d",iwafer));
  graph->SetTitle("Sensor_56");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx57[6] = {
    0.3248172+waferXPos,
    0.6496345+waferXPos,
    1.299269+waferXPos,
    1.624086+waferXPos,
    1.299269+waferXPos,
    0.6496345+waferXPos};
  Double_t Graph_fy57[6] = {
    -1.6878+waferYPos,
    -2.2504+waferYPos,
    -2.2504+waferYPos,
    -1.6878+waferYPos,
    -1.1252+waferYPos,
    -1.1252+waferYPos};
  graph = new TGraph(6,Graph_fx57,Graph_fy57);
  graph->SetName(Form("Sensor_57_%d",iwafer));
  graph->SetTitle("Sensor_57");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx58[6] = {
    0.3248172+waferXPos,
    0.6496345+waferXPos,
    1.299269+waferXPos,
    1.624086+waferXPos,
    1.299269+waferXPos,
    0.6496345+waferXPos};
  Double_t Graph_fy58[6] = {
    -2.813+waferYPos,
    -3.3756+waferYPos,
    -3.3756+waferYPos,
    -2.813+waferYPos,
    -2.2504+waferYPos,
    -2.2504+waferYPos};
  graph = new TGraph(6,Graph_fx58,Graph_fy58);
  graph->SetName(Form("Sensor_58_%d",iwafer));
  graph->SetTitle("Sensor_58");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx59[6] = {
    0.3248172+waferXPos,
    0.6496345+waferXPos,
    1.299269+waferXPos,
    1.624086+waferXPos,
    1.299269+waferXPos,
    0.6496345+waferXPos};
  Double_t Graph_fy59[6] = {
    -3.9382+waferYPos,
    -4.5008+waferYPos,
    -4.5008+waferYPos,
    -3.9382+waferYPos,
    -3.3756+waferYPos,
    -3.3756+waferYPos};
  graph = new TGraph(6,Graph_fx59,Graph_fy59);
  graph->SetName(Form("Sensor_59_%d",iwafer));
  graph->SetTitle("Sensor_59");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx60[6] = {
    0.3248172+waferXPos,
    0.6496345+waferXPos,
    1.299269+waferXPos,
    1.624086+waferXPos,
    1.299269+waferXPos,
    0.6496345+waferXPos};
  Double_t Graph_fy60[6] = {
    -5.0634+waferYPos,
    -5.626+waferYPos,
    -5.626+waferYPos,
    -5.0634+waferYPos,
    -4.5008+waferYPos,
    -4.5008+waferYPos};
  graph = new TGraph(6,Graph_fx60,Graph_fy60);
  graph->SetName(Form("Sensor_60_%d",iwafer));
  graph->SetTitle("Sensor_60");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx61[4] = {
    0.3248172+waferXPos,
    1.624086+waferXPos,
    1.299269+waferXPos,
    0.6496345+waferXPos};
  Double_t Graph_fy61[4] = {
    -6.1886+waferYPos,
    -6.1886+waferYPos,
    -5.626+waferYPos,
    -5.626+waferYPos};
  graph = new TGraph(4,Graph_fx61,Graph_fy61);
  graph->SetName(Form("Sensor_61_%d",iwafer));
  graph->SetTitle("Sensor_61");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx62[6] = {
    -0.6496345+waferXPos,
    -0.3248172+waferXPos,
    0.3248173+waferXPos,
    0.6496345+waferXPos,
    0.3248173+waferXPos,
    -0.3248172+waferXPos};
  Double_t Graph_fy62[6] = {
    5.626+waferYPos,
    5.0634+waferYPos,
    5.0634+waferYPos,
    5.626+waferYPos,
    6.1886+waferYPos,
    6.1886+waferYPos};
  graph = new TGraph(6,Graph_fx62,Graph_fy62);
  graph->SetName(Form("Sensor_62_%d",iwafer));
  graph->SetTitle("Sensor_62");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx63[6] = {
    -0.6496345+waferXPos,
    -0.3248172+waferXPos,
    0.3248173+waferXPos,
    0.6496345+waferXPos,
    0.3248173+waferXPos,
    -0.3248172+waferXPos};
  Double_t Graph_fy63[6] = {
    4.5008+waferYPos,
    3.9382+waferYPos,
    3.9382+waferYPos,
    4.5008+waferYPos,
    5.0634+waferYPos,
    5.0634+waferYPos};
  graph = new TGraph(6,Graph_fx63,Graph_fy63);
  graph->SetName(Form("Sensor_63_%d",iwafer));
  graph->SetTitle("Sensor_63");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx64[6] = {
    -0.6496345+waferXPos,
    -0.3248172+waferXPos,
    0.3248173+waferXPos,
    0.6496345+waferXPos,
    0.3248173+waferXPos,
    -0.3248172+waferXPos};
  Double_t Graph_fy64[6] = {
    3.3756+waferYPos,
    2.813+waferYPos,
    2.813+waferYPos,
    3.3756+waferYPos,
    3.9382+waferYPos,
    3.9382+waferYPos};
  graph = new TGraph(6,Graph_fx64,Graph_fy64);
  graph->SetName(Form("Sensor_64_%d",iwafer));
  graph->SetTitle("Sensor_64");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx65[6] = {
    -0.6496345+waferXPos,
    -0.3248172+waferXPos,
    0.3248173+waferXPos,
    0.6496345+waferXPos,
    0.3248173+waferXPos,
    -0.3248172+waferXPos};
  Double_t Graph_fy65[6] = {
    2.2504+waferYPos,
    1.6878+waferYPos,
    1.6878+waferYPos,
    2.2504+waferYPos,
    2.813+waferYPos,
    2.813+waferYPos};
  graph = new TGraph(6,Graph_fx65,Graph_fy65);
  graph->SetName(Form("Sensor_65_%d",iwafer));
  graph->SetTitle("Sensor_65");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx66[6] = {
    -0.6496345+waferXPos,
    -0.3248172+waferXPos,
    0.3248173+waferXPos,
    0.6496345+waferXPos,
    0.3248173+waferXPos,
    -0.3248172+waferXPos};
  Double_t Graph_fy66[6] = {
    1.1252+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos,
    1.6878+waferYPos,
    1.6878+waferYPos};
  graph = new TGraph(6,Graph_fx66,Graph_fy66);
  graph->SetName(Form("Sensor_66_%d",iwafer));
  graph->SetTitle("Sensor_66");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx67[6] = {
    -0.6496345+waferXPos,
    -0.3248173+waferXPos,
    0.3248172+waferXPos,
    0.6496345+waferXPos,
    0.3248173+waferXPos,
    -0.3248172+waferXPos};
  Double_t Graph_fy67[6] = {
    -1.166027e-09+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos,
    1.166027e-09+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx67,Graph_fy67);
  graph->SetName(Form("Sensor_67_%d",iwafer));
  graph->SetTitle("Sensor_67");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);
  Double_t Graph_fx68[6] = {
    -0.6496345+waferXPos,
    -0.3248173+waferXPos,
    0.3248172+waferXPos,
    0.6496345+waferXPos,
    0.3248172+waferXPos,
    -0.3248173+waferXPos};
  Double_t Graph_fy68[6] = {
    -1.1252+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos,
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx68,Graph_fy68);
  graph->SetName(Form("Sensor_68_%d",iwafer));
  graph->SetTitle("Sensor_68");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx69[6] = {
    -0.6496345+waferXPos,
    -0.3248173+waferXPos,
    0.3248172+waferXPos,
    0.6496345+waferXPos,
    0.3248172+waferXPos,
    -0.3248173+waferXPos};
  Double_t Graph_fy69[6] = {
    -2.2504+waferYPos,
    -2.813+waferYPos,
    -2.813+waferYPos,
    -2.2504+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos};
  graph = new TGraph(6,Graph_fx69,Graph_fy69);
  graph->SetName(Form("Sensor_69_%d",iwafer));
  graph->SetTitle("Sensor_69");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx70[6] = {
    -0.6496345+waferXPos,
    -0.3248173+waferXPos,
    0.3248172+waferXPos,
    0.6496345+waferXPos,
    0.3248172+waferXPos,
    -0.3248173+waferXPos};
  Double_t Graph_fy70[6] = {
    -3.3756+waferYPos,
    -3.9382+waferYPos,
    -3.9382+waferYPos,
    -3.3756+waferYPos,
    -2.813+waferYPos,
    -2.813+waferYPos};
  graph = new TGraph(6,Graph_fx70,Graph_fy70);
  graph->SetName(Form("Sensor_70_%d",iwafer));
  graph->SetTitle("Sensor_70");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx71[6] = {
    -0.6496345+waferXPos,
    -0.3248173+waferXPos,
    0.3248172+waferXPos,
    0.6496345+waferXPos,
    0.3248172+waferXPos,
    -0.3248173+waferXPos};
  Double_t Graph_fy71[6] = {
    -4.5008+waferYPos,
    -5.0634+waferYPos,
    -5.0634+waferYPos,
    -4.5008+waferYPos,
    -3.9382+waferYPos,
    -3.9382+waferYPos};
  graph = new TGraph(6,Graph_fx71,Graph_fy71);
  graph->SetName(Form("Sensor_71_%d",iwafer));
  graph->SetTitle("Sensor_71");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx72[6] = {
    -0.6496345+waferXPos,
    -0.3248173+waferXPos,
    0.3248172+waferXPos,
    0.6496345+waferXPos,
    0.3248172+waferXPos,
    -0.3248173+waferXPos};
  Double_t Graph_fy72[6] = {
    -5.626+waferYPos,
    -6.1886+waferYPos,
    -6.1886+waferYPos,
    -5.626+waferYPos,
    -5.0634+waferYPos,
    -5.0634+waferYPos};
  graph = new TGraph(6,Graph_fx72,Graph_fy72);
  graph->SetName(Form("Sensor_72_%d",iwafer));
  graph->SetTitle("Sensor_72");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx73[4] = {
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -0.6496345+waferXPos,
    -0.3248172+waferXPos};
  Double_t Graph_fy73[4] = {
    6.1886+waferYPos,
    5.626+waferYPos,
    5.626+waferYPos,
    6.1886+waferYPos};
  graph = new TGraph(4,Graph_fx73,Graph_fy73);
  graph->SetName(Form("Sensor_73_%d",iwafer));
  graph->SetTitle("Sensor_73");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx74[6] = {
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -0.6496345+waferXPos,
    -0.3248172+waferXPos,
    -0.6496345+waferXPos,
    -1.299269+waferXPos};
  Double_t Graph_fy74[6] = {
    5.0634+waferYPos,
    4.5008+waferYPos,
    4.5008+waferYPos,
    5.0634+waferYPos,
    5.626+waferYPos,
    5.626+waferYPos};
  graph = new TGraph(6,Graph_fx74,Graph_fy74);
  graph->SetName(Form("Sensor_74_%d",iwafer));
  graph->SetTitle("Sensor_74");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx75[6] = {
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -0.6496345+waferXPos,
    -0.3248172+waferXPos,
    -0.6496345+waferXPos,
    -1.299269+waferXPos};
  Double_t Graph_fy75[6] = {
    3.9382+waferYPos,
    3.3756+waferYPos,
    3.3756+waferYPos,
    3.9382+waferYPos,
    4.5008+waferYPos,
    4.5008+waferYPos};
  graph = new TGraph(6,Graph_fx75,Graph_fy75);
  graph->SetName(Form("Sensor_75_%d",iwafer));
  graph->SetTitle("Sensor_75");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx76[6] = {
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -0.6496345+waferXPos,
    -0.3248172+waferXPos,
    -0.6496345+waferXPos,
    -1.299269+waferXPos};
  Double_t Graph_fy76[6] = {
    2.813+waferYPos,
    2.2504+waferYPos,
    2.2504+waferYPos,
    2.813+waferYPos,
    3.3756+waferYPos,
    3.3756+waferYPos};
  graph = new TGraph(6,Graph_fx76,Graph_fy76);
  graph->SetName(Form("Sensor_76_%d",iwafer));
  graph->SetTitle("Sensor_76");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx77[6] = {
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -0.6496345+waferXPos,
    -0.3248172+waferXPos,
    -0.6496345+waferXPos,
    -1.299269+waferXPos};
  Double_t Graph_fy77[6] = {
    1.6878+waferYPos,
    1.1252+waferYPos,
    1.1252+waferYPos,
    1.6878+waferYPos,
    2.2504+waferYPos,
    2.2504+waferYPos};
  graph = new TGraph(6,Graph_fx77,Graph_fy77);
  graph->SetName(Form("Sensor_77_%d",iwafer));
  graph->SetTitle("Sensor_77");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx78[6] = {
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -0.6496345+waferXPos,
    -0.3248172+waferXPos,
    -0.6496345+waferXPos,
    -1.299269+waferXPos};
  Double_t Graph_fy78[6] = {
    0.5626+waferYPos,
    -2.332053e-09+waferYPos,
    -1.166027e-09+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos,
    1.1252+waferYPos};
  graph = new TGraph(6,Graph_fx78,Graph_fy78);
  graph->SetName(Form("Sensor_78_%d",iwafer));
  graph->SetTitle("Sensor_78");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx79[6] = {
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -0.6496345+waferXPos,
    -0.3248173+waferXPos,
    -0.6496345+waferXPos,
    -1.299269+waferXPos};
  Double_t Graph_fy79[6] = {
    -0.5626+waferYPos,
    -1.1252+waferYPos,
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    -1.166027e-09+waferYPos,
    -2.332053e-09+waferYPos};
  graph = new TGraph(6,Graph_fx79,Graph_fy79);
  graph->SetName(Form("Sensor_79_%d",iwafer));
  graph->SetTitle("Sensor_79");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);
  Double_t Graph_fx80[6] = {
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -0.6496345+waferXPos,
    -0.3248173+waferXPos,
    -0.6496345+waferXPos,
    -1.299269+waferXPos};
  Double_t Graph_fy80[6] = {
    -1.6878+waferYPos,
    -2.2504+waferYPos,
    -2.2504+waferYPos,
    -1.6878+waferYPos,
    -1.1252+waferYPos,
    -1.1252+waferYPos};
  graph = new TGraph(6,Graph_fx80,Graph_fy80);
  graph->SetName(Form("Sensor_80_%d",iwafer));
  graph->SetTitle("Sensor_80");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx81[6] = {
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -0.6496345+waferXPos,
    -0.3248173+waferXPos,
    -0.6496345+waferXPos,
    -1.299269+waferXPos};
  Double_t Graph_fy81[6] = {
    -2.813+waferYPos,
    -3.3756+waferYPos,
    -3.3756+waferYPos,
    -2.813+waferYPos,
    -2.2504+waferYPos,
    -2.2504+waferYPos};
  graph = new TGraph(6,Graph_fx81,Graph_fy81);
  graph->SetName(Form("Sensor_81_%d",iwafer));
  graph->SetTitle("Sensor_81");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx82[6] = {
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -0.6496345+waferXPos,
    -0.3248173+waferXPos,
    -0.6496345+waferXPos,
    -1.299269+waferXPos};
  Double_t Graph_fy82[6] = {
    -3.9382+waferYPos,
    -4.5008+waferYPos,
    -4.5008+waferYPos,
    -3.9382+waferYPos,
    -3.3756+waferYPos,
    -3.3756+waferYPos};
  graph = new TGraph(6,Graph_fx82,Graph_fy82);
  graph->SetName(Form("Sensor_82_%d",iwafer));
  graph->SetTitle("Sensor_82");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx83[6] = {
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -0.6496345+waferXPos,
    -0.3248173+waferXPos,
    -0.6496345+waferXPos,
    -1.299269+waferXPos};
  Double_t Graph_fy83[6] = {
    -5.0634+waferYPos,
    -5.626+waferYPos,
    -5.626+waferYPos,
    -5.0634+waferYPos,
    -4.5008+waferYPos,
    -4.5008+waferYPos};
  graph = new TGraph(6,Graph_fx83,Graph_fy83);
  graph->SetName(Form("Sensor_83_%d",iwafer));
  graph->SetTitle("Sensor_83");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx84[4] = {
    -1.624086+waferXPos,
    -0.3248173+waferXPos,
    -0.6496345+waferXPos,
    -1.299269+waferXPos};
  Double_t Graph_fy84[4] = {
    -6.1886+waferYPos,
    -6.1886+waferYPos,
    -5.626+waferYPos,
    -5.626+waferYPos};
  graph = new TGraph(4,Graph_fx84,Graph_fy84);
  graph->SetName(Form("Sensor_84_%d",iwafer));
  graph->SetTitle("Sensor_84");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx85[6] = {
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -1.624086+waferXPos,
    -2.273721+waferXPos};
  Double_t Graph_fy85[6] = {
    5.626+waferYPos,
    5.0634+waferYPos,
    5.0634+waferYPos,
    5.626+waferYPos,
    6.1886+waferYPos,
    6.1886+waferYPos};
  graph = new TGraph(6,Graph_fx85,Graph_fy85);
  graph->SetName(Form("Sensor_85_%d",iwafer));
  graph->SetTitle("Sensor_85");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx86[6] = {
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -1.624086+waferXPos,
    -2.273721+waferXPos};
  Double_t Graph_fy86[6] = {
    4.5008+waferYPos,
    3.9382+waferYPos,
    3.9382+waferYPos,
    4.5008+waferYPos,
    5.0634+waferYPos,
    5.0634+waferYPos};
  graph = new TGraph(6,Graph_fx86,Graph_fy86);
  graph->SetName(Form("Sensor_86_%d",iwafer));
  graph->SetTitle("Sensor_86");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx87[6] = {
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -1.624086+waferXPos,
    -2.273721+waferXPos};
  Double_t Graph_fy87[6] = {
    3.3756+waferYPos,
    2.813+waferYPos,
    2.813+waferYPos,
    3.3756+waferYPos,
    3.9382+waferYPos,
    3.9382+waferYPos};
  graph = new TGraph(6,Graph_fx87,Graph_fy87);
  graph->SetName(Form("Sensor_87_%d",iwafer));
  graph->SetTitle("Sensor_87");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx88[6] = {
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -1.624086+waferXPos,
    -2.273721+waferXPos};
  Double_t Graph_fy88[6] = {
    2.2504+waferYPos,
    1.6878+waferYPos,
    1.6878+waferYPos,
    2.2504+waferYPos,
    2.813+waferYPos,
    2.813+waferYPos};
  graph = new TGraph(6,Graph_fx88,Graph_fy88);
  graph->SetName(Form("Sensor_88_%d",iwafer));
  graph->SetTitle("Sensor_88");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx89[6] = {
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -1.624086+waferXPos,
    -2.273721+waferXPos};
  Double_t Graph_fy89[6] = {
    1.1252+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos,
    1.6878+waferYPos,
    1.6878+waferYPos};
  graph = new TGraph(6,Graph_fx89,Graph_fy89);
  graph->SetName(Form("Sensor_89_%d",iwafer));
  graph->SetTitle("Sensor_89");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx90[6] = {
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -1.624086+waferXPos,
    -2.273721+waferXPos};
  Double_t Graph_fy90[6] = {
    -4.664107e-09+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos,
    -2.332053e-09+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx90,Graph_fy90);
  graph->SetName(Form("Sensor_90_%d",iwafer));
  graph->SetTitle("Sensor_90");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);
  Double_t Graph_fx91[6] = {
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -1.624086+waferXPos,
    -2.273721+waferXPos};
  Double_t Graph_fy91[6] = {
    -1.1252+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos,
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx91,Graph_fy91);
  graph->SetName(Form("Sensor_91_%d",iwafer));
  graph->SetTitle("Sensor_91");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx92[6] = {
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -1.624086+waferXPos,
    -2.273721+waferXPos};
  Double_t Graph_fy92[6] = {
    -2.2504+waferYPos,
    -2.813+waferYPos,
    -2.813+waferYPos,
    -2.2504+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos};
  graph = new TGraph(6,Graph_fx92,Graph_fy92);
  graph->SetName(Form("Sensor_92_%d",iwafer));
  graph->SetTitle("Sensor_92");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx93[6] = {
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -1.624086+waferXPos,
    -2.273721+waferXPos};
  Double_t Graph_fy93[6] = {
    -3.3756+waferYPos,
    -3.9382+waferYPos,
    -3.9382+waferYPos,
    -3.3756+waferYPos,
    -2.813+waferYPos,
    -2.813+waferYPos};
  graph = new TGraph(6,Graph_fx93,Graph_fy93);
  graph->SetName(Form("Sensor_93_%d",iwafer));
  graph->SetTitle("Sensor_93");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx94[6] = {
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -1.624086+waferXPos,
    -2.273721+waferXPos};
  Double_t Graph_fy94[6] = {
    -4.5008+waferYPos,
    -5.0634+waferYPos,
    -5.0634+waferYPos,
    -4.5008+waferYPos,
    -3.9382+waferYPos,
    -3.9382+waferYPos};
  graph = new TGraph(6,Graph_fx94,Graph_fy94);
  graph->SetName(Form("Sensor_94_%d",iwafer));
  graph->SetTitle("Sensor_94");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx95[6] = {
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -1.624086+waferXPos,
    -1.299269+waferXPos,
    -1.624086+waferXPos,
    -2.273721+waferXPos};
  Double_t Graph_fy95[6] = {
    -5.626+waferYPos,
    -6.1886+waferYPos,
    -6.1886+waferYPos,
    -5.626+waferYPos,
    -5.0634+waferYPos,
    -5.0634+waferYPos};
  graph = new TGraph(6,Graph_fx95,Graph_fy95);
  graph->SetName(Form("Sensor_95_%d",iwafer));
  graph->SetTitle("Sensor_95");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx96[4] = {
    -3.57299+waferXPos,
    -3.248172+waferXPos,
    -2.598538+waferXPos,
    -2.273721+waferXPos};
  Double_t Graph_fy96[4] = {
    6.1886+waferYPos,
    5.626+waferYPos,
    5.626+waferYPos,
    6.1886+waferYPos};
  graph = new TGraph(4,Graph_fx96,Graph_fy96);
  graph->SetName(Form("Sensor_96_%d",iwafer));
  graph->SetTitle("Sensor_96");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx97[6] = {
    -3.57299+waferXPos,
    -3.248172+waferXPos,
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -2.598538+waferXPos,
    -3.248172+waferXPos};
  Double_t Graph_fy97[6] = {
    5.0634+waferYPos,
    4.5008+waferYPos,
    4.5008+waferYPos,
    5.0634+waferYPos,
    5.626+waferYPos,
    5.626+waferYPos};
  graph = new TGraph(6,Graph_fx97,Graph_fy97);
  graph->SetName(Form("Sensor_97_%d",iwafer));
  graph->SetTitle("Sensor_97");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx98[6] = {
    -3.57299+waferXPos,
    -3.248172+waferXPos,
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -2.598538+waferXPos,
    -3.248172+waferXPos};
  Double_t Graph_fy98[6] = {
    3.9382+waferYPos,
    3.3756+waferYPos,
    3.3756+waferYPos,
    3.9382+waferYPos,
    4.5008+waferYPos,
    4.5008+waferYPos};
  graph = new TGraph(6,Graph_fx98,Graph_fy98);
  graph->SetName(Form("Sensor_98_%d",iwafer));
  graph->SetTitle("Sensor_98");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx99[6] = {
    -3.57299+waferXPos,
    -3.248172+waferXPos,
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -2.598538+waferXPos,
    -3.248172+waferXPos};
  Double_t Graph_fy99[6] = {
    2.813+waferYPos,
    2.2504+waferYPos,
    2.2504+waferYPos,
    2.813+waferYPos,
    3.3756+waferYPos,
    3.3756+waferYPos};
  graph = new TGraph(6,Graph_fx99,Graph_fy99);
  graph->SetName(Form("Sensor_99_%d",iwafer));
  graph->SetTitle("Sensor_99");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx100[6] = {
    -3.57299+waferXPos,
    -3.248172+waferXPos,
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -2.598538+waferXPos,
    -3.248172+waferXPos};
  Double_t Graph_fy100[6] = {
    1.6878+waferYPos,
    1.1252+waferYPos,
    1.1252+waferYPos,
    1.6878+waferYPos,
    2.2504+waferYPos,
    2.2504+waferYPos};
  graph = new TGraph(6,Graph_fx100,Graph_fy100);
  graph->SetName(Form("Sensor_100_%d",iwafer));
  graph->SetTitle("Sensor_100");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx101[6] = {
    -3.57299+waferXPos,
    -3.248173+waferXPos,
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -2.598538+waferXPos,
    -3.248172+waferXPos};
  Double_t Graph_fy101[6] = {
    0.5626+waferYPos,
    -5.830134e-09+waferYPos,
    -4.664107e-09+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos,
    1.1252+waferYPos};
  graph = new TGraph(6,Graph_fx101,Graph_fy101);
  graph->SetName(Form("Sensor_101_%d",iwafer));
  graph->SetTitle("Sensor_101");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);
  Double_t Graph_fx102[6] = {
    -3.57299+waferXPos,
    -3.248173+waferXPos,
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -2.598538+waferXPos,
    -3.248173+waferXPos};
  Double_t Graph_fy102[6] = {
    -0.5626+waferYPos,
    -1.1252+waferYPos,
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    -4.664107e-09+waferYPos,
    -5.830134e-09+waferYPos};
  graph = new TGraph(6,Graph_fx102,Graph_fy102);
  graph->SetName(Form("Sensor_102_%d",iwafer));
  graph->SetTitle("Sensor_102");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx103[6] = {
    -3.57299+waferXPos,
    -3.248173+waferXPos,
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -2.598538+waferXPos,
    -3.248173+waferXPos};
  Double_t Graph_fy103[6] = {
    -1.6878+waferYPos,
    -2.2504+waferYPos,
    -2.2504+waferYPos,
    -1.6878+waferYPos,
    -1.1252+waferYPos,
    -1.1252+waferYPos};
  graph = new TGraph(6,Graph_fx103,Graph_fy103);
  graph->SetName(Form("Sensor_103_%d",iwafer));
  graph->SetTitle("Sensor_103");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx104[6] = {
    -3.57299+waferXPos,
    -3.248173+waferXPos,
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -2.598538+waferXPos,
    -3.248173+waferXPos};
  Double_t Graph_fy104[6] = {
    -2.813+waferYPos,
    -3.3756+waferYPos,
    -3.3756+waferYPos,
    -2.813+waferYPos,
    -2.2504+waferYPos,
    -2.2504+waferYPos};
  graph = new TGraph(6,Graph_fx104,Graph_fy104);
  graph->SetName(Form("Sensor_104_%d",iwafer));
  graph->SetTitle("Sensor_104");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx105[6] = {
    -3.57299+waferXPos,
    -3.248173+waferXPos,
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -2.598538+waferXPos,
    -3.248173+waferXPos};
  Double_t Graph_fy105[6] = {
    -3.9382+waferYPos,
    -4.5008+waferYPos,
    -4.5008+waferYPos,
    -3.9382+waferYPos,
    -3.3756+waferYPos,
    -3.3756+waferYPos};
  graph = new TGraph(6,Graph_fx105,Graph_fy105);
  graph->SetName(Form("Sensor_105_%d",iwafer));
  graph->SetTitle("Sensor_105");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx106[6] = {
    -3.57299+waferXPos,
    -3.248173+waferXPos,
    -2.598538+waferXPos,
    -2.273721+waferXPos,
    -2.598538+waferXPos,
    -3.248173+waferXPos};
  Double_t Graph_fy106[6] = {
    -5.0634+waferYPos,
    -5.626+waferYPos,
    -5.626+waferYPos,
    -5.0634+waferYPos,
    -4.5008+waferYPos,
    -4.5008+waferYPos};
  graph = new TGraph(6,Graph_fx106,Graph_fy106);
  graph->SetName(Form("Sensor_106_%d",iwafer));
  graph->SetTitle("Sensor_106");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx107[4] = {
    -3.57299+waferXPos,
    -2.273721+waferXPos,
    -2.598538+waferXPos,
    -3.248173+waferXPos};
  Double_t Graph_fy107[4] = {
    -6.1886+waferYPos,
    -6.1886+waferYPos,
    -5.626+waferYPos,
    -5.626+waferYPos};
  graph = new TGraph(4,Graph_fx107,Graph_fy107);
  graph->SetName(Form("Sensor_107_%d",iwafer));
  graph->SetTitle("Sensor_107");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx108[4] = {
    -4.222624+waferXPos,
    -3.57299+waferXPos,
    -3.248172+waferXPos,
    -3.57299+waferXPos};
  Double_t Graph_fy108[4] = {
    5.0634+waferYPos,
    5.0634+waferYPos,
    5.626+waferYPos,
    6.1886+waferYPos};
  graph = new TGraph(4,Graph_fx108,Graph_fy108);
  graph->SetName(Form("Sensor_108_%d",iwafer));
  graph->SetTitle("Sensor_108");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx109[6] = {
    -4.547441+waferXPos,
    -4.222624+waferXPos,
    -3.57299+waferXPos,
    -3.248172+waferXPos,
    -3.57299+waferXPos,
    -4.222624+waferXPos};
  Double_t Graph_fy109[6] = {
    4.5008+waferYPos,
    3.9382+waferYPos,
    3.9382+waferYPos,
    4.5008+waferYPos,
    5.0634+waferYPos,
    5.0634+waferYPos};
  graph = new TGraph(6,Graph_fx109,Graph_fy109);
  graph->SetName(Form("Sensor_109_%d",iwafer));
  graph->SetTitle("Sensor_109");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx110[6] = {
    -4.547441+waferXPos,
    -4.222624+waferXPos,
    -3.57299+waferXPos,
    -3.248172+waferXPos,
    -3.57299+waferXPos,
    -4.222624+waferXPos};
  Double_t Graph_fy110[6] = {
    3.3756+waferYPos,
    2.813+waferYPos,
    2.813+waferYPos,
    3.3756+waferYPos,
    3.9382+waferYPos,
    3.9382+waferYPos};
  graph = new TGraph(6,Graph_fx110,Graph_fy110);
  graph->SetName(Form("Sensor_110_%d",iwafer));
  graph->SetTitle("Sensor_110");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx111[6] = {
    -4.547441+waferXPos,
    -4.222624+waferXPos,
    -3.57299+waferXPos,
    -3.248172+waferXPos,
    -3.57299+waferXPos,
    -4.222624+waferXPos};
  Double_t Graph_fy111[6] = {
    2.2504+waferYPos,
    1.6878+waferYPos,
    1.6878+waferYPos,
    2.2504+waferYPos,
    2.813+waferYPos,
    2.813+waferYPos};
  graph = new TGraph(6,Graph_fx111,Graph_fy111);
  graph->SetName(Form("Sensor_111_%d",iwafer));
  graph->SetTitle("Sensor_111");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);
  Double_t Graph_fx112[6] = {
    -4.547441+waferXPos,
    -4.222624+waferXPos,
    -3.57299+waferXPos,
    -3.248172+waferXPos,
    -3.57299+waferXPos,
    -4.222624+waferXPos};
  Double_t Graph_fy112[6] = {
    1.1252+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos,
    1.6878+waferYPos,
    1.6878+waferYPos};
  graph = new TGraph(6,Graph_fx112,Graph_fy112);
  graph->SetName(Form("Sensor_112_%d",iwafer));
  graph->SetTitle("Sensor_112");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx113[6] = {
    -4.547442+waferXPos,
    -4.222624+waferXPos,
    -3.57299+waferXPos,
    -3.248173+waferXPos,
    -3.57299+waferXPos,
    -4.222624+waferXPos};
  Double_t Graph_fy113[6] = {
    -8.162187e-09+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos,
    -5.830134e-09+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx113,Graph_fy113);
  graph->SetName(Form("Sensor_113_%d",iwafer));
  graph->SetTitle("Sensor_113");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx114[6] = {
    -4.547442+waferXPos,
    -4.222624+waferXPos,
    -3.57299+waferXPos,
    -3.248173+waferXPos,
    -3.57299+waferXPos,
    -4.222624+waferXPos};
  Double_t Graph_fy114[6] = {
    -1.1252+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos,
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx114,Graph_fy114);
  graph->SetName(Form("Sensor_114_%d",iwafer));
  graph->SetTitle("Sensor_114");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx115[6] = {
    -4.547442+waferXPos,
    -4.222624+waferXPos,
    -3.57299+waferXPos,
    -3.248173+waferXPos,
    -3.57299+waferXPos,
    -4.222624+waferXPos};
  Double_t Graph_fy115[6] = {
    -2.2504+waferYPos,
    -2.813+waferYPos,
    -2.813+waferYPos,
    -2.2504+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos};
  graph = new TGraph(6,Graph_fx115,Graph_fy115);
  graph->SetName(Form("Sensor_115_%d",iwafer));
  graph->SetTitle("Sensor_115");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx116[6] = {
    -4.547442+waferXPos,
    -4.222624+waferXPos,
    -3.57299+waferXPos,
    -3.248173+waferXPos,
    -3.57299+waferXPos,
    -4.222624+waferXPos};
  Double_t Graph_fy116[6] = {
    -3.3756+waferYPos,
    -3.9382+waferYPos,
    -3.9382+waferYPos,
    -3.3756+waferYPos,
    -2.813+waferYPos,
    -2.813+waferYPos};
  graph = new TGraph(6,Graph_fx116,Graph_fy116);
  graph->SetName(Form("Sensor_116_%d",iwafer));
  graph->SetTitle("Sensor_116");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx117[6] = {
    -4.547442+waferXPos,
    -4.222624+waferXPos,
    -3.57299+waferXPos,
    -3.248173+waferXPos,
    -3.57299+waferXPos,
    -4.222624+waferXPos};
  Double_t Graph_fy117[6] = {
    -4.5008+waferYPos,
    -5.0634+waferYPos,
    -5.0634+waferYPos,
    -4.5008+waferYPos,
    -3.9382+waferYPos,
    -3.9382+waferYPos};
  graph = new TGraph(6,Graph_fx117,Graph_fy117);
  graph->SetName(Form("Sensor_117_%d",iwafer));
  graph->SetTitle("Sensor_117");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx118[4] = {
    -3.57299+waferXPos,
    -3.248173+waferXPos,
    -3.57299+waferXPos,
    -4.222624+waferXPos};
  Double_t Graph_fy118[4] = {
    -6.1886+waferYPos,
    -5.626+waferYPos,
    -5.0634+waferYPos,
    -5.0634+waferYPos};
  graph = new TGraph(4,Graph_fx118,Graph_fy118);
  graph->SetName(Form("Sensor_118_%d",iwafer));
  graph->SetTitle("Sensor_118");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx119[4] = {
    -5.197076+waferXPos,
    -4.547441+waferXPos,
    -4.222624+waferXPos,
    -4.547441+waferXPos};
  Double_t Graph_fy119[4] = {
    3.3756+waferYPos,
    3.3756+waferYPos,
    3.9382+waferYPos,
    4.5008+waferYPos};
  graph = new TGraph(4,Graph_fx119,Graph_fy119);
  graph->SetName(Form("Sensor_119_%d",iwafer));
  graph->SetTitle("Sensor_119");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx120[6] = {
    -5.521893+waferXPos,
    -5.197076+waferXPos,
    -4.547441+waferXPos,
    -4.222624+waferXPos,
    -4.547441+waferXPos,
    -5.197076+waferXPos};
  Double_t Graph_fy120[6] = {
    2.813+waferYPos,
    2.2504+waferYPos,
    2.2504+waferYPos,
    2.813+waferYPos,
    3.3756+waferYPos,
    3.3756+waferYPos};
  graph = new TGraph(6,Graph_fx120,Graph_fy120);
  graph->SetName(Form("Sensor_120_%d",iwafer));
  graph->SetTitle("Sensor_120");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx121[6] = {
    -5.521893+waferXPos,
    -5.197076+waferXPos,
    -4.547441+waferXPos,
    -4.222624+waferXPos,
    -4.547441+waferXPos,
    -5.197076+waferXPos};
  Double_t Graph_fy121[6] = {
    1.6878+waferYPos,
    1.1252+waferYPos,
    1.1252+waferYPos,
    1.6878+waferYPos,
    2.2504+waferYPos,
    2.2504+waferYPos};
  graph = new TGraph(6,Graph_fx121,Graph_fy121);
  graph->SetName(Form("Sensor_121_%d",iwafer));
  graph->SetTitle("Sensor_121");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx122[6] = {
    -5.521893+waferXPos,
    -5.197076+waferXPos,
    -4.547442+waferXPos,
    -4.222624+waferXPos,
    -4.547441+waferXPos,
    -5.197076+waferXPos};
  Double_t Graph_fy122[6] = {
    0.5626+waferYPos,
    -9.328214e-09+waferYPos,
    -8.162187e-09+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos,
    1.1252+waferYPos};
  graph = new TGraph(6,Graph_fx122,Graph_fy122);
  graph->SetName(Form("Sensor_122_%d",iwafer));
  graph->SetTitle("Sensor_122");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);
  Double_t Graph_fx123[6] = {
    -5.521893+waferXPos,
    -5.197076+waferXPos,
    -4.547442+waferXPos,
    -4.222624+waferXPos,
    -4.547442+waferXPos,
    -5.197076+waferXPos};
  Double_t Graph_fy123[6] = {
    -0.5626+waferYPos,
    -1.1252+waferYPos,
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    -8.162187e-09+waferYPos,
    -9.328214e-09+waferYPos};
  graph = new TGraph(6,Graph_fx123,Graph_fy123);
  graph->SetName(Form("Sensor_123_%d",iwafer));
  graph->SetTitle("Sensor_123");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx124[6] = {
    -5.521893+waferXPos,
    -5.197076+waferXPos,
    -4.547442+waferXPos,
    -4.222624+waferXPos,
    -4.547442+waferXPos,
    -5.197076+waferXPos};
  Double_t Graph_fy124[6] = {
    -1.6878+waferYPos,
    -2.2504+waferYPos,
    -2.2504+waferYPos,
    -1.6878+waferYPos,
    -1.1252+waferYPos,
    -1.1252+waferYPos};
  graph = new TGraph(6,Graph_fx124,Graph_fy124);
  graph->SetName(Form("Sensor_124_%d",iwafer));
  graph->SetTitle("Sensor_124");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx125[6] = {
    -5.521893+waferXPos,
    -5.197076+waferXPos,
    -4.547442+waferXPos,
    -4.222624+waferXPos,
    -4.547442+waferXPos,
    -5.197076+waferXPos};
  Double_t Graph_fy125[6] = {
    -2.813+waferYPos,
    -3.3756+waferYPos,
    -3.3756+waferYPos,
    -2.813+waferYPos,
    -2.2504+waferYPos,
    -2.2504+waferYPos};
  graph = new TGraph(6,Graph_fx125,Graph_fy125);
  graph->SetName(Form("Sensor_125_%d",iwafer));
  graph->SetTitle("Sensor_125");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx126[4] = {
    -4.547442+waferXPos,
    -4.222624+waferXPos,
    -4.547442+waferXPos,
    -5.197076+waferXPos};
  Double_t Graph_fy126[4] = {
    -4.5008+waferYPos,
    -3.9382+waferYPos,
    -3.3756+waferYPos,
    -3.3756+waferYPos};
  graph = new TGraph(4,Graph_fx126,Graph_fy126);
  graph->SetName(Form("Sensor_126_%d",iwafer));
  graph->SetTitle("Sensor_126");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx127[4] = {
    -6.171528+waferXPos,
    -5.521893+waferXPos,
    -5.197076+waferXPos,
    -5.521893+waferXPos};
  Double_t Graph_fy127[4] = {
    1.6878+waferYPos,
    1.6878+waferYPos,
    2.2504+waferYPos,
    2.813+waferYPos};
  graph = new TGraph(4,Graph_fx127,Graph_fy127);
  graph->SetName(Form("Sensor_127_%d",iwafer));
  graph->SetTitle("Sensor_127");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx128[6] = {
    -6.496345+waferXPos,
    -6.171528+waferXPos,
    -5.521893+waferXPos,
    -5.197076+waferXPos,
    -5.521893+waferXPos,
    -6.171528+waferXPos};
  Double_t Graph_fy128[6] = {
    1.1252+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos,
    1.6878+waferYPos,
    1.6878+waferYPos};
  graph = new TGraph(6,Graph_fx128,Graph_fy128);
  graph->SetName(Form("Sensor_128_%d",iwafer));
  graph->SetTitle("Sensor_128");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx129[6] = {
    -6.496345+waferXPos,
    -6.171528+waferXPos,
    -5.521893+waferXPos,
    -5.197076+waferXPos,
    -5.521893+waferXPos,
    -6.171528+waferXPos};
  Double_t Graph_fy129[6] = {
    -1.166027e-08+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos,
    -9.328214e-09+waferYPos,
    0.5626+waferYPos,
    0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx129,Graph_fy129);
  graph->SetName(Form("Sensor_129_%d",iwafer));
  graph->SetTitle("Sensor_129");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx130[6] = {
    -6.496345+waferXPos,
    -6.171528+waferXPos,
    -5.521893+waferXPos,
    -5.197076+waferXPos,
    -5.521893+waferXPos,
    -6.171528+waferXPos};
  Double_t Graph_fy130[6] = {
    -1.1252+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos,
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    -0.5626+waferYPos};
  graph = new TGraph(6,Graph_fx130,Graph_fy130);
  graph->SetName(Form("Sensor_130_%d",iwafer));
  graph->SetTitle("Sensor_130");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);
  Double_t Graph_fx131[4] = {
    -5.521893+waferXPos,
    -5.197076+waferXPos,
    -5.521893+waferXPos,
    -6.171528+waferXPos};
  Double_t Graph_fy131[4] = {
    -2.813+waferYPos,
    -2.2504+waferYPos,
    -1.6878+waferYPos,
    -1.6878+waferYPos};
  graph = new TGraph(4,Graph_fx131,Graph_fy131);
  graph->SetName(Form("Sensor_131_%d",iwafer));
  graph->SetTitle("Sensor_131");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx132[4] = {
    -7.14598+waferXPos,
    -6.496345+waferXPos,
    -6.171528+waferXPos,
    -6.496345+waferXPos};
  Double_t Graph_fy132[4] = {
    -1.282629e-08+waferYPos,
    -1.166027e-08+waferYPos,
    0.5626+waferYPos,
    1.1252+waferYPos};
  graph = new TGraph(4,Graph_fx132,Graph_fy132);
  graph->SetName(Form("Sensor_132_%d",iwafer));
  graph->SetTitle("Sensor_132");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);

  Double_t Graph_fx133[4] = {
    -6.496345+waferXPos,
    -6.171528+waferXPos,
    -6.496345+waferXPos,
    -7.14598+waferXPos};
  Double_t Graph_fy133[4] = {
    -1.1252+waferYPos,
    -0.5626+waferYPos,
    -1.166027e-08+waferYPos,
    -1.282629e-08+waferYPos};
  graph = new TGraph(4,Graph_fx133,Graph_fy133);
  graph->SetName(Form("Sensor_133_%d",iwafer));
  graph->SetTitle("Sensor_133");
  graph->SetFillColor(1);
  hitmapoly->AddBin(graph);
  }//createTH2PolyFH


}
