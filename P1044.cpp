#include "bits/stdc++.h"

using namespace std;
long long ans[1000] = {1};

int main(){

    int n;

    cin >> n;

    for(int i = 1; i <= n ; i ++){
        for(int j = 0 ; j < i ; j ++){
            ans[i] += ans[j] * ans[i - 1 - j];
            ans[i] %=  100;
        }
    }

    cout << ans[n] ;

}