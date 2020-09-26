#include <bits/stdc++.h>
using namespace std;
void printpermute(string str, int i, int n){
    if(i==n-1){
        cout<<str<<endl;
        return;
    }
    else {
        for(int j=i; j<n; j++){
            swap(str[i], str[j]);
            printpermute(str, i+1, n);
            swap(str[i], str[j]);
        }
    }
}

void permute(string str, int n){
    printpermute(str, 0, n);
}

int main(){
    string str;
    cin>>str;
    permute(str, str.size());
}
