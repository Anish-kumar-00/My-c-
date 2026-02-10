/*2. Define a class Time to represent Time (like 3 hr 45 min 20 sec).
 Declare appropriate number of instance member variables and 
 also define instance member functions to set values for time 
 and display values of time.*/
#include<iostream>
using namespace std;
class Time
{
private:
    int a,b, c;//imaginary part
public:
    void set(int ,int , int );
    void get();
};

void Time::set(int m,int n,int p){
  if( m >= 1 && m <= 60 && n >= 0 && n <= 60 && p >= 0 && p <= 60)
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

void Time::get()
{
cout << a<<" hrs "<<b<<" min "<<c<<" sec "<< endl;



}


int main()
{
Time k;

k.set(1,5,7);
//c.get();

return 0;


}
