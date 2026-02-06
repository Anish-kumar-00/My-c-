#include<iostream>
using namespace std;

struct Book{
    private:
    int bookid;
    char title[20];
    float price;
    public:
    void  display(){
  cout << "bookid="<<bookid<< endl<<"Title="<<title<<endl<<"price="<<price;
   
   
 //  return 0;
   } 
   void input ()
   {
   bookid=50;
  //title={'A','N','I','S','H','\0'};
   price=8.5;
   
   
   }
};



//void  display(struct Book b1);


int main()
{ struct Book b1;
   //struct Book b1={1,"Agniveer",99.8};
    b1.input();
   b1.display();
   
   return 1;
    
}

