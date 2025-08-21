/*
A program to print all the divisors of a number.
striver DSA sheet
CODE 1 with TC -> O(N)
*/
#include<iostream>
using namespace std;
void Print_Divisors_1(int n){
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
/*
CODE 2 with TC -> O(log2(n))
*/
void Print_Divisors_2(int n){
    if(n==0){
            cout<<n<<endl;
        }
    else{
        for (int i = 1; i*i<=n; i++)
    {
        if (n%i==0){
            cout<<i<<endl;
            if(n/i!=i){
            cout<<n/i<<endl;
        }
        }    
    }   }
}
int main(){
int n;
cout<<"Enter a number : "<<endl;
cin>>n;
cout<<"The divisors of "<<n<<" are : "<<endl;
Print_Divisors_1(n);
Print_Divisors_2(n);
    return 0;
}