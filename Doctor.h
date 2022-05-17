// IT21168468

#include "Person.h"
#include "Appointment.h"
#include <cstring>

using namespace std;

class Doctor : public Person {
  protected:
    string DoctorId;
    Appointment *app[size];
  public:
    Doctor();
    Doctor(string doctorid, string name, string email, string contactno, int app1);
    void Display();
    void DisplayDoctor();
    void DisplayAppointment();
    ~Doctor();
};
