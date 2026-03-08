#include <iostream>
using namespace  std;
int main(){
string figure;
float s,l,w,A,A_rectangle,r,A_circle,b,h,A_triangle;
cout<<"Type of the figure(square,rectangle,circle,triangle):";
cin>>figure;
if(figure=="square"){
    cout<<"Lenght of its side=";
    cin>>s;
    A=s*s;
    cout<<"Area of the square="<<A<<endl;
}
if(figure=="rectangle"){
    cout<<"Length="<<endl;
    cin>>l;
    cout<<"width="<<endl;
    cin>>w;
    A_rectangle=l*w;
    cout<<"Area of the rectangle="<<A_rectangle<<endl;
}
if(figure=="circle"){
cout<<"Radius="<<endl;
cin>>r;
A_circle=3.14*(r*r);
cout<<"Area of the circle="<<A_circle<<endl;
}
if(figure=="triangle"){
    cout<<"Base of the  triangle="<<endl;
    cin>>b;
    cout<< "Height of the triangle="<<endl;
    cin>>h;
    A_triangle=1/2*b*h;
cout<<"Area of the triangle"<<A_triangle<<endl;
}
return 0;
}