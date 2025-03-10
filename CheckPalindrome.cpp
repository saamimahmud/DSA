#include<iostream>
using namespace std;

void palindrome(int n){
    int last_digit;
    int rev_num=0;
    while(n>0){
        last_digit=n%10;
        rev_num=rev_num*10+last_digit;
    }
    if(last_digit==n){
        cout<<"The number is a palindrome..."; }
    else{
        cout<<"The number is not a palindrome...";  }
}

int main(){
    int n;
    cout<<"Enter the number to be cheked for palindrome : ";
    cin>>n;
    

    return 0;
}
