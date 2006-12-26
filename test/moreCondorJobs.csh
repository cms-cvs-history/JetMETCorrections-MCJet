#!/bin/tcsh
#
# Make more condor jobs, for the rest of the algorithms, 
# from the one for midpoint R=0.5, and for the corrected
# algorithms.
#
#
# Midpoint Cone R=0.7
#
sed s/MidPointR5/MidPointR7/ CondorJob_MidPointR5 > CondorJob_MidPointR7
sed s/MidPointR5/MidPointR7/g SimJet_MidPointR5.csh > SimJet_MidPointR7.csh
chmod 755 SimJet_MidPointR7.csh

#
# Iterative Cone R=0.5
#
sed s/MidPointR5/IterativeR5/  CondorJob_MidPointR5 > CondorJob_IterativeR5
sed s/MidPointR5/IterativeR5/g SimJet_MidPointR5.csh > SimJet_IterativeR5.csh
chmod 755 SimJet_IterativeR5.csh

#
# Kt D=1.0
#
sed s/MidPointR5/Kt/  CondorJob_MidPointR5 > CondorJob_Kt
sed s/MidPointR5/Kt/g SimJet_MidPointR5.csh > SimJet_Kt.csh
chmod 755 SimJet_Kt.csh
#
# Corrected Algorithms
# 
#
# Midpoint Cone R=0.5
#
sed s/SimJet/CorJet/ CondorJob_MidPointR5 > CondorJob_MidPointR5_Cor
sed s/SimJet/CorJet/g SimJet_MidPointR5.csh > CorJet_MidPointR5.csh
chmod 755 CorJet_MidPointR5.csh
#
# Midpoint Cone R=0.7
#
sed s/SimJet/CorJet/ CondorJob_MidPointR7 > CondorJob_MidPointR7_Cor
sed s/SimJet/CorJet/g SimJet_MidPointR7.csh > CorJet_MidPointR7.csh
chmod 755 CorJet_MidPointR7.csh
#
# Iterative Cone R=0.5
#
sed s/SimJet/CorJet/ CondorJob_IterativeR5 > CondorJob_IterativeR5_Cor
sed s/SimJet/CorJet/g SimJet_IterativeR5.csh > CorJet_IterativeR5.csh
chmod 755 CorJet_IterativeR5.csh
#
# KT D-1.0
#
sed s/SimJet/CorJet/ CondorJob_Kt > CondorJob_Kt_Cor
sed s/SimJet/CorJet/g SimJet_Kt.csh > CorJet_Kt.csh
chmod 755 CorJet_Kt.csh

