//
// Created by XuanRan on 2022/3/10.
//

#include "bits/stdc++.h"

using namespace std;

string startStr, endStr;
string a[10];
string b[10];
int index1 = 1;
queue<string> q;
queue<int> s;
map<string, int> mm;

int main() {

    cin >> startStr >> endStr;

    while (cin >> a[index1] >> b[index1]) {
        index1++;
    }

    q.push(startStr);
    s.push(0);

    while (!q.empty()) {
        string info = q.front();
        int step = s.front();
        q.pop();
        s.pop();
        if (info == endStr) {
            cout << step << endl;
            return 0;
        }
        if (step == 10) {
            cout << "NO ANSWER!" << endl;
            return 0;
        }

        for (int i = 1; i <= index1 - 1; i++) {
            string aStr = a[i];
            string bStr = b[i];
            int p = 0;
            while (info.find(aStr, p) != -1) {
                p = info.find(aStr, p);
                string n = info.substr(0, p) + bStr + info.substr(p + aStr.length());
                p++;
                if (mm[n] != -1) {
                    q.push(n);
                    s.push(step + 1);
                    mm[n] = -1;
                }

            }
        }


    }

    cout << "NO ANSWER!" << endl;

    return 0;
}