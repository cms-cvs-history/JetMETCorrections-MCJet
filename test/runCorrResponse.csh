#!/bin/tcsh
#
# Run the corrected response distribution analysis scripts
#
# Usage: user types "source runCorrResponse.csh" from the algorithm sub-directory of
#        the ana directory in MCJet/test, and enters .q at the
#        root prompt between displayed histograms after visual inpsection.
#
# Output is the corrected response fits and corrected response vs Et.
#
root.exe CorrResponse_01.C
root.exe CorrResponse_02.C
root.exe CorrResponse_03.C
root.exe CorrResponse_04.C
root.exe CorrResponse_05.C
root.exe CorrResponse_06.C
root.exe CorrResponse_07.C
root.exe CorrResponse_08.C
root.exe CorrResponse_09.C
root.exe CorrResponse_10.C
root.exe CorrResponse_11.C
root.exe CorrResponse_12.C
root.exe CorrResponse_13.C
root.exe CorrResponse_14.C
root.exe CorrResponse_15.C
root.exe CorrResponse_16.C
