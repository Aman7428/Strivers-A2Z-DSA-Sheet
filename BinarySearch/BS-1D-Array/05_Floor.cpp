//Aman Kumar Sharma
//Floor in a Sorted Array
#include<bits/stdc++.h>
using namespace std;

int findFloor(vector<int>& arr, int x){
    int n=arr.size();
    int ans=n, low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>x)high=mid-1;
        else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];
    int x;
    cin>>x;
    cout<<findFloor(arr, x)<<endl;
    return 0;
}