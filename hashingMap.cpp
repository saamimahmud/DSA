#include<iostream>
#include<map>
using namespace std;


    

int main(){
map<int,int> mpp;
int n;
cout<<"Enter the number of elements you would like to have as input : "<<endl;
cin>>n;
int arr[n];
cout<<"Now enter the elements : "<<endl;
for(int i=0;i<=n;i++){
    cin>>arr[i];
}
//precompute;
for(int i=0;i<=n;i++){
    mpp[arr[i]]+=1;
}
int q;
cout<<"Enter the number of queries you would like to ask : "<<endl;
cin>>q;
int ask;
while(q--){
    cout<<"Enter the element whose frequency you would like to know : "<<endl;
    cin>>ask;
    cout<<ask<<" -> "<<mpp[ask] <<endl;;
}



    return 0;

}