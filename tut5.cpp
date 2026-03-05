//       LECTURE 5 🎗️    basic input output

//  input stream : direction of floe of bytes takes place from input device to the memory . ex. keyboard 

// output stream : monitor 

# include<iostream>
using namespace std;
int main(){

  int num1, num2;
// << this is called insertion operator 
cout<<"enter the value of num1 :";
// >> this is extraction operator 
cin>>num1;

// << this is called insertion operator 
cout<<"enter the value of num2 :";
// >> this is extraction operator 
cin>>num2;

cout<<"sum is :"<<num1+num2;

    return 0;
}

// reserved key words . added ,screanshot 
// all types of deta type and range added .screanshot

// Chaining: তুমি চাইলে একই লাইনে একাধিক ইনপুট নিতে পারো, যেমন: cin >> a >> b;
// The Operators: মনে রাখার সহজ বুদ্ধি হলো—<< তীরের মতো ডাটা বাইরের দিকে (স্ক্রিনে) পাঠাচ্ছে, আর >> তীরের মতো ডাটা ভেতরের দিকে (ভেরিয়েবলে) ঢোকাচ্ছে।

// Buffer: cin করার সময় তুমি যখন এন্টার চাপো, কম্পিউটার তখন ডাটা প্রসেস ক