#include<iostream>
#include<vector>
using namespace std;

void Merge(vector<int>& arr,int low,int mid,int high){
vector<int> temp;
int left=low;
int right=mid+1;
while(left<=mid&&right<=high){
    if(arr[left]<=arr[right]){
        temp.push_back(arr[left]);
        left++;
    }
    else{
        temp.push_back(arr[right]);
        right++;
    }
}
while(left<mid){
temp.push_back(arr[left]);
}
while(right<high){
temp.push_back(arr[right]);
}

}


void MergeSort(vector <int>& arr,int low,int high){

if(low==high){
    return;
}
int mid=(low+high)/2;
MergeSort(arr,low,mid);
MergeSort(arr,mid+1,high);
Merge(arr,low,mid,high);
}






int main(){

/* 
int n;
cout<<"Enter the size of array : "<<endl;
cin>>n;
vector<int> arr(n);
cout<<"Enter the elements of the array"<<endl;
for(int i=0;i<n;i++){
arr.push_back(i);
}
*/
int n=5;
vector<int> arr={5,3,2,6,7};
MergeSort(arr,0,4);
cout<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}

    return 0;

}