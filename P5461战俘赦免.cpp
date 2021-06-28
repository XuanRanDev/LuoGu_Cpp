#include "bits/stdc++.h"

using namespace std;

int mp[5000][5000];
int N;
int T;

void dfs(int B,int x,int y){
	
	if(B==2){
		mp[x][y] = 1;
		return;
	}
	
	for(int i = x ; i <= x+B/2-1 ; i ++ ){
		
		for(int k = y ;  k <= y+B/2-1 ; k++){
			mp[i][k] = 1;
		}
	}
	
	dfs(B/2,x+B/2,y);//вс 
	dfs(B/2,B/2+x,y+B/2);
	dfs(B/2,x,y+B/2);
	
	
} 

int main(){
	
	cin >> N;
	
	T = (2 << (N-1));
	
	dfs(T,1,1);
	
	for(int i = 1 ; i <= T ;i ++){
		
		for(int k = 1 ; k <= T ; k++){
			
			if(mp[i][k] == 1){
					cout <<0 <<" ";
			}else{
					cout <<1 <<" ";
			}
		
		}
		
		cout  << endl;;
		
	}
	
	
	
	
	
	
	return 0;
} 
