#include "bits/stdc++.h"

using namespace std;


int N , M , T;
int dt[6][6];
int za[6][6]; 
int QD_X,QD_Y,ZD_X,ZD_Y;

int flag[6][6];
int ans;

int xx[] = {0,-1,0,1};
int yy[] = {-1,0,1,0};
 
void dfs(int x,int y){
	if(x == ZD_X && y == ZD_Y){
		ans++;
	}
	
	for(int i = 0 ; i < 4 ; i++){
		
		int dx = xx[i] + x;
		int dy = yy[i] + y;
		
		if(dx > 0 && dx <= N && dy > 0 && dy <= M && !flag[dx][dy] && za[dx][dy] != -1){
			flag[dx][dy] = 1;
			dfs(dx,dy);
			flag[dx][dy] = 0;
		}
	}
	
	
}

int main(){
	
	cin >> N >> M >> T;
	
	cin >> QD_X >> QD_Y;
	
	cin >> ZD_X >> ZD_Y;
	
	for(int i = 0 ; i < T ; i++){
		int x,y;
		cin >> x >> y;
		za[x][y] = -1;
	}
	
	flag[QD_X][QD_Y] = -1; // 开始就走过这个点
	
	dfs(QD_X,QD_Y); 
	
	
	cout << ans;
	
	return 0;
}
