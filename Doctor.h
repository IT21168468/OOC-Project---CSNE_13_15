// IT21168468

#include "Person.h"
#include "Appointment.h"
#include <cstring>
#define SIZE 1

using namespace std;

class Doctor : public Person {
  protected:
    string DoctorId;
    Appointment *app[SIZE];
  public:
    Doctor();
    Doctor(string doctorid, string name, string email, string contactno, int app1);
    void Display();
    void DisplayDoctor();
    void DisplayAppointment();
    ~Doctor();
};
