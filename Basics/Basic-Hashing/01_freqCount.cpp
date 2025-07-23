//Aman Kumar Sharma
//Counting frequencies of array elements
#include<bits/stdc++.h>
using namespace std;

vector<int> CountFrequency(vector<int>& arr){
    int n=arr.size();
    vector<int>ans(n,0);
    unordered_map<int, int>freq;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    for(int i=1; i<=n; i++){
        ans[i-1]=freq[i];
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
    vector<int>result=CountFrequency(arr);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
