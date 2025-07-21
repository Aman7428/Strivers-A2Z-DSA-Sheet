//Aman Kumar Sharma
//Majority Element (leetcode 169)
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums){
    int n=nums.size();
    sort(nums.begin(), nums.end());
    int mid=(n-1)/2;
    return nums[mid];
}

int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    cout<<majorityElement(nums)<<endl;
    return 0;
}