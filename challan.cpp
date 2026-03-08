#include<iostream>
using namespace std;
int main ()
{
float speed;
cout<<"Car's speed:";
cin>>speed;
if(speed<=100){
    cout<<"Perfect! You're going good";
}
if(speed>100){
    cout<<"Halt...... YOU WILL BE CHALLLANED";
}
return 0 ;
}