#include<iostream>
using namespace std;
class Time {
    private:
    int h,m,s;
    public:
    void setTime(int,int,int);

    void showTime();
    
   void normalize();

    Time add(Time);

    bool is_greater(Time);



};

void Time::setTime(int x, int y,int z){
    h=x;
    m=y;
    s=z;


}

void Time::showTime(){
    std::cout << h <<" hrs " << m <<" min " << s <<" sec "<<std::endl;
}
void Time::normalize(){
    h=h+m/60;
    m=m%60+s/60;
    s=s%60;


}
Time Time::add(Time c){
    Time temp;
    temp.h=h+c.h;
    temp.m=m+c.m;
    temp.s=s+c.s;
    return temp;
}
bool Time::is_greater(Time c){
    if(h>c.h)
       return true;
    else if(h<c.h)
            return false;
     else if(m>c.m)
         return true;
     else if(m<c.m) 
            return false;
     else if(s>c.s)
              return true;
     else 
           return false;
                     
                     
                 
           
      


}
int main(){
   bool x;

    Time c ,c1,c2;
    c.setTime(4,15,25);
    c1.setTime(4,1,25);
  //  c.showTime();
   // c1.showTime();
 //   c2=c.add(c1);
    //c2.normalize();
   // c2.showTime();
    x=c.is_greater(c1);
   std::cout << x << std::endl;
}

  /*  void showTime()
    
   void normalize()

    Time add(Time)

    bool is greater(Time)

*/








/*2. Define a class Time to represent a time with instance variables h,m and s to store hour, minute and second. Also define following member functions

1. void setTime(int,int,int)

2. void showTime()

3. void normalize()

4. Time add(Time)

5. bool is greater(Time)*/