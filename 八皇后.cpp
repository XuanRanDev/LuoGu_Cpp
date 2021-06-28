#include "bits/stdc++.h"

using namespace std;

int N;
int lie[20],x1[40],x2[40]; //数组一定要开大一点 
int a[20];
int sum;
int vis[20];

void print(){
	
	if(sum > 3){
		return;
	}
	
	for(int i = 1 ; i <= N ; i++){
		cout << a[i] <<" ";
	}
	
	cout << endl;
	
	
}


void dfs(int x){
	
	if( x > N){
		sum++;
		print();
		
		return; 
	}
	
	for(int i = 1 ; i <= N ; i++){
		
		if( !lie[i] && !x1[x-i+N] && !x2[x+i]){
			
			lie[i] = 1;
			x1[x-i+N] = 1;
			x2[i+x] = 1;
			a[x] = i; 
			dfs(x+1);
			lie[i] = 0;
			x1[x-i+N] = 0;
			x2[i+x] = 0;
		}
		
	}
	
	
}

int main(){
	
	cin >> N;
	
	dfs(1);
	
	cout << sum;
	
	
	return 0;
}
