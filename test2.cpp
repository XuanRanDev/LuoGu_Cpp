//
// Created by XuanRan on 2022/3/4.
//
#include "bits/stdc++.h"

using namespace std;

map<int, int> m;

int main() {
    for (int i = 1; i <= 100000; i++) {
        int num = i * i;
        int num2 = i * i * i;
        while (num != 0 && num2 != 0) {
            int yu = num % 10;
            num /= 10;
            if (m[yu] != -1) m[yu] = -1;
            else continue;
        }

        if (m.size() == 10) {
            cout << i;
            return 0;
        } else m.clear();
    }


}
