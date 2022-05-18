// IT21168468

#include "Person.h"
#include "Pet.h"
#include "Payment.h"
#include "Item.h"
#include "DayCare.h"
#include "Appointment.h"
#include <cstring>
#define SIZE 1

using namespace std;

class Owner : public Person {
  protected:
    string OwnerId;
    Pet *pet[SIZE];
    Payment *pay[SIZE];
    Item *itm[SIZE];
    Appointment *app[SIZE];
    DayCare *dcr[SIZE];
  public:
  	Owner();
  	Owner(int pet1, int pay1, string ownerid, string name, string email, string contactno);
	void Display();
	void DisplayPet();
	void DisplayPayment();
	void DisplayOwner();
	void AddItem();
	void AddAppointment();
    ~Owner();
};
