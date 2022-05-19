//It21254048

#include "Person.h"
#include "Order.h"
#include <cstring>
#define SIZE 1

using namespace std;

class Payment : public Person {
    protected:
  int PaymentNo;
  char PaymentMethod;
  Order *odr[SIZE];

public:
       Payment();
       Payment(int PaymentNo, char PaymentMethod, int 
       odr1);
       void Display();
       void DisplayOrder();
       double CalcTotalPrice();
       void DisplayPayment();
       ~Payment();
};


