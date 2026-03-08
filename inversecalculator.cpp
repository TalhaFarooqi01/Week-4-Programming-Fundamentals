#include <iostream>
using namespace std;
int main(){
float number1,number2,Answer;
char a;
cout<<"Enter First Number";
cin>>number1;
cout<<"Enter the Operator(+,-,*,/):";
cin>>a;
cout<<"Enter Second Number";
cin>>number2;
if('a'=='+'){
  Answer=number1-number2;
  cout<<number1<< "-"<<number2<< "="<<Answer;
}
if('a'=='-'){
    Answer=number1+number2;
   cout<<number1<<"+"<<number2<<"="<<Answer;
}
if('a'=='*'){
Answer=number1/number2;
cout<<number1<<"/"<<number2<<"="<<Answer;
}
if('a'=='/'){
    Answer=number1*number2;
    cout<<number1<<"*"<<number2<<"="<<Answer;
}
return 0;
}