//Aman Kumar Sharma
//Move Zeroes (leetcode-283)
#include<bits/stdc++.h>
using namespace std;

void MoveZeros(vector<int>& nums){
    int n=nums.size();
    int j=-1;

    for(int i=0; i<n; i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }

    if(j==-1)return;

    for(int i=j+1; i<n; i++){
        if(nums[i]!=0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0; i<n; i++)cin>>nums[i];
    MoveZeros(nums);
    for(int num:nums)cout<<num<<" ";
    cout<<endl;
    return 0;
}