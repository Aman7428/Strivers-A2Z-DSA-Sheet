//Aman Kumar Sharma
//Jump Game (leetcode-55)
#include<bits/stdc++.h>
using namespace std;

bool CanJump(vector<int>& nums){
    int n=nums.size();
    int maxIdx=0;
    for(int i=0; i<n; i++){
        if(i>maxIdx)return false;
        maxIdx=max(maxIdx, i+nums[i]);
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    cout<<CanJump(nums)<<endl;
    return 0;
}