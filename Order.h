//IT21254048

#include "Person.h"
#include "Item.h"
#include <cstring>
#define SIZE 1

using namespace std;

class Order : public Person {
   protected:
      int OrderID;
      char ShippingMethod;
      Item *itm[SIZE];

public:
      Order();
      Order(int OrderID, char ShippingMethod, int itm1);
      void DisplayItem();
      void Display();
      double CalcOtherCharge();
      void displayOrder();
      ~Order();
};   