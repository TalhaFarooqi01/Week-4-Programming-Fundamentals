#include<iostream>
using namespace std;
main (){
float salary=10000;
float laptop_price=50000;
float advance_salary;
float months;
advance_salary = (salary * 0.5)*6;
if (advance_salary >= laptop_price){
cout<<"he can buy the laptop with advance salary ";
}
else {
    months = (laptop_price / salary);
    cout<<"he can not buy the laptop";
    cout<<"he needs months of salary"<<months<< endl;
}
