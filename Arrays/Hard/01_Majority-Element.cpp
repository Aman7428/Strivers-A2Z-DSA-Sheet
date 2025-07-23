//Aman Kumar Sharma
//Majority Element II (leetcode-229)
#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& arr){
    int n=arr.size();
    vector<int>ans;
    unordered_map<int, int>freq;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    for(auto it:freq){
        if(it.second>n/3){
            ans.push_back(it.first);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int>result=majorityElement(arr);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}