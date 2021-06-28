#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

int N;
LL mp[105][105];
LL K;
LL mod = 1e9+7;


void QuickPower(int x,int y){
	LL pow = K;
	LL ans = 1;
	LL num = mp[x][y];
	
	if(pow ==0 && mod == 1){
		mp[x][y] = 0;
		return;	
	}
	
	while(pow){
		if(pow & 1) ans = ans * num % mod;
		pow >>= 1;
		num = num * num % mod;
	}
	mp[x][y] = ans;
	
}

void getPower(int x,int y){

 	int	q = mp[x][y];
	int w = K;
	int e = mod;
	
	LL res = 1;
	
	while(w){
		if(w & 1) res = res * q % e;
		w >>= 1;
		q = q * q % e;
	}
//	if(b==0 && c == 1) res = 0;
	
	mp[x][y] = res;
	
	return;
	
	
}

int main(){
	
	
	cin >> N >> K;
	

	for(int i = 1 ; i  <= N ; i++){
		
		for(int a = 1 ; a <= N ; a++){
			
			cin >> mp[i][a];
			
		}
	}
	
	
	for(int i = 1 ; i  <= N ; i++){
		
		for(int a = 1 ; a <= N ; a++){
			
			getPower(i,a);
			
		}
	}
	
	
	
	for(int i = 1 ; i  <= N ; i++){
		
		for(int a = 1 ; a <= N ; a++){
			cout << mp[i][a] <<" " ;
		}
		cout << endl;
	}
	
	
	
	
	
	
	
	
	return 0;
}
