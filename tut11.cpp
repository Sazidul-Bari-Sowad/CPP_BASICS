// lec 11 
// break & continue & snippet


// ekhane boilerplate namer akta snippet banailam
// karonn ei syntax barbar likha jhamela 

#include<iostream>
using namespace std;
int main(){
    //  use of break
    // ________________

    for (int i = 0; i < 10; i++)
    {
         cout<<i<<endl;
        if(i==2){
            break;
        }
        //  cout<<i<<endl;
        // eta niche dile 0,1 print hobe sudhu
    } 
    
    //  use of continue
    //___________________

      for (int i = 0; i < 15; i++)
      {
        if(i==2){
            continue;
        }
         cout<<i<<endl;
        //  ekhane 2 skip hoye jabe ,baki sob print hobe 

      }
   return 0;
}
