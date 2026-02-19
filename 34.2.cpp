#include <iostream>
using namespace std;
class customer {
    private:
   int cust_id;
   char name ;
   int email ;
 public:
 customer(){
     cust_id=0;
    name='a';
    email=5;
 }
 customer(int x,char y,int z){
      cust_id=x;
      name=y;
     email=z;
 }
void show(){
    cout <<cust_id<<name<<email << std::endl;
}

};
int main() {
customer c1( 1, 'a',9),c;
  c.show();
  return 0;
}


/*

2. Define a class Customer with instance members cust_id, name, email, mobile. Define non parameterised constructor and parameterised constructor in the class.
*/
