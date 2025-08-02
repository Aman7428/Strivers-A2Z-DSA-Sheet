//Aman Kumar Sharma
//Remove Duplicates from Sorted Array (leetcode-26)
#include<bits/stdc++.h>
using namespace std;

int RemoveDuplicates(vector<int>& nums){
    int n=nums.size();
    int i=0;
    for(int j=1; j<n; j++){
        if(nums[i] != nums[j]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    return (i+1);
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    cout<<RemoveDuplicates(nums);
    return 0;
}