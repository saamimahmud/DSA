#include<iostream>
using namespace std;
auto n_From_User(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    return n;
}
void IsArmNum(int n){
    int last_digit;
    int checkNum=0;
    int t=n;
    while (n>0)
    {
        last_digit=n%10;
        checkNum=  checkNum + last_digit *last_digit*last_digit;
        n=n/10;
    }
    cout<<"sum of cube of digits =  "<<checkNum<<endl;
    if (checkNum==t)
    {
        cout<<"it is an Armstrong number ";
    }else{
        cout<<"it is not an Armstrong number ";
    }
    
}

int main(){
    int n=n_From_User();
    IsArmNum(n);
    return 0;
}