// IT21168468

#include "Person.h"
#include "Doctor.h"
#include "Appointment.h"
#include "DayCare.h"
#include "Item.h"
#include <cstring>

using namespace std;

class Staff : public Person {
  protected:
    string StaffId;
    Item *itm[size];
    DayCare *dcr[size];
    Doctor *doc[size];
  public:
    Staff();
    Staff(string staffid, string name, string email, string contactno);
    void Display();
    void AddItem();
    void AddDayCare();
    void AddAppointment();
    void AddDoctor();
    void DisplayStaff();
    ~Staff();
};
