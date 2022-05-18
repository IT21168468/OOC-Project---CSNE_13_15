// IT21168468

#include "Person.h"
#include "Doctor.h"
#include "Appointment.h"
#include "DayCare.h"
#include "Item.h"
#include <cstring>
#define SIZE 1

using namespace std;

class Staff : public Person {
  protected:
    string StaffId;
    Item *itm[SIZE];
    DayCare *dcr[SIZE];
    Doctor *doc[SIZE];
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
