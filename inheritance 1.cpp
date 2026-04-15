#include<iostream>
using namespace std;
class person {

 private:
 int age;
 string name;
 
 protected:
 void setters(int x,string n )
     {
     
      age=x;
     name=n;
     
     
     }
     
     
   void getters(string &n ,int &x)
      {
       n=name;
       x=age;
      
      
      
      }   
     

};

class employee:public person{
  private :
  int salary ;
  public:
  void setEmployee(int x,int y, string n) {
  
    setters( x,n);
    salary=y;
  
  
  }
  
  void showEmployee() {
   string n;
   int x;
   getters(n,x);
    cout << " age="<<x<< endl;
  cout << "salary="<<salary<< endl;
 cout << " name="<<n<< endl;
 
  
  
  }
  




};















int main()
{
    cout << "Hello World!" << endl;
    employee s;
    s.setEmployee(45,500,"Anish kumar");
    s.showEmployee();
    return 0;
}

/*Define a class Person with name and age as instance
 variables as private members. Provide setters and 
 getters as protected methods. Derive a class Employee from
  Person class with private instance variable salary.
   Provide public methods setEmployee() and showEmployee().*/