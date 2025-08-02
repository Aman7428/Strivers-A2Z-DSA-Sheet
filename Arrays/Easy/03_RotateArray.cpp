//Aman Kumar Sharma
//Rotate Array (leetcode-189)
#include<bits/stdc++.h>
using namespace std;

void RotateArray(vector<int>& nums, int k){
    int n=nums.size();
    k=k%n;
    // vector<int>ans(n,0);

    // for(int i=0; i<n; i++){
    //     ans[(i+k)%n]=nums[i];
    // }
    // nums=ans;
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    int k;
    cin>>k;
    RotateArray(nums, k);
    for(int num:nums)cout<<num<<" ";
    cout<<endl;
    return 0;
}