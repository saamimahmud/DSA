#include<iostream>
using namespace std;
void Print_Divisors(int n){
    for (int i = 0; i <=n; i++)
    {
        if (n%i==0){
            cout<<i;
        }
    }   
}