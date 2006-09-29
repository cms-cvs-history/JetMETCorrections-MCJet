// -*- C++ -*-
//
// Package:    MCJet
// Class:      MCJet
// 
/**\class MCJet MCJet.cc JetMETCorrections/MCJet/src/MCJet.cc

 Description: <one line class summary>

 Implementation:
     <Notes on implementation>
*/
//
// Original Author:  Olga Kodolova
//         Created:  Wed Feb  1 17:04:23 CET 2006
// $Id: MCJetProducer.cc,v 1.4 2006/06/28 16:54:14 kodolova Exp $
//
//


// system include files
#include <memory>
#include <iostream>
#include <iomanip>
#include <string>
// user include files
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/Handle.h"
#include "FWCore/Framework/interface/EventSetup.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "DataFormats/JetReco/interface/CaloJetCollection.h"
#include "JetMETCorrections/MCJet/interface/MCJetProducer.h"
#include "JetMETCorrections/MCJet/interface/JetCalibratorMCJet.h"
using namespace std;
using namespace reco;
namespace cms 
{

//
// constructors and destructor
//
MCJet::MCJet(const edm::ParameterSet& iConfig): 
                                           mAlgorithm(),
					   mInput(iConfig.getParameter<edm::InputTag>("src")),
					   mTag(iConfig.getParameter<string>("tagName"))

{

   //now do what ever other initialization is needed
    produces<CaloJetCollection>();
    mAlgorithm.setParameters(mTag);
}


//
// member functions
//

// ------------ method called to produce the data  ------------
void
MCJet::produce(edm::Event& iEvent, const edm::EventSetup& iSetup)
{
   edm::Handle<CaloJetCollection> jets;                               //Define Inputs
   iEvent.getByLabel(mInput, jets);                              //Get Inputs
   auto_ptr<CaloJetCollection> result (new CaloJetCollection);  //Corrected jets
   CaloJetCollection::const_iterator jet = jets->begin ();
      cout<<" Size of jets "<<jets->size()<<endl;
   if(jets->size() > 0 )
   { 
   for (; jet != jets->end (); jet++) {
      result->push_back (mAlgorithm.applyCorrection (*jet));
      cout<<" Size of the result "<<result->size()<<endl;
   }
   }
      cout<<" Put result "<<result->size()<<endl;
   iEvent.put(result);  //Puts Corrected Jet Collection into event
   
}

}//end namespace cms
