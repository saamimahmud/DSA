#include<iostream>
using namespace std;
//Factorial using recursion;
int Fact(int n){
   if (n==0){
    return 1;
   }
   else {
    return n*Fact(n-1);
   }
    
    
}

int main(){
int n;
cout<<"Eter the number you want to calculate factorial of : ";
cin>>n;

cout<<Fact(n);

    return 0;
}