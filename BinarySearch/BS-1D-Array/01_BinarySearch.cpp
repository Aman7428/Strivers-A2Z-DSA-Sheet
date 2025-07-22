//Aman Kumar Sharma
//Binary Search (leetcode-704)
#include<bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int>& nums, int target){
    int n=nums.size();
    int left=0, right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]<target)left=mid+1;
        else right=mid-1;
    }
    return -1;
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
    int target;
    cin>>target;
    cout<<BinarySearch(nums, target)<<endl;
    return 0;
}