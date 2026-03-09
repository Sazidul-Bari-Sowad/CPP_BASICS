//    LECTURE 8 🎗️

#include<iostream>
#include<iomanip>// manipulators use korar jonno lagbe 


using namespace std;
int main(){
int a=34;

cout<<"The value of a was :"<<a<<endl;

a=45;
 
cout<<"The value of a is :"<<a<<endl;
    // ekhane ami 2 line e 2 ta alada value pabo

    //  CONSTANTS IN C++

    const float pi=3.14;  cout<<pi<<endl;

//   ekhane pi pore change kore dileo pblm nai 


//   MANIPULATORS 

// endl akta manipulator //setw akta manipulator jeta iomanip e ase
int x=3,y=78,z=1233;
cout<<"The value of x without setw is "<<x<<endl;
cout<<"The value of y without setw is "<<y<<endl;
cout<<"The value of z without setw is "<<z<<endl;


cout<<"The value of x with setw is "<<setw(4)<<x<<endl;
cout<<"The value of y with setw is "<<setw(4)<<y<<endl;
cout<<"The value of z with setw is "<<setw(4)<<z<<endl;
// run korlei dekha jay result ki ase 




//  OPERATOR PRECIDENCE  
// https://en.cppreference.com/w/cpp/language/operator_precedence.html

int p=3,q=4;
// int r=(p*5)+q;
int r = ((((p*5)+q)-45)+87);

cout<<r<<endl;
return 0;

}