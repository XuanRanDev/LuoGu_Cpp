#include "bits/stdc++.h"

using namespace std;

typedef long long LL;
const int MANX = 1e4 * 5 + 1111;

int N,T;
LL flag[MANX];
LL data[MANX];

int main(){

    cin >> T;

    while(T--){

        memset(data,0, sizeof(LL) * MANX);
        memset(flag,0, sizeof(LL) * MANX);

        cin >> N;

        for (int i = 1; i <= N; i++) {
            scanf("%lld",&data[i]);
        }
        
        for (int i = 1; i <= N; i++) {
        	
			int index = 0;
        	if(data[i] < 0){
        		index = data[i] * -321 / 123 % 5211314;
			}else{
				index = data[i] * 321 / 123 % 5211314;
			}


            index  = abs(index); 


            if (flag[index]){
                continue;
            }
            flag[index] = 1;

            printf("%lld ",data[i]);

        }
        cout << endl;

    }


    return 0;
}
