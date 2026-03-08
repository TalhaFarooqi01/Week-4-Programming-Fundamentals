#include <iostream>
using namespace std;
int main(){
float no_1,no_2,no_3,Price1,Price2,Price3,Price,Discountedprice;

cout<<"No of Red Roses:";
    cin>> no_1;
    Price1=no_1*2;
cout<<"No of White Roses:";
    cin>> no_2;
    Price2=no_2*4.10;
cout<<"No of Tulips:";
    cin>> no_3;
    Price3=no_3*2.50;
    Price=Price1+Price2+Price3;
    if(Price>200){
        Discountedprice=Price-(Price*20/100);
        cout<<"Orignal Price="<<Price<<endl;
        cout<<"Payable amount after discount="<<Discountedprice<<endl;
    }
    return 0;
}