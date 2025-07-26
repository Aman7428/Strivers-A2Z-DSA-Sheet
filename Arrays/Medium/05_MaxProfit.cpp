//Aman Kumar Sharma
//Best Time to Buy and Sell Stock (leetcode-121)
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& arr){
    int n=arr.size();
    int mini=arr[0], profit=0, maxProfit=0;
    for(int i=1; i<n; i++){
        profit=arr[i]-mini;
        maxProfit=max(maxProfit, profit);
        mini=min(mini, arr[i]);
    }
    return maxProfit;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    cout<<maxProfit(arr)<<endl;
    return 0;
}