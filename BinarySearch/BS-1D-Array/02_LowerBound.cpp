//Aman Kumar Sharma
//Implement Lower Bound
#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int target){
    int n=arr.size();
    int ans=n;
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=target){
            high=mid-1;
            if(arr[mid]>=target)ans=mid;
        }
        else{
            low=mid+1;
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
    int target;
    cin>>target;
    cout<<lowerBound(arr, target)<<endl;
    return 0;
}