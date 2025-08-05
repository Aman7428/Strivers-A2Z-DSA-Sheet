//Aman Kumar Sharma
//Fruit Into Baskets (leetcode-904)

#include<bits/stdc++.h>
using namespace std;

int totalFruits(vector<int>& fruits){
    int n=fruits.size();
    int l=0, r=0, maxlen=0;
    unordered_map<int, int>mp;
    while(r<n){
        mp[fruits[r]]++;
        while(mp.size()>2){
            mp[fruits[l]]--;
            if(mp[fruits[l]]==0){
                mp.erase(fruits[l]);
            }
            l++;
        }
        maxlen=max(maxlen, r-l+1);
        r++;
    }
    return maxlen;
}
int main(){
    int n;
    cin>>n;
    vector<int>fruits(n);
    for(int i=0; i<n; i++)cin>>fruits[i];
    cout<<totalFruits(fruits)<<endl;
    return 0;
}