//Aman Kumar Sharma
//Check if Array Is Sorted and Rotated (leetcode-1752)
#include<bits/stdc++.h>
using namespace std;

bool checkSortedRotatedArray(vector<int>& nums){
    int n=nums.size();
    int count=0;
    for(int i=0; i<n; i++){
        if(nums[i]>nums[(i+1)%n])count++;
    }
    if(count>1)return false;
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    cout<<checkSortedRotatedArray(nums)<<endl;
    return 0;
}