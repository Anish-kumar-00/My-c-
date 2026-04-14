class Person
{
    private : 
      char name[20];
       int age;
   protected:
   void setters(int x)
      {
       name="anish";
       age =x;
     }

    int  getters()
     {
         return x;
     }

}

class person :: public Employee
  {
    

  private:
    int salary;
  public:
     void setEmployee(int x) 
       {
       setters(x);

        }


     int showEmployee()
      {
    
       int k=getters();
        return k;

      }

  }

#include<stdio.h>
using namespace std ;
int main()
{
    




return 0;
}













/*Define a class Person with name and age as instance variables as private members. Provide setters and getters as protected methods. Derive a class Employee from Person class with private instance variable salary. Provide public methods setEmployee() and showEmployee().*/

