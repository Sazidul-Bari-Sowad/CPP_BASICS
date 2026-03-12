//   leecture 10 

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    /*loops in C++
    _________________
    1.while 
    2.dor
    3.do while
    */

//     For loop in C++
// _______________________
//     syntax : 
//______________

    //    for(initialization; condition; increment)
    //    {
    //     loop body(C++ code)
    //    }


// printing 1-50 using for loop
//_________________________________
    for (int i = 0; i <= 50; i++ )
    {
        cout<<i<<".Hello World"<<endl;
    }
    
    //   Example of  infinite for loop :
//_____________________________________

    for(int i=0;34<=40;i++)
  {
    cout<<"FAAAAAAAAAAAAH"<<endl;
  }// emon sorto dite hobe ja always true hoy 



// While loop in C++
//____________________
//  SYNTAX :
//__________

//     while(condition)
// {
//     c++ statements;
// }




// / printing 1-40 using while loop
//____________________________________
int i=1;
while (i<=40)
{
   cout<<i<<endl;
   i++;
}


// // example of infinite while loop 
//____________________________________
int i=1;
while(true)
cout<<i<<endl;
i++;



//do While loop in C++
//__________________________
//  SYNTAX :
//_________
//   do  
//  {
//     c++ statements;
//  } 
// while(condition)


// printing 1-50 using do while loop
//____________________________________
int i=1;
do
{
   cout<<i<<endl;
   i++;
} while (i<=50);
    //    ekhanei condition jodi always true dei
    //  jemon 34<=40, taile infite hobe 
    // do while loop e condition vul holeo cycle 1 bar cholbe , karon condition last e chole

    return 0;
 }

