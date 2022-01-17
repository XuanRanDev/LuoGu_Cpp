#include "bits/stdc++.h"

using namespace std;

int P,res[1010],num[1010],sav[1010];

void Cheng2();

void Cheng1();

int main(){

    cin >> P;
    cout << (int)(P * log10(2) + 1);
    num[1] = 2;
    res[1] = 1;
    while (P > 0){
        if ( (P & 1) == 1) Cheng1();
        P >>= 1;
        Cheng2();
    }

    res[1] --;
    for (int i = 500; i >= 1 ; i--) {
        if (i % 50 == 0) cout << endl;
        cout << res[i];
    }

    return 0;
}

void Cheng1() {
    memset(sav,0, sizeof(sav));
    for (int i = 1; i <= 500; i++) {
        for (int j = 1; j <= 500; j++) {
            sav[i + j - 1] += res[i] * num[j];
            sav[i + j] += sav[i + j - 1] / 10;
            sav[i +j - 1] %= 10;
        }
    }
    memcpy(res,sav,sizeof (res)); //执行数组拷贝

}

void Cheng2() {
    memset(sav,0,sizeof(sav));
    for (int i = 1; i <= 500; i++) {
        for (int j = 1; j <= 500; j++) {
            sav[i + j - 1] += num[i] * num[j];
            sav[i + j] += sav[i + j - 1] / 10;
            sav[i +j - 1] %= 10;
        }
    }
    memcpy(num,sav,sizeof (num)); //执行数组拷贝


}
