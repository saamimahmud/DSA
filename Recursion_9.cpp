#include<iostream>
using namespace std;
//Fibonacci series ..... 0 1 1 2 3 5 8 13
void Fibo(int x){
    int arr[x];
arr[0]=0;
arr[1]=1;
int i=0;
while(i!=x){
    arr[i+2]=arr[i]+arr[i+1];
    i++;
}
for(int i=0;i<=x;i++){
    cout<<arr[i];
}


}
void PrintSeries(int arr[],int x){
    for(int i=0;i<=x;i++){
        cout<<arr[i];
    }
}
void Fib_Rec(int x,int p1){
    int arr[x];
    int p2=p1+1;
    int p3=0;
    arr[p1]=0;
    arr[p2]=1;
    if(p3<=x){
        p3=p2+1;
        arr[p3]=arr[p1]+arr[p2];
        Fib_Rec(x,p1+1);
    }

   for(int i=0;i<=x;i++){
       cout<<arr[i];
    }
}
int main(){
int x=5;
Fibo(x);
cout<<endl;
Fib_Rec(x,0);

    return 0;
}