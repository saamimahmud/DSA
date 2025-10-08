#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;



//bRUTE FORCE : T.C-> O(N^3);
//S.C-> O(N^2);
vector<vector<int>> func(vector<int> &nums){
    int n=nums.size();
    vector<vector<int>> result;
    int maxLen=0;
    int size=0;
int sum = 0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            
        sum+=nums[j];
            
            if(sum==0){
                vector<int> temp;
           for(int k=i;k<=j;k++){
            temp.push_back(nums[k]);
             size=temp.size();
            
           }
           maxLen=max(size,maxLen);
           result.push_back(temp);
        }
        
        
        }
       
        
    }
    cout<<"longest subArray : "<<maxLen<<endl;
    return result;
}

int main(){
vector<int> arr={6, -2, 2, -8, 1, 7, 4, -10};
vector<vector<int>> res=func(arr);

for(const vector<int> &list:res){
    for(int val:list){
        cout<<val<<" ";
    }
    cout<<endl;
}

    return 0;
}