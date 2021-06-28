#include "bits/stdc++.h"

using namespace std;


int c[105],v[105];
int dp[1005];

 
int main(){
	
	int T , M;
	
	cin >> T >> M;
	
	  
	for(int i = 0 ; i < M ; i++){
		cin >> c[i] >> v[i]; 
	} 
	
	for(int i = 0 ; i < M ; i++){
		
		for(int j = T ; j >= c[i] ; j--){
			
			dp[j] = max(dp[j],dp[j-c[i]]+v[i]);
		}
	}
	
	
	cout << dp[T];
	return 0;
}
