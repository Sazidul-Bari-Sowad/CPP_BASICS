//     LECTURE 7 🎗️


#include<iostream>
using namespace std;

int c=45;

int main(){


//****************BUILT IN DETA TYPES********** */    
int a,b,c;

cout<<"enter the value of a:"<<endl;
cin>>a;
cout<<"enter the value of b;"<<endl;
cin>>b;

c=a+b;
cout<<"the sum is :"<<c<<endl;
cout<<"the glov is :"<<c<<endl;
cout<<"the glov is :"<<::c; // :: eta variable er age use korle ar oi variable er jodi global eo nam thake taile global variable e thaka man show korbe 



// ****************FLOAT, DOUBLE AND LONG DOUBLE LITERALS*****************//

float d=34.4f;  // sathe f dile eta exactly float hobe , naile compiler double hisebe chinbe 
long double e=34.4l; // sathe l dile long double bujbe compiler
           // ei f ba l ,, chaile F ba L o dewa jabeendl

cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;

// // sizeof()   eta sobar memory bir ba size show korbe 


 cout<<"the value of d is :"<<d<<endl<<"the value of e is :"<<e<<endl;






//  ***************** Reference Variables  

float x=455;
float & y = x;  // ekhane y holo reference variable, mane y dea x ke prokash korlam 
cout << x << endl;
cout << y << endl;


//   *********TypeCasting****

int m=45;
float n=45.46;
cout<<"the value of m is "<<(float)m<<endl;   // typecasting kore 45 ke float banay dewa hoilo
  // cout<<"the value of m is "<<float(m);      >emne dileo hobe 
// cout<<"the value of n is "<<(int)n;  // typecasting kore 45.46 ke 45 banay dise 
  cout<<"the value of n is "<<int(n)<<endl;
          // another process
    

  int z=int(n);

  cout<< "The expression is "<<m+n<< endl;
  cout<<"The expression is "<<m+int(n)<< endl; 
  cout<<"The expression is "<<m+(int)n<< endl;

  return 0;
}