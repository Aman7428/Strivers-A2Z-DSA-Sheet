//Aman Kumar Sharma
//Array Leaders
#include<bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int>& arr){
    int n=arr.size();
    vector<int>ans;
    int maxRight=arr[n-1];
    ans.push_back(arr[n-1]);
    for(int i=n-2; i>=0; i--){
        if(arr[i]>=maxRight){
            maxRight=arr[i];
            ans.push_back(maxRight);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    vector<int>result=leader(arr);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}