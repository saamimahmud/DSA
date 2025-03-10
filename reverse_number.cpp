#include<iostream>
using namespace std;

    void RevNum(int n){
        int last_digit;
        while(n>0){
            last_digit=n%10;
            cout<<last_digit;
            n=n/10;
        }
        
    }

int main(){

int n;
cout<<"Enter number to be reversed : ";
cin>>n;
RevNum(n);

return 0;
}

