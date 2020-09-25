#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int digitsum(int n, int sum){
    if(n){
        return digitsum(n/10, sum+(n%10));
    }
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        cout<<digitsum(n,sum)<<endl;
    }
    return 0;
}

