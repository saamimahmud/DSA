//Print something n times using recursion;
#include<iostream>
using namespace std;
int count=0;
void fn(){
    if(count==13){
        return;
    }
    else{
cout<<count<<endl;
count++;
fn();
    }
}
int main(){

fn();

    return 0;
}