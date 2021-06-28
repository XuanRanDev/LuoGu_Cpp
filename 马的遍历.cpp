#include "bits/stdc++.h"


using namespace std;

int N,M,m1,m2;

int xx[] = {1,2,2,1,-1,-2,-2,-1};
int yy[] = {2,1,-1,-2,-2,-1,1,2};
int vis[500][500];
int mp[500][500];

int main(){
	
	for(int i = 1 ; i <= 500 ; i++){
		for(int k = 1 ; k <= 500 ; k++){
			mp[i][k] = 999999;
		}
	}
	
	cin >>  N >> M >> m1 >> m2;
	
	queue<int> x;
	queue<int> y;
	
	mp[m1][m2] = 0;
	vis[m1][m2] = 1;
	x.push(m1);
	y.push(m2);
	int e = 0;
	while( !x.empty() && !y.empty()) { //队列不为空
	
//	cout << e++ << " " << x.size() << "  " << y.size()<< endl;
		
		int dx = x.front();
		int dy = y.front(); //拿到队首元素
		
		x.pop();
		y.pop();	
		
		for(int i = 0 ; i < 8 ; i++){
			int fx = dx + xx[i];
			int fy = dy + yy[i];
			
			if( fx >= 1 && fx <= N && fy >= 1 && fy <= M && !vis[fx][fy]){
				vis[fx][fy] = 1;
				x.push(fx);
				y.push(fy);
				
				mp[fx][fy] = min(mp[fx][fy],mp[dx][dy]+1);
				//vis[fx][fy] = 0;
			}
			
		} 
		
	
	}
	
	
	for(int i = 1 ; i <= N ; i++){
		for(int k =1 ; k <= M ; k++){
			
			if(mp[i][k] == 999999){
				printf("%-5d",-1);
				continue;
			}
			printf("%-5d",mp[i][k]);
			
		}
		
		cout << endl;
	}
	
	
	
	return 0;
}
