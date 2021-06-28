#include "bits/stdc++.h"

using namespace std;


int N,M;
int dp[1000] = {0};
int c[110];

int main(){
	
	cin >> N >> M;
	
	
	for(int i = 1 ; i <= N ; i++){
		cin >> c[i];
	}
	
	for(int i = 1 ;  i <= N ;  i++){
		
		for(int k = M ; k >= c[i] ; k --){
			dp[k] += dp[k-c[i]];
		}
	}
	
	cout << dp[M];
	
	
	return 0;
}
