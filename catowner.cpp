#include<iostream>
using namespace std;
int main(){
    float no1,workingdays,playtime,remain1,remain2;
    cout<<"No of Holidays:";
    cin>>no1;
    workingdays=365-no1;
    playtime=(workingdays*63)+(no1*127);
    if(playtime<30000){
        remain1=30000-playtime;
        cout<<"Tom sleeps well"<<endl;
        cout<<remain1<<" minutes less for play"<<endl;
    }
    else{
        remain2=playtime-30000;
        cout<<"Tom wil run away"<<endl;
    cout<<remain2<<" minutes for play"<<endl;
  }
  return 0;
}