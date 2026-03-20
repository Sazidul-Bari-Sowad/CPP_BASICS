//   lecture 12 🎗️
// POINTERS 

#include<iostream>
using namespace std;
int main(){
//      what is pointer ?
// _____>  a deta type
//  which holds the address of other data types
   

  int a=3;
  int * b=&a;
 //     &---->   address of operator 
  cout<<"The address of a is "<<&a<<endl;
  cout<<"The address of a is "<<b<<endl; 
  //     dekhabe '' 0x61ff08 '' a er address RAM er vitor kemon


  //     *---->   Dereference operator 
  cout<<"The value at the address b is "<< *b<<endl;

//   pointer to pointer
// _______________________
  int** c=&b;
// pointer er address in the RAM

cout<<"The address of b is "<<&b<<endl;
cout<<"The address of b is "<<c<<endl;
cout<<"The value at the address is "<<*c<<endl;  // eta b jokhon pointer silo tkn je address silo oita dekhabe
cout<<"The value at the address value at(value at(c)) "<<**c<<endl;  //double star dewate eta b er address e je value silo oita bujhabe ba show korbe 

   return 0;
}

