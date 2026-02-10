/*
Define a class Complex to represent a complex number.
 Declare instance member variables to store real and imaginary
  part of a complex number, also define instance member functions 
  to set values of complex number and print 
  values of complex number
  */
#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;//imaginary part
public:
    void set(int a,int b);
    void get();
};

void Complex::set(int m,int n){
    a=m;
    b=n;


}

void Complex::get()
{
cout << a<< endl;
cout << b<< endl;


}


int main()
{ 
Complex c;
c.set(2,5);
c.get();

return 0;


}