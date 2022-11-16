#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,a,b) for(ll i = a; i<= b ; i++)
#define loopr(i,a,b) for(ll i = a; i>=b ; i--)
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define nn <<"\n"
#define all(x) (x).begin(), (x).end()
#define in INT_MAX

int main(int argc,char const * argv[]){
    string s;
    cin>>s;
    ll t=0;
    ll a=s.size();
    for(int i=0;i<=a-1;i++){
        if(s[i]==s[i+1]){
            t++;
            s.erase(i,2);
            a=s.size();
            if(i!=0){
                i=i-2;
            }
            else{
                i=i-1;
            }
            
            
        }
    }
    if(t%2==0){
        no;
    }
    else{
        yes;
    }
    
    return 0;
}