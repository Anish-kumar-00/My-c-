/*3 Define a class Date to represent date 
(like d=31, m=12, y=2022). Declare appropriate number 
of instance member variables and also define instance
 member functions to set date and get date.*/
#include<iostream>
using namespace std;
class Date
{
private:
    int a,b, c;//imaginary part
public:
    void set(int ,int , int );
    void get();
};

void Date::set(int m,int n,int p){
  if( m >= 1 && m <= 31&& n >0 && n <=12&& p >0 && p <3000)
 {
    a=m;
    b=n;
    c=p;
    get();
    
  }
  else
  {
  cout << "ENTER CORRECT TIME" << endl;
  }

}

void Date::get()
{
cout << a<<" day"<<b<<" month "<<c<<" year "<< endl;



}

int main()
{ 
Date c;
c.set(1,5,2027);
//c.get();

return 0;


}
/*if (m >= 1 && m <= 60 && n >= 0 && n <= 60 && p >= 0 && p <= 60)
{
    // valid values
}*/
