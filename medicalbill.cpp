#include<iostream>
using namespace std;
int main()
{ float amount,discount;
    cout<<"Enter your Bill:";
    cin>>amount;
    if(amount<=5000){
        discount=amount*5/100;
cout<<"Discount on your Bill:"<<discount<<endl;
    }
if(amount>5000){
    discount=amount*10/100;
    cout<<"Discount on your Bill :"<<discount;
}