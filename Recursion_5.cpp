#include<iostream>
using namespace std;

// Sum of first n numbers using recursion.
int sum_of_n(int n,int sum){
    if(n>0){
   sum=sum+n;
   sum_of_n(n-1,sum);
}
}
int main(){
int n=10;
int sum=0;  
int reuslt =sum_of_n(n,sum);
 cout<< reuslt;

    return 0;
}