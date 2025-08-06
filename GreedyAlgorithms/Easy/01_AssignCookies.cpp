//Aman Kumar Sharma
//Assign Cookies (leetcode-455)
#include<bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int>& greed, vector<int>& cookies){
    int m=greed.size(), n=cookies.size();
    int l=0, r=0;
    sort(greed.begin(), greed.end());
    sort(cookies.begin(), cookies.end());

    while(l<m && r<n){
        if(greed[l]<=cookies[r]){
            l++;
            r++;
        }
        else r++;
    }
    return l;
}
int main(){
    int m, n;
    cin>>m;
    vector<int>greed(m);
    for(int i=0; i<m; i++)cin>>greed[i];
    cin>>n;
    vector<int>cookies(n);
    for(int i=0; i<n; i++)cin>>cookies[i];
    cout<<findContentChildren(greed, cookies);
    return 0;
}