//Aman Kumar Sharma
//Rearrange Array Elements by Sign (leetcode-2149)
#include<bits/stdc++.h>
using namespace std;

vector<int> RearrangeArray(vector<int>& nums){
    int n=nums.size();
    vector<int>ans(n,0);
    int posIdx=0, negIdx=1;
    for(int i=0; i<n; i++){
        if(nums[i]>0){
            ans[posIdx]=nums[i];
            posIdx+=2;
        }
        else{
            ans[negIdx]=nums[i];
            negIdx+=2;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    vector<int>result=RearrangeArray(nums);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}