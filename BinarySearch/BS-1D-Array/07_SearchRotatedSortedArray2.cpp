//Aman Kumar Sharma
//Search in Rotated Sorted Array II (leetcode-81)
#include<bits/stdc++.h>
using namespace std;

bool SearchRotatedSortedArray(vector<int>& nums, int target){
    int n=nums.size();
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target)return true;
        //handle duplicates
        if(nums[low]==nums[mid] && nums[mid]==nums[high]){
            low++;
            high--;
            continue;
        }
        if(nums[low]<=nums[mid]){//left half sorted
            if(nums[low]<=target && target<nums[mid]){//target present in left half
                high=mid-1;
            }
            else low=mid+1;
        }
        else{//right half sorted
            if(nums[mid]<target && target<=nums[high]){//target present in right half
                low=mid+1;
            }
            else high=mid-1;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    int target;
    cin>>target;
    cout<<SearchRotatedSortedArray(nums, target);
    return 0;
}