#include "bits/stdc++.h" 

using namespace std;
/* 
 * 思路：因为会围出一个形状，只要在搜索到1之前把所有的数字全部标记，
 *       然后输出判断即可 
 *
 */

int N;
int dt[35][35];

int xx[] = {0,1,0,-1};
int yy[] = {1,0,-1,0};
bool flag[35][35];


void dfs(int x , int y){
	
	if(dt[x][y] == 1) return; 
	
	for(int i = 0; i < 4; i++){
		
		int dx = xx[i] + x;
		int dy = yy[i] + y;
		
		if(dx >= 0 && dx <= N+1 && dy >= 0 && dy <= N+1 && dt[dx][dy] == 0) {
			dt[dx][dy] = -1;
			dfs(dx,dy);
		}
		
		
	}
	
	
}

int main(){
	
	cin >> N;
	
	for(int i = 1 ; i <= N ; i++){
		
		for(int j = 1 ; j <= N ; j++){
			
			cin >> dt[i][j];//read 
			
		}
		
		
	}
	
	dfs(0,0);//模拟边界 

	for(int i = 1 ; i <= N ; i++){
		
		for(int j = 1 ; j <= N ; j++){
			
			if(dt[i][j] == 0 ){
				cout << 2 << " ";
			}else if(dt[i][j] == -1){
				cout << 0 << " ";
			}else{
				cout << 1 << " ";
			}
			
		}
		cout << endl;
		
	}

	return 0;
} 
