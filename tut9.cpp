//    lecture 9

#include<iostream>
using namespace std;
int main(){

    // C++ CONTROL STRUCTURES

    // 1.sequence structure
    // 2.selection structure 
    // 3.loop structure
    // egula basic control structure


//  1.if-else statement
// 2.if-else ladder
// 3.switch case





//   Selection Control Structure :If- else ladder

 int age;
 cout<<"Tell me your age "<<endl;
cin>>age;


if(age<18){
    cout<<"You can't go."<<endl;
}
   
else if (age==18){
        cout<<"you are a kid. "<<endl;
    }
else if(age>75){
        cout<<"No older people allowed.";
}
else {
    cout <<"You can go .";
}





//   Selection Control Structure :Switch Case 
 
switch (age)
{
case 18:
    
    cout<<"You are 18"<<endl;
    break;

case 22:
    
    cout<<"You are 22"<<endl;
    break;

case 2:
    
    cout<<"You are 2"<<endl;
    break;  // break na dilee samner sob print hoye jabe

default: 
cout<<"No special Case";
    break;
}
    
cout<<"Done switch case";

    return 0;
}