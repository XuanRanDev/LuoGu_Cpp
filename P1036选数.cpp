#include "bits/stdc++.h"

using namespace std;

int N,K,ans;
int a[25]; 

bool isPrime(long long x){
	if(x < 2) return 1;
	//if(x == 2 ) return 0;
	for(int i = 2 ; i*i <= x; i++){
		if(x%i == 0) return 0;
	}
	return 1;
}


void dfs(int x,int num,long long sum){
	
	if(x>N) return;
	if(num == K){
		if(isPrime(sum)){
			ans++;
		}
		return;
	}
	
	dfs(x+1,num+1,sum+a[x]); //ัก 
	dfs(x+1,num,sum); //ฒปัก 
	
}



int main(){
	
	cin >> N >> K;
	
	for(int i = 0 ; i < N ; i++){
		
		cin >> a[i];
	}
	
	dfs(0,0,0);
	
	cout << ans;
	
}

