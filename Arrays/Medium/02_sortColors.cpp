#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums){
    int n=nums.size();
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]>nums[j])swap(nums[i], nums[j]);
        }
    }
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
    sortColors(nums);
    for(int it: nums){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}