#include "bits/stdc++.h"

using namespace std;

int mp[1050][1050];
int N,M;
int flag[1050][1050];
int xx[] = {0,1,0,-1};
int yy[] = {-1,0,1,0};

struct da{
	int x,y,zx,zy;
}data[1010];


void dfs(int x,int y,int z,int d,int q,int w){
	
	
	if( x == z && y == d){
		mp[x][y] ++;
		return;
	}
	
	mp[x][y] ++;
	
	for(int i = 0 ; i < 3 ; i++){
		int dx = x + xx[i];
		int dy = y + yy[i];
		
		if( dx >= q && dx <= z && dy >= w && dy <= d ){
			flag[dx][dy] = 1;
			dfs(dx,dy,z,d,q,w);
		//	flag[dx][dy] = 0;
		}
	}
	
}

int main(){
	
	cin >> N >> M;
	
	for(int i = 0 ; i < M ; i++){
		cin >> data[i].x >> data[i].y;
		cin >> data[i].zx >> data[i].zy;
	}
	
	for(int i = 0 ; i < M ; i++){
		dfs(data[i].x,data[i].y,data[i].zx,data[i].zy,data[i].x,data[i].y);
	}
	
	for(int i = 0 ;  i< N ;i++){
		
		for(int j = 0 ; j < N ; j++){
			cout << mp[i][j] << " ";
		}
		cout << endl;
	}
	
		
	
	
	
	
	return 0;
}
