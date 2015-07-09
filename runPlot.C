{
  gROOT->ProcessLine(".L phi_vs_dz_PXB_1.cxx+");
  gROOT->ProcessLine(".L phi_vs_dz_PXF_1.cxx+");
  phi_vs_dz_PXB_1();
  phi_vs_dz_PXF_1();
  gROOT->ProcessLine(".L r_vs_dz_PXB_1.cxx+");
  gROOT->ProcessLine(".L r_vs_dz_PXF_1.cxx+");
  r_vs_dz_PXB_1();
  r_vs_dz_PXF_1();
  gROOT->ProcessLine(".L z_vs_dz_PXB_1.cxx+");
  gROOT->ProcessLine(".L z_vs_dz_PXF_1.cxx+");
  z_vs_dz_PXB_1();
  z_vs_dz_PXF_1();
}
