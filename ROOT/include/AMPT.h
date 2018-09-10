//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Aug 13 13:02:19 2018 by ROOT version 6.13/02
// from TTree AMPT/AMPT DST Tree
// found on file: ampt_after_art.root
//////////////////////////////////////////////////////////

#ifndef AMPT_h
#define AMPT_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class AMPT {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           Event_nevent;
   Int_t           Event_nrun;
   Int_t           Event_multi;
   Float_t         Event_impactpar;
   Int_t           Event_NpartP;
   Int_t           Event_NpartT;
   Int_t           Event_NELP;
   Int_t           Event_NINP;
   Int_t           Event_NELT;
   Int_t           Event_NINT;
   Int_t           ID[2642];   //[multi]
   Float_t         Px[2642];   //[multi]
   Float_t         Py[2642];   //[multi]
   Float_t         Pz[2642];   //[multi]
   Float_t         Mass[2642];   //[multi]
   Float_t         X[2642];   //[multi]
   Float_t         Y[2642];   //[multi]
   Float_t         Z[2642];   //[multi]
   Float_t         Time[2642];   //[multi]

   // List of branches
   TBranch        *b_Event;   //!
   TBranch        *b_ID;   //!
   TBranch        *b_Px;   //!
   TBranch        *b_Py;   //!
   TBranch        *b_Pz;   //!
   TBranch        *b_Mass;   //!
   TBranch        *b_X;   //!
   TBranch        *b_Y;   //!
   TBranch        *b_Z;   //!
   TBranch        *b_Time;   //!

   AMPT(TTree *tree=0);
   virtual ~AMPT();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef AMPT_cxx
AMPT::AMPT(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("ampt_after_art.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("ampt_after_art.root");
      }
      f->GetObject("AMPT",tree);

   }
   Init(tree);
}

AMPT::~AMPT()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t AMPT::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t AMPT::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void AMPT::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Event", &Event_nevent, &b_Event);
   fChain->SetBranchAddress("ID", ID, &b_ID);
   fChain->SetBranchAddress("Px", Px, &b_Px);
   fChain->SetBranchAddress("Py", Py, &b_Py);
   fChain->SetBranchAddress("Pz", Pz, &b_Pz);
   fChain->SetBranchAddress("Mass", Mass, &b_Mass);
   fChain->SetBranchAddress("X", X, &b_X);
   fChain->SetBranchAddress("Y", Y, &b_Y);
   fChain->SetBranchAddress("Z", Z, &b_Z);
   fChain->SetBranchAddress("Time", Time, &b_Time);
   Notify();
}

Bool_t AMPT::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void AMPT::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t AMPT::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef AMPT_cxx
