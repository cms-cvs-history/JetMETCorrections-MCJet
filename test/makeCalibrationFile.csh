#!/bin/tcsh
#
# Makes MCJet calibration file calibration.txt
# Pre-requisites:  the files h*.txt need to be created first by root.exe an*.C.
# This simply concatenates the h*.txt files and inserts "1 1.0" in each line
#
cat h01.txt h02.txt h03.txt h04.txt h05.txt h06.txt h07.txt h08.txt h09.txt h10.txt h11.txt h12.txt h13.txt h14.txt h15.txt h16.txt > temp.txt
awk '{print "", $1, "1 1.0", $2, $3, $4, $5, $6, $7, $8, $9, $10}' temp.txt > calibration.txt
rm temp.txt 
