
#include<iostream>
using namespace std;

class Scaler {
  public:
    //Constructor
    Scaler() {
      cout << "Constructor of class called"<< endl;
    }

    //Destructor
    ~Scaler() {
      cout << "Destructor of class called" << endl;
    }
};

int main() {
  //Allocate memory dynamically to array of objects of type Scaler 
  Scaler* s = new Scaler[3];

  // Delete array which was created dynamically
  delete []s;
  return 0;
}