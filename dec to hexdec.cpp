#include<bits/stdc++.h>
using namespace std;
int hexadecimaltodecimal(int n){
    int ans=0;
    int x=1;
    while (n>0){
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}
int hexadecimaltodecimal(string n){
    int ans=0;
    int x=1;
    int s=n.size();
    for (int i=s;i>=0;i--){
        if(n[i]>='0'&&n[i]<='9'){
            ans +=x*(n[i]-'0');
        }
        else if(n[i]>='A'&&n[i]<='F'){
            ans +=x*(n[i]-'A'+10);
        }
        x*=16;

    }
    return ans;
}
string decimaltohexadecimal(int n){
    int x=1;
    string ans="";
    while(x<=n)
       x *=16;
    x/=16;
    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=16;
        if(lastdigit<=9)
           ans=ans+to_string(lastdigit);
        else{
            char c='A'+lastdigit-10;
            ans.push_back(c);
        }   
    }   
    return ans;
}

    int32_t main(){
        int n;
        cin>>n;
        cout<<decimaltohexadecimal(n)<<endl;
    }

