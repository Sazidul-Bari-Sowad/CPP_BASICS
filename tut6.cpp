//     tutorial 6 🎗️   header files and operator 


// ctrl dea iostream e click korle oi header file e ja ase sob dekha jabe 

// there are two types of header files 
// 1. system header file : comes with the compiler 
#include <iostream>
// 2. user defined header file : this is written by programmer
#include "this.h" // ekhane this.h nije banano header file, jeta use korte hoile main directory te thaka lagbe, 
                    // apatoto etar vitor kichu nai 
                    
                   // more header files in CPP refference header files . this is a website  
   //    https://cppreference.com/w/cpp/standard_library.html
   //  kono header file deprecated thaka mane hoilo oita update hoye new ta use kora hoy , tai puran ta onk compiler e kaj korbe na 

            



using namespace std ;

int main(){

  cout<<"this is hello wrld program"<<endl;

  int a=4, b=5;

  cout<<" Operators in C++"<<endl;
  cout<<"Types of C++ "<<endl;
  // Arithmatic operators 
  cout<<"this is a+b :  "<<a+b<<endl;
  cout<<"this is a-b  :  "<<a-b<<"\n";
  cout<<"this is a*b :  "<<a*b << endl;

  cout<<"this is a/b :  "<<a/b<< endl;
  // 4/5 = 0.8 hoileo ekhane 0 show korbe karon integer show hoy 
  cout<<"this is a%b  : "<<a%b<<endl;
  // ene a choto b boro ta choto ta automatic vagsesh 

  cout<<"this is a++  : "<<a++<<endl;
 // a++ mane, age a print koro ar value 1 barao 
 // taile a=4 print hoye jabe 
  cout<<"this is a-- :  "<<a--<<endl;
// ekhane ager line er a 1 barar por je 5 hoise seta age print hobe , pore sekhan theke 1 kome 4 hoye thakbe 
// kintu seta pore use hobe , ekhane print hobe na 
  cout<<"this is ++a : "<<++a<<endl;
  // ekhane age ++ hoye jabe tai 5 print hobe 

  cout<<"this is --a  : "<< --a<<endl;
  // ekhane ager 5 theke 1 kome 4 print hobe 

  // alt+shift dile aksathe onk gula line e lekha jay, ekhane sob line e aksathe aksathe endl dewa hoise 

  cout<<endl;

   // ASSAIGNMENT OPERATORS - used to assigned values to variables 
 //  assignment operator sudhui = 


  //    COMPARISON OPERATOR 

cout<<"Following are the comparison operators"<<endl;
  
cout<<"The value of a==b is "<<(a==b)<<endl;
cout<<"The value of a!=b is "<<(a!=b)<<endl;
cout<<"The value of a<b is "<<(a<b)<<endl;
cout<<"The value of a>b is "<<(a>b)<<endl;
cout<<"The value of a<=b is "<<(a<=b)<<endl;
cout<<"The value of a>=b is "<<(a>=b)<<endl;

// true hole 1 ,false hole 0 print hobe


  //  LOGICAL OPERATORS  &&   || !

  cout<<"following are the logical operators "<<endl;
  cout<<"The value of ((a==b)&&(a<b))  is :   "<< ((a==b)&&(a<b)) <<endl;
// eta and operator && 

 cout<<"The value of ((a==b)||(a<b))  is :   "<< ((a==b)||(a<b)) <<endl;
// eta or operator ||

 cout<<"The value of !(a==b) is "<< !(a==b)<<endl;  
 cout<<"The value of !!(a==b) is "<< !!(a==b)<<endl;  
 //  eta not operator !
    return 0;
}


