#include "TText.h"

void SetTextAll(TText* t){
  t->SetTextFont(132);
  t->SetTextSize(0.04);
  t->SetNDC();
}//end of SetTextAll

void SetTextBlack(TText* t){
   t->SetText(0.54,0.87,"black: z>0");
   SetTextAll(t);
}//end of SetTextBlack

void SetTextRed(TText* t){
   t->SetText(0.40,0.87,"red: z<0,");
   t->SetTextColor(2);
   SetTextAll(t);
}//end of SetTextBlack

void SetTextAlignmentLineUp(TText* t){
  t->SetTitle("Alignment: cosmic rays + 0T collisions");
  t->SetTextSize(0.04);
  SetTextAll(t);
}//end of SetTextAlignmentUp

void SetTextAlignmentLineDown(TText* t){
  t->SetTitle("Run II vs. Run I geometry");
  t->SetTextSize(0.04);
  SetTextAll(t);
}//end of SetTextAlignmentUp
