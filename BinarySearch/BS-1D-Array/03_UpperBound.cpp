//Aman Kumar Sharma
//Implement Upper Bound
#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int>& arr, int target){
    int n=arr.size();
    int ans=n, low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]<=target){
            low=mid+1;
        }
        else{
            high=mid-1;
            if(arr[mid]>target)ans=mid;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    int target;
    cin>>target;
    cout<<upperBound(arr, target)<<endl;
    return 0;
}