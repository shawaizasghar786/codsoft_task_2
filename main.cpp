#include <iostream>
using namespace std;
int main() {
 float num1,num2,result;
 char oper;
    cout<<"Enter 1st number"<<endl;
    cin>>num1;
    cout<<"Enter 2 number"<<endl;
    cin>>num2;
 cout<<"Enter the operation that you want to perform:"<<endl;
 cin>>oper;
 switch(oper){
     case'+':

         result=num1+num2;
         cout<<"Sum of two numbers is:"<<result<<endl;
         break;
     case'-':

         result=num1-num2;
         cout<<"Subtraction of two numbers is:"<<result<<endl;
         break;
     case'*':

         result=num1*num2;
         cout<<"Product of two numbers is:"<<result<<endl;
         break;
     case'/':

         result=num1/num2;
         cout<<"Answer of Division is:"<<result<<endl;
         break;
 }
    return 0;
}
