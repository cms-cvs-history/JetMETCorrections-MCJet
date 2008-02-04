#include <TFile.h>
#include <TH1F.h>

const char PATH[1024] = "";  
//********* CLOSURE vs PT **********************

const int NPtBins=19;//closure vs pt
const int NETA = 6;//closure vs pt
const double Pt[NPtBins+1] ={10,20,30,40,50,75,100,150,200,300,400,500,750,1000,1500,2000,2500,3000,3500,4000};//closure vs pt
const double eta_boundaries[NETA+1]={-5., -3., -1.3, 0, 1.3, 3., 5.};//closure vs pt
const char InputFilename[1024]   = "L2L3Closure_vs_pt_iterativeCone5.root";
const char OutputFilename[1024]  = "L2L3ClosureResults_vs_pt_iterativeCone5.root";

//********* CLOSURE vs ETA *********************
/*
const int NPtBins=12;//closure vs eta
const int NETA = 24;//closure vs eta
const double Pt[NPtBins] ={20,30,50,75,100,150,300,500,750,1000,1500,2000};//closure vs eta
const double eta_boundaries[NETA+1]={-5., -4.5, -4., -3.5, -3., -2.6, -2.2, -1.8, -1.3, -1., -0.7, -0.4,  0., 0.4, 0.7, 1., 1.3, 1.8, 2.2, 2.6, 3., 3.5, 4., 4.5, 5.};//closure vs eta                
const char InputFilename[1024]   = "L2L3Closure_vs_eta_iterativeCone5.root";
const char OutputFilename[1024]  = "L2L3ClosureResults_vs_eta_iterativeCone5.root";
*/
