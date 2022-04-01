//
// Created by XuanRan on 2022/4/1.
//
#include "bits/stdc++.h"

using namespace std;

int A,B,L;
int ans,res,diff = 0x3f3f3f3f;

int t1;

int t2;

int gcd(int x, int y ){
    return y == 0 ? x : gcd(x, y % x);
}

int main(){

    cin >> A >> B >> L;

    for (int i = 1; i <= L; i++) {
        for (int j = 1; j <= L; j++) {
            if (gcd(i,j) && i * B >= j * A && i * t2 < j * t1)
            {
                t1 = i;
                t1 = j;
            }
        }
    }

    cout << t1 << " " << t2;

    return 0;
}