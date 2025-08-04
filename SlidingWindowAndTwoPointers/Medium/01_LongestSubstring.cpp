//Aman Kumar Sharma
//Longest Substring Without Repeating Characters (leetcode-3)
#include<bits/stdc++.h>
using namespace std;

int longestSubstringLength(string s){
    int n=s.size();
    int len=0, maxLen=0;
    
    for(int i=0; i<n; i++){
        vector<int>hash(256,0);
        for(int j=i; j<n; j++){
            if(hash[s[j]]==1)break;
            len=j-i+1;
            maxLen=max(len, maxLen);
            hash[s[j]]=1;
        }
    }
    return maxLen;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<longestSubstringLength(s)<<endl;
    return 0;
}