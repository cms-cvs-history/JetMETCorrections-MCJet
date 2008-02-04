//****************************************************************
//               Dr. Konstantinos Kousouris                      *
//                 Fermilab, Batavia, IL                         *
//****************************************************************

const int NFiles = 21;//Number of pt_hat bins.
const double L = 1.;//Reference Luminosity in pb^-1.
const double Units = 1.e+9;//Conversion factor mb->pb.
double Weight(double X, int N);//Function that returns the file weight.
const char PATH[100] = "";//Path where the ROOT files are stored.
const char PREFIX[100] = "L2L3CorIcone5_vs_eta_";//Prefix of the files to be merged: PREFIX#.root where # is the file number.
const char FINAL_HISTO[100] = "L2L3Closure_vs_eta_iterativeCone5.root";//Name of the merged file.
const int NHisto_max = 5000;//Maximum number of histograms that can be contained in each file.
const bool ApplyWeights = true;//If true, w=Xsec/N, else w=1/N.
const int NEvents[NFiles] =   {50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000,
                               50000};//Events contained in each ROOT file.

const double Xsec[NFiles] = {55.220001220703125,
                             1.500059962272644,
                             0.64173299074173,
                             0.155928999185562,
                             0.020938849076629,
                             0.002949713263661,
                             0.000499656016473,
                             0.000100995275716,
                             0.000023855474865,
                             0.000006391080206,
                             0.000001889664986,
                             0.000000690272486,
                             0.000000202503998,
                             0.000000035735699,
                             0.000000010852600,
                             0.000000001056020,
                             0.000000000144824,
                             0.000000000023821,
                             0.000000000004285,
                             0.000000000000844,
                             1.075e-13};//Cross section for each pt_hat bin in mb.
