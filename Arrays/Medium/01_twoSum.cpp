//Aman Kumar Sharma
//Two Sum
#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    int n=nums.size();
    vector<int>ans;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans;
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
    vector<int>result=twoSum(nums, target);
    if(!result.empty()){
        cout<<result[0]<<" "<<result[1]<<endl;
    }
    else{
        cout<<"no pair found"<<endl;
    }
    return 0;
}