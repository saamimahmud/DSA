#include<iostream>
#include<vector>
using namespace std;
// rotate an array by D places;
vector<int> rotArray(vector<int> arr,int k,string direction){
int n=arr.size();
vector<int> temp;

//for left rotate
int j=0;
if(direction == "left"){
for(int i=k;i<n;i++){
    while (j<=k){
        temp.push_back(arr[j]);
        j++;
    }
    temp.push_back(arr[i]);
}
return temp;

}
//for right rotate
else if(direction=="right"){

}




}


int main(){
string direction;
int k;
cout<<"Enter the index for rotation of array : "<<endl;
cin>>k;
cout<<"Enter the rotation 'right' or 'left' :  "<<endl;
cin>>direction;


    return 0;
}