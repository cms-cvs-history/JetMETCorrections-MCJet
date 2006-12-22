#!/bin/tcsh
#
# Run the response distribution checking scripts for MC5 algorithm
#
# Usage: user types "source runChecksMC5.csh" and enters .q at the
#        root prompt between displayed histograms after visual inpsection.
#
# Output is the response in .ps, .eps and .gif files in subdirectory plots/MC5.
#
root.exe MC5eta0-226Resp.C
root.exe MC5eta226-441Resp.C
root.exe MC5eta441-751Resp.C
root.exe MC5eta751-991Resp.C
root.exe MC5eta991-1260Resp.C
root.exe MC5eta1260-1496Resp.C
root.exe MC5eta1496-1757Resp.C
root.exe MC5eta1757-2046Resp.C
root.exe MC5eta2046-2295Resp.C
root.exe MC5eta2295-2487Resp.C
root.exe MC5eta2487-2690Resp.C
root.exe MC5eta2690-2916Resp.C
root.exe MC5eta2916-3284Resp.C
root.exe MC5eta3284-4000Resp.C
root.exe MC5eta4000-4400Resp.C
root.exe MC5eta4400-4800Resp.C
mkdir -p plots/MC5
mv MC5*.gif plots/MC5
mv MC5*.eps plots/MC5
mv MC5*.ps  plots/MC5
