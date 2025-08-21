#include<iostream>
using namespace std;
void Factorial(int n){
int factorial=1;

while(n>1){
    factorial=factorial*n;
    n--;
}
cout<<factorial;
}

int main(){
int n;
cout<<"Enter the number you want the factorial of : ";
cin>>n;
Factorial(n);
    return 0;
}
