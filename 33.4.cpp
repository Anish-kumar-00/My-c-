#include <iostream>

using namespace std;
class Matrix {
private:
int a[3][3];
   public:
   void  set();
   void  dis();
   Matrix add(Matrix);
  Matrix sub(Matrix);
};
Matrix Matrix::sub(Matrix c1){
  Matrix t;
  
   
  for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
       t.a[i][j]=a[i][j]+c1.a[i][j];
       
     }
  }
  
  return t;
}



Matrix Matrix::add(Matrix c1){
  Matrix t;
  
   
  for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
       t.a[i][j]=a[i][j]+c1.a[i][j];
       
     }
  }
  
  return t;
}



void Matrix::set(){
  for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
       cin>>a[i][j];
     }
    
  }
  
  
}

void Matrix::dis(){
  for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
       cout<<a[i][j]<<" ";
     }
    cout<<"\n";
  }
  
  
}

int main() {

  Matrix c,c1,c2;
  c.set();
  c.dis();
  c1.set();
  c1.dis();
  c2=c.add(c1);
  c2.dis();
  c2=c.sub(c1);
  c2.dis();
  cout << "Hello World" << endl;
  return 0;
}
/*5. Define a class Matrix to represent a 3x3 order matrix. Provide appropriate
methods and properties to the class. Also define following methods in the class:

1. Matrix add(Matrix)

2. Matrix sub(Matrix)

3. Matrix multiply(Matrix)

4. Matrix transpose()

5. bool is_singular*/
