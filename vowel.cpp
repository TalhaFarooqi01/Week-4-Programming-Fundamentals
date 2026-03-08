#include<iostream>
using namespace  std;
 int main()
{
char letter;
cout<<"Enter any character in lowercase:";
cin>>letter;
if(letter>='0' && letter<='9'){
    cout<<"It is a number";
}
    else if(letter=='a' || letter=='e' || letter=='i' ||letter=='o' ||letter=='u'){
    cout<<"It is a vowel";
}
else {
 cout<<"It is a consonant";
}
return 0;
}