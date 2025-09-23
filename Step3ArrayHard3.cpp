#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;


//Brute Force solution
//T.C-> O(n^3 * log(k)) & S.C->2*O(K) , where k is the number of unique triplets; & lo(k)because we are using set data structure and inserting in it .
 void threeSum(vector<int> &nums) {
        int n=nums.size();
        vector<vector<int>> result;
        set<vector<int>> st;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vector<int> temp={nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }

         for(auto it: st){
            for(int val:it)
           { cout<<val;
        }
         }

        
    }

    //Better solution using hashing :
//T.C-> O(N^2*log(M))
//S.C-> O(N)+O(num of unique elements)*2...
vector<vector<int>> threesumBetter(vector<int> &nums){
    int n= nums.size();
set<vector<int>> st;
int third=0;
    for(int i=0;i<n;i++){
        set<int> hash;
        for(int j=i+1;j<n;j++){
            third=-(nums[i]+nums[j]);
            if(hash.find(third)!=hash.end()){
                vector<int> temp={nums[i],nums[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);

            }
            hash.insert(nums[j]);

        }
    }
    vector<vector<int>> res(st.begin(),st.end());
    return res;
}



    int main(){
vector<int> arr={-1,0,1,2,-1,-4};
threeSum(arr);
        return 0;
    }