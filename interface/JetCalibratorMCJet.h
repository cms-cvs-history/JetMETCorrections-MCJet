#ifndef JetCalibratorMCJet_h
#define JetCalibratorMCJet_h

#include <map>
#include <string>
#include <vector>
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "DataFormats/JetReco/interface/CaloJetCollection.h"
#include "DataFormats/JetReco/interface/CaloJet.h"


class ParametrizationMCJet;
class CaloJet;

///
/// jet energy corrections from MCjet calibration
///

class JetCalibratorMCJet
{
public:  

  JetCalibratorMCJet() : parametrization(),
                         theCalibrationType() {};
  virtual ~JetCalibratorMCJet();
  reco::CaloJet applyCorrection (const reco::CaloJet& fJet);
  void setParameters(std::string );
   
private:
  
  std::map<double,ParametrizationMCJet *> parametrization;

  std::string theCalibrationType;
};

#endif
