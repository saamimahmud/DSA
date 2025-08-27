#include<iostream>
#include<vector>
using namespace std;

//f(x)for printing;
void print(vector<int> arr){
    for(int val: arr){
        cout<<val<<" ";
    }
}


// rotate an array by D places;
vector<int> rotArray(vector<int> arr,int k,string direction){
int n=arr.size();
vector<int> temp;
cout<<n;
//for left rotate
int j=0;
if(direction == "left"){
for(int i=k;i<n;i++){
    temp.push_back(arr[i]);
}
while(j<=k-1){
    temp.push_back(arr[j]);

j++;
}
return temp;

}
//for right rotate
else if(direction=="right"){
j==0;
for(int i=n-k;i<n;i++){
    temp.push_back(arr[i]);
}
while(j<=n-k-1){
    temp.push_back(arr[j]);

j++;
}
return temp;
}
}


int main(){
string direction;
int k;
cout<<"Enter the index for rotation of array : "<<endl;
cin>>k;
cout<<"Enter the rotation 'right' or 'left' :  "<<endl;
cin>>direction;
vector<int> arr={1,2,3,4,5,6,7};
//N = 6, array[] = {3,7,8,9,10,11} , k=3 , left 
//N = 7, array[] = {1,2,3,4,5,6,7} , k=2 , right
print(rotArray(arr,k,direction));

    return 0;
}