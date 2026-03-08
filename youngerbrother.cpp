#include<iostream>
using namespace std;
int main()
{string name1,name2,name3;
    float age1,age2,age3;
    cout<<"Enter the name of the first brother:"<<endl;
    cin>>name1;
    cout<<"Enter the age of the first brother:"<<endl;
    cin>>age1;
cout<<"Enter the name of the second brother:"<<endl;
    cin>>name2;
    cout<<"Enter the age of the second brother:"<<endl;
    cin>>age2;
cout<<"Enter the name of the third brother:"<<endl;
    cin>>name3;
    cout<<"Enter the age of the third brother:"<<endl;
    cin>>age3;
    if(age1 < age2 && age1 < age3){
        cout<<"Younger brother is "<<name1<<endl;
    }
    else if(age2 < age1 && age2 < age3){
        cout<<"Younger brother is "<<name2<<endl;
    }
    else{
        cout<<"Younger brother is" <<namee3<<endl;
    }
    return 0;
    }
    








}