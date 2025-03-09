#include<iostream>
using namespace std;
int main (){
    int n=35;
    int t=n;
    int last_digit;
    int Is_divisble;
    int count=0;
    cout<<" n == "<<n<<endl;
while(n!=0){
    
    last_digit=n%10;
    cout<<"last_digit == "<<last_digit<<endl;
    Is_divisble=t%last_digit;
    cout<<" Is_divisble == "<<Is_divisble;
    if(Is_divisble==0){
        count=count+1;
    }
    n=n/10;
    cout<<" n == "<<n;
    cout<<" count == "<<count;

            }


    return 0;
}