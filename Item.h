//IT21254048

#include "Person.h"
#include "Owner.h"
#include <cstring>
#define SIZE 1

using namespace std;

class Item {
  protected:
   int ItemNo;
   char Category;
   int Quantity;
   double Price;
   Owner *own[SIZE];

public:
       Item();
       Item(int ItemNo, char Category, int Quantity, 
       double Price, Owner *pown, int itm1);
       void DisplayOwner();
       void Display();
       double CalcPrice();
       void DisplayItem();
       ~Item();
};
