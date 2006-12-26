#!/bin/tcsh
#
# Run the response distribution analysis scripts and make MCJet calibration
#
# Usage: user types "source runAna.csh" from the algorithm sub-directory of
#        the ana directory in MCJet/test, and enters .q at the
#        root prompt between displayed histograms after visual inpsection.
#
# Output is the analyzed response and the calibration.txt file.
#
root.exe an01.C
root.exe an02.C
root.exe an03.C
root.exe an04.C
root.exe an05.C
root.exe an06.C
root.exe an07.C
root.exe an08.C
root.exe an09.C
root.exe an10.C
root.exe an11.C
root.exe an12.C
root.exe an13.C
root.exe an14.C
root.exe an15.C
root.exe an16.C
source ../../makeCalibrationFile.csh 
