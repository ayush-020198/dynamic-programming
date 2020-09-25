#include <bits/stdc++.h>
using namespace std;

bool chkpalin(char s[], int i, int j){
    if(i>=j) return true;
    if(s[i]!=s[j]) return false;
    cout<<i<<" "<<j<<endl;
    return chkpalin(s, i+1, j-1);
}

int main(){
    char n[10000];
    int numele;
    cin>>numele;
    for(int i=0; i<numele; i++){
        cin>>n[i];
    }
    int i=0;
    int j=numele-1;
    cout<<chkpalin(n,i,j);
}








