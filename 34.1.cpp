#include <iostream>
using namespace std;
class cuboid {
    private:
   int l,b,h;
 public:
 cuboid(){
   l=0,b=0,h=7;
     
 }
void show(){
    cout << l<<b<<h << std::endl;
}

};
int main() {
cuboid c;
  c.show();
  return 0;
}


/*
1. Define a class Cuboid with length, breadth and height as instance member variables. Define constructors to initialise member variables.
*/