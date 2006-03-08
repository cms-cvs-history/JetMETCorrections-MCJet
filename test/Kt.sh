#!/bin/sh

rm -f KtJets.root

cp CaloTowers.xml PoolFileCatalog.xml

cmsRun --parameter-set make_CorrectedJets_HB_HO.cfg
