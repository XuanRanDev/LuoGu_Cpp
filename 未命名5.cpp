#include "bits/stdc++.h"

using namespace std;


int N;
int ans = 0x7ffff;
struct node{
	int sd,kd;
}data[50];

void dfs(int n,int sum ,int sum2 , int flag){
	
	if( n > N){
		
		if( flag ){
			ans = min(ans,abs(sum - sum2));
		}
		return;
	}
	
	dfs(n+1,sum,sum2,0);
	dfs(n+1,sum * data[n].sd , sum2 + data[n].kd,1); 
	
}

int main(){
	
	cin >> N;
	
	for(int i = 1 ;  i <= N ; i ++){
		cin >> data[i].sd >> data[i].kd;
	}
	
	dfs(1,1,0,0); //第n项 积 和 是r否只选了一项 
	
	cout << ans;
	

	return 0;
} 
