//Two Sum : Check if a pair with given sum exists in Array

#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> arr,int k){
int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==k){
                return {i,j};

            }
        }
    }
    return {-1,-1};
}



int main(){
vector<int> arr={2,6,5,8,11};
int k=14;
for(int val:twoSum(arr,k)){
cout<<val<<" ";

if(val>-1){
cout<<"YES"<<endl;

}
else{
    cout<<" NO "<<endl;
}

}
    return 0;
}