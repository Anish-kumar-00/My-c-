#include <iostream>
using namespace std;
class Complex {
    private:
    int a,b;
    public:
    void setData(int m, int n);

    void showData();

    Complex add(Complex);

    Complex subtract(Complex);

    Complex multiply(Complex);


};
void Complex::setData(int m,int n){
    a=m;
    b=n;
    
}

void Complex::showData(){
    std::cout << "a="<<a<< std::endl;
    std::cout << "b="<<b<< std::endl;

    
}

Complex Complex::add(Complex c){
    Complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;

 
    
}

Complex Complex::subtract(Complex c){
        Complex temp;
    temp.a=a-c.a;
    temp.b=b-c.b;
    return temp;

}


Complex Complex::multiply(Complex c){
    Complex temp;
    temp.a=a*c.a;
    temp.b=b*c.b;
    return temp;
    
}



int main() {
    Complex c,c1,c2;
        c.setData(5,6);
       c1.setData(7,4);
//   c.showData();
  //  c1.showData();
 //  c2=c.add(c1);
   // c2=c.subtract(c1);
      c2=c.multiply(c1);
   c2.showData();
   return 0;
}










/*1. Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts. Also define following member functions

1. void setData(int,int)

2. void showData()

3. Complex add(Complex)

4. Complex subtract(Complex)

5. Complex multiply(Complex)
*/