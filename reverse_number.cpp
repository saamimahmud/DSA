/*
Reverse a number and dont print 0

*/

#include<iostream>
using namespace std;

    int RevNum(int n){
        int last_digit;
        int revNum=0;
        while(n>0){
            last_digit=n%10;
            revNum=revNum*10+last_digit;
            n=n/10;
        }
    return revNum;
        
    }

int main(){

int n;
cout<<"Enter number to be reversed : ";
cin>>n;
cout<<RevNum(n);

return 0;
}

