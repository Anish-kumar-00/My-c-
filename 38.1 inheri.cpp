#include<iostream>
#include<string.h>
using namespace std;
class person{
    private:
      int age;
      char name[20];
     
    
    protected: 
      void setters(int a,char f[]){
         age=a;
         strcpy(name,f);
      
      }
      void getters(){
        cout << "age:-"<<age << endl;
        cout << name<< endl;
      }


};

class employee :public person{
     private:
      int salary ;
     
     
     public:
        void set_employee(int a,char f[]){
            setters(a,f);
        
        
        }
        void show_employee(){
        cout << "hiii" << endl;
            getters();
        
        }


};


int main(){
 char f[20]="Anish Kumar";
person p;
employee e;
e.set_employee(5,f);
e.show_employee();

return 0;
}
/*1. Define a class Person with name and age as 
instance variables as private members. Provide 
setters and getters as protected methods.
 Derive a class Employee from Person class with private
  instance variable salary. Provide public methods 
  setEmployee() and showEmployee().*/