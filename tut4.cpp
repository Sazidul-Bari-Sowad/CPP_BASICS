                        // LECTURE FOUR 🎗️

        #include<iostream>
        using namespace std;
        int glo =6;
        // ei glo ekhane holo global variable 
        void sum (){

        int a;
        cout<<glo;
        }
        int main(){
    int glo=9 ;
    glo=78;
    // glo namer age jeta silo oita global kintu eta local , etay 9 thakay 9 print hobe 
    // tar mane local ta besi pradhanno pabe 

    //   int a= 4, b=5;
    int a= 40 , b= 50; 
     float pi=3.14;
    //  char c='ud';
     char c='u';
    bool t=true;

sum();

//   ekhane char er '' er vitor jodi 1 tar besi letter dewa hoy taile purata show hobe na 
//  vitore ud dile sudhu d print hobe 
                            

   cout<<glo<<t;
//     ekhane show korbe 6781 . last er 1 bool theke aise , false dile 0 hoito 


//     cout<<"this is tutorial four\n "<< a <<"\n the value of b is :"<<b ;
//     cout<<"\nthe value of pi is "<<pi;
//   cout<<"\nthe value of Char is "<<c;

            return 0;
        }


        //  variable is a container to hold deta 
        //  types of variables in C++ .there are 5
        // int .float ,char,double ,boolean 
        

        // double use hoy doshomik er pore onek boro part thakle 
        // ex.     double 1.558545 
        // bool can be 1,0

        //   LOCAL AND GLOBAL VARIABLE  (based on scope)
        // scope of a variable is the region in code where the existance of variable is valid 

        // locals are decleared inside the braces of any function and can be acced only from there 


        //   YES....the name of local and global variable can be same 
        // tobe local ta pradhanno pabe 


        //   Data types are three types . 
        /*
        1. built-in 
        2. user defined   (struct , union, enum)
        3.derived   (array, functions ,pointer )
        */

        // rules 
        /*
        1. character thakbe 1-255 er moddhe 
        2.start with letter and _
        3.case sencetive
        4. space not allowd 
        5. reserved word use kora jabe na 
        6.special word dewa jabe na 
        
        */