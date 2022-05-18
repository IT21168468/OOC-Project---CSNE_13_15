// IT21168468

#include "Person.h"
#include "Pet.h"
#include "Payment.h"
#include "Item.h"
#include "DayCare.h"
#include "Appointment.h"
#include <cstring>

using namespace std;

class Owner : public Person {
  protected:
    string OwnerId;
    Pet *pet[size];
    Payment *pay[size];
    Item *itm[size];
    Appointment *app[size];
    DayCare *dcr[size];
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
