#include "bits/stdc++.h"

using namespace std;

int N;
int f[500][500];

int main(){
	
	cin >> N;
	
	for(int i = 1 ;  i<= N ;  i++){
		
		for(int k = 1 ;  k <= i ; k++){
			cin >> f[i][k];
		}
	}
	
	
	for(int i = 1 ; i <= N; i ++){
		
		
		for(int k =1 ; k <= i ; k ++){
			
			f[i][k] += max(f[i-1][k],f[i-1][k-1]); 
			
		}
		
	}
	
	//差值不超过1，代表最后肯定落在中间的一个数或者两个数之中 
	if( N % 2 == 1){
		cout << f[N][N / 2 +1];
	}else{
		cout << max(f[N][N/2],f[N][N/2+1]);
	}
	
	
	
	
	
	
	
	return 0;
} 
