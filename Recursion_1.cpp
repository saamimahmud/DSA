//Print something n times using recursion;
#include<iostream>
using namespace std;

void fn(int count){
    if(count==13){
        return;
    }
    else{
cout<<count<<endl;
count++;
fn(count);
    }
}
int main(){
    int count=0;
fn(count);

    return 0;
}