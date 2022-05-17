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
    Staff(string staffid, string name, string email, string contactno, Item *pitm, DayCare *pdcr, Doctor *pdoc, Appointment *paap);
    void Display();
    void DisplayItem();
    void DisplayDayCare();
    void DisplayAppointment();
    void DisplayDoctor();
    void DisplayStaff();
    ~Staff();
};
