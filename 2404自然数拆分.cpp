#include "bits/stdc++.h"

using namespace std;

int N; 
int ans[200],s;
int buy[100];


void print(int x){
	
	for(int i = 1 ; i <= x ; i++){
		
		int b = buy[i];
		
		for(int k = 1 ; k <= b; k++){
			ans[s++] = i;
			
//			if( i == 1 || i == x ){
//				if(k>1 && k <= b) cout << "+"; 
//			}
//			//	if(i != 1 && k!= 1 || i != x && k != 1)cout << "+";
//			
//			cout << i; 
		}
		
		
	}
	
	for(int i = 0 ; i < s ; i++){
		
		cout << ans[i];
		if( i!= s-1) cout << "+";
	}
	s = 0;
	cout << endl;
	
}

void dfs(int x,int sum){
	
	if( x > N || sum > N || x == N) return;
	
	if(sum == N){
		print(x);
		return;
	} 
	
	buy[x]++;
	dfs(x,x+sum);
	buy[x]--;
	dfs(x+1,sum);
	
}

int main(){
	
	cin >> N;

	dfs(1,0); 
	
	return 0;
}
