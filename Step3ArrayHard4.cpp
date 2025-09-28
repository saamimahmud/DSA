#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;


//Brute force solution
//T.C-> O(N^4*NlogN)
//S.C-> )()
    vector<vector<int>> fourSum(vector<int> &nums,int target){
    set<vector<int>> st;
    int n=nums.size();
        for (int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                        int sum =nums[i]+nums[j]+nums[k]+nums[l];
                        if(sum==target){
                            vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                            sort(temp.begin(),temp.end());
                            st.insert(temp);
                        }
                    }
                
                }
            }
        }
    vector<vector<int>> res(st.begin(),st.end());
    return res;
    }

    //better solution 
    //T.C-> O(N^3*log(M))
    //S.C-> O(N)+ O(quads)*2
    vector<vector<int>> fourSum1(vector<int> &nums,int target){
        int n=nums.size();
        int numL;
        set<vector<int>> st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<int> hashSet;
                for(int k=j+1;k<n;k++){
                    int sum=nums[i]+nums[j]+nums[k];
                    numL=target-(sum);
                    if(hashSet.find(numL)!=hashSet.end()){
                        vector<int> temp={nums[i],nums[j],nums[k],numL};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    hashSet.insert(nums[k]);

                }
            }
        }
        vector<vector<int>> res(st.begin(),st.end());
        return res;
    }

int main(){
vector<int> arr={1, 0, -1, 0, -2, 2};
int target=0;
vector<vector<int>> result=fourSum(arr,target);
for(const vector<int> &list:result){
    for(int val:list){
        cout<<val<<" ";
    }
    cout<<endl;
}
    return 0;
}