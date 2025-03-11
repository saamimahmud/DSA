/*
A program to print all the divisors of a number.
striver DSA sheet
*/
#include<iostream>
using namespace std;
void Print_Divisors(int n){
    if(n==0){
            cout<<n<<endl;
        }
    else{
        for (int i = 1; i <=n; i++)
    {
        if (n%i==0){
            cout<<i<<endl;
        }
        
    }   }
}
int main(){
int n;
cout<<"Enter a number : "<<endl;
cin>>n;
cout<<"The divisors of "<<n<<" are : "<<endl;
Print_Divisors(n);
    return 0;
}