#include "bits/stdc++.h"
#include "queue"

/*
 * 使用bfs(广度优先搜索)解题 
 *
 */

using namespace std;

int N; 
int dt[35][35];
bool flag[35][35];
int xx[] = {0,1,0,-1};
int yy[] = {1,0,-1,0};

int main(){
	
	cin >> N;
	
	for(int i = 1 ; i <= N ; i++){
		for(int j = 1; j <= N ; j++ ){
			cin >> dt[i][j];
		}
	}
	
	queue < int > x;
	queue < int > y;
	x.push(0);
	y.push(0);
	
	flag[0][0] = 1;
	
	while( !x.empty() && !y.empty() ){ //如果队列不为空则取数
		
		for(int i = 0 ; i < 4 ; i++){
			
			int dx = x.front() + xx[i];
			int dy = y.front() + yy[i]; 
			
			if( dx >= 0 && dx <= N+1 && dy >= 0 && dy <= N+1 && !flag[dx][dy] && dt[dx][dy] == 0 ){
				
				x.push(dx);
				y.push(dy);
				flag[dx][dy] = 1;
			} 
			
			
			
		}
		x.pop();
			y.pop();
	}
	
	for(int i = 1 ; i <= N ; i++){
		for(int j = 1; j <= N ; j++ ){
			if(dt[i][j] == 0 && flag[i][j] == 0){
				cout << 2;
			} else{
				cout << dt[i][j];
			}
			cout << " ";
		}
		cout << endl;
	}
	
	
	
}
 
