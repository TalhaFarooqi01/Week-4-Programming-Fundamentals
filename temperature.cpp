#include<iostream>
using namespace std;
int main()
{
float temperature1,temperature2,difference;
cout<<"Temperature City 1:";
cin>>temperature1;
cout<<"Temperature City 2:";
cin>>temperature2;
difference=temperature1-temperature2;
if(difference>10){
    cout<<"Difference is too big";
}
else{
cout<<"Program ends";
}
return 0;
}