#include <iostream>
using namespace std;
int main(){
float speed;
cout<<"Enters speed:";
cin>>speed;
if(speed<=10){
    cout<<"Speed information:slow"<<endl;
}
if (10<speed>=50){
    cout<<"Speed information:Average";
}
if (50<speed>=150){
cout<<"Speed information:Fast";
}
if (150<speed>=1000){
    cout<<"Speed information:Ultra Fast";
}
if (speed>1000){
    cout<<"Speed information:Extremely Fast";
}
return 0;
}