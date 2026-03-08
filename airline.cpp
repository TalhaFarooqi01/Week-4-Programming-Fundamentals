#include <iostream>
using namespace std;
int main(){
    string country;
    float ticket,discountedticket;
    cout<< "Enter Country's name:";
    cin>>country;
    cout<<"Ticket price in dolllors:";
    cin>>ticket;
    if (country=="Ireland"){
        discountedticket=ticket-(ticket*5/100);
        cout<<"Discounted Price:"<<discountedticket;
    }
    else{
        discountedticket=ticket-(ticket*10/100);
        cout<<"Discounted Price:"<<discountedticket;
    } 
    return 0;
    }
