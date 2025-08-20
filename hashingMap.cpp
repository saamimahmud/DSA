#include<iostream>
#include<map>
using namespace std;
//always when using maps try to first try with unordered map because it has the best case T.C of O(1) and map has T.C of log(n) for all cases.
//worst case of unordered map is O(n) and it is due to COLLISIONS ( that is all the elements have been stored at the same hash index and it has become a quite long chain.)
//works for both int and char: just change int arr[n] -> char[n]; and int ask; -> char ask;
    

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