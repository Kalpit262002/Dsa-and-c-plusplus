#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> check;
        vector<int> ans;
        check=nums;
        sort(check.begin(),check.end());
        int i=0;
        int j=check.size()-1;
        int x,y;
        while(i<j){
            if((check[i]+check[j])==target){
                x=i;
                y=j;
            }
            if((check[i]+check[j])>target){
                j--;
            }
            else{
                i++;
            }
        }
        // cout<<x<<y;
        for(int a=0;a<nums.size();a++){
            if(nums[a]==check[x]||nums[a]==check[y]){
                ans.push_back(a);
            }
        }
        return ans;
    }
int main(){
    vector<int> test={2,4,3};
    int target=6;
    vector<int> print;
    print=twoSum(test,target);
    for(int i=0;i<print.size();i++){
        cout<<print[i]<<" ";
    }
    // cout<<endl;
    // for(int i=0;i<test.size();i++){
    //     cout<<test[i]<<" ";
    // }
    return 0;
}