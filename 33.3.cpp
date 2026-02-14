#include <iostream>
using namespace std;
class  TestResult{
   // private:
   public:
    int roll_no,right,wrong,net_score;
    static int right_weightage,wrong_weightage;
    public:
   void  set(int,int,int);
   void  get();
    
};
int TestResult::right_weightage=5;
int TestResult::wrong_weightage=2;
void TestResult::set(int x,int y,int z){
    roll_no=x;
    right=y;
    wrong=z;
  //  right_weightage=5;
    //wrong_weightage=2;
}
void TestResult::get(){
    cout << "Roll no:-"<<roll_no<< std::endl;
    cout << "net_score- "<<(right*right_weightage)-(wrong*wrong_weightage)<< std::endl;
}
void store(TestResult &,int,int,int);
void store(TestResult &t,int x,int y,int z){
    t.roll_no=x;
    t.right=y;
    t.wrong=z;
}


int main() {
  TestResult c[5];
int x;
//cin>>x;
 int i=0;
for(;i<5;i++){
   int x,y;
   cout << "Enter right of roll no:-"<<i+1<< std::endl;
   cin>>x;
   cout << "Enter  wrong of roll no:-"<<i+1<< std::endl;
   cin>>y;
    store(c[i],i+1,x,y);

}



 // store(c[0],1,7,1);
//  store(c[1],2,9,2);
//  store(c[2],3,4,1);
//store(c[3],4,8,0);
 // int a=0;
    cout << c[3].right<< std::endl;

 
  
  // c.set(1,8,1);
  // c.get();
 // cout << "Hello, World!" << std::endl;
  return 0;
}
/*3. Define a class TestResult with properties roll_no, right, wrong, net_score. Also define class properties right_weightage, wrong_weightage. Provide methods to set and get all the properties.*/