//Aman Kumar Sharma
//Search in Rotated Sorted Array (leetcode-33)
#include<bits/stdc++.h>
using namespace std;

int SearchRotatedSortedArray(vector<int>& nums, int target){
    int n=nums.size();
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target)return mid;

        if(nums[low]<=nums[mid]){//left half sorted
            if(nums[low]<=target && target<nums[mid]){//target present
                high=mid-1;
            }
            else low=mid+1;
        }
        else{//right half sorted
            if(nums[mid]<target && target<=nums[high]){
                low=mid+1;
            }
            else high=mid-1;
        }
    }
    return -1;
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