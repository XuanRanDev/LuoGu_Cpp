#include "bits/stdc++.h"

using namespace std;


int qd_x , qd_y,zd_x,zd_y; // ���x y �� �յ�x y;
int n,m,t;//nΪ�У�mΪ�У�tΪ�ϰ��� 
int mg[10][10];//��ͼ 
int za[10][10];//�ϰ�  
int ans = 0;
int xx[] = {1,0,-1 ,0};
int yy[] = {0,-1,0,1} ;
bool flag[20][20];

void dfs(int x , int y ){
	
	if( x == zd_x && y == zd_y ){
		ans++;
		return;	
	} 
	
	for(int i = 0 ; i < 4 ; i++){
		
		int dx = xx[i] + x;
		int dy = yy[i] + y;
		
		if(dx > 0 && dx <= n && dy > 0 && dy <= m &&  !flag[dx][dy] && za[dx][dy] != -1){
			flag[dx][dy] = 1;
			dfs(dx,dy);
			flag[dx][dy] = 0;
		}
	}
	
}

int main(){
	
	cin >> n >> m >> t; //���� 
	
	 
	cin >> qd_x >> qd_y;
	cin >> zd_x >> zd_y;
	
	for(int i = 1 ; i <= t ; i++){
		
		int x,y;
		cin >> x >> y;
		za[x][y] = -1;//����ϰ� 
		
	}
	flag[qd_x][qd_y] = -1;
	dfs(qd_x,qd_y);//����㿪ʼ���� 
	
	
	cout << ans; 
	
	
	return 0;
}
