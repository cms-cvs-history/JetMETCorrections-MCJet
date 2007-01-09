#!/bin/tcsh
#
# Utility script to make the Analysis scripts for eta bins 2 - 16 from the
# script for eta bin 1.  Was used to create other an*.C files from an01.C file.
#
# Usage: source makeEtaNumbers.csh
#
set etalow = 15
set etahigh = 16
foreach name ("02" "03" "04" "05" "06" "07" "08" "09" "10" "11" "12" "13" "14" "15" "16")
  if ($name == "02" ) then
    set range = "0.226 < | #eta | < 0.441"
    set max = "0.441"
  else if ($name == "03" ) then
    set range = "0.441 < | #eta | < 0.751"
    set max = "0.751"
  else if ($name == "04" ) then
    set range = "0.751 < | #eta | < 0.991"
    set max = "0.991"
  else if ($name == "05" ) then
    set range = "0.991 < | #eta | < 1.260"
    set max = "1.260"
  else if ($name == "06" ) then
    set range = "1.260 < | #eta | < 1.496"
    set max = "1.496"
  else if ($name == "07" ) then
    set range = "1.496 < | #eta | < 1.757"
    set max = "1.757"
  else if ($name == "08" ) then
    set range = "1.757 < | #eta | < 2.046"
    set max = "2.046"
  else if ($name == "09" ) then
    set range = "2.046 < | #eta | < 2.295"
    set max = "2.295"
  else if ($name == "10" ) then
    set range = "2.295 < | #eta | < 2.487"
    set max = "2.487"
  else if ($name == "11" ) then
    set range = "2.487 < | #eta | < 2.690"
    set max = "2.690"
  else if ($name == "12" ) then
    set range = "2.690 < | #eta | < 2.916"
    set max = "2.916"
  else if ($name == "13" ) then
    set range = "2.916 < | #eta | < 3.284"
    set max = "3.284"
  else if ($name == "14" ) then
    set range = "3.284 < | #eta | < 4.000"
    set max = "4.000"
  else if ($name == "15" ) then
    set range = "4.000 < | #eta | < 4.400"
    set max = "4.400"
  else if ($name == "16" ) then
    set range = "4.400 < | #eta | < 4.800"
    set max = "4.800"
  endif
  @ etalow = $etalow - 1
  @ etahigh = $etahigh + 1
  cat > sedscript <<+EOF
    s/Eta15/Eta$etalow/
    s/Eta16/Eta$etahigh/
    s/01.dat/$name.dat/
    s/01.txt/$name.txt/
    s/01.gif/$name.gif/
    s/01.eps/$name.eps/
    s/0 < | #eta | < 0.226/$range/
    s/etamax = 0.226/etamax = $max/
+EOF
  sed -f sedscript an01.C > an$name.C
  rm sedscript
end  
