//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int N,M,T,P;//终点x和y坐标，障碍数，需要mod几
int qd_x = 0,qd_y = 0;

int dt[10000][10000];
int za[10000][10000];
bool flag[10000][10000];

int xx[] = {1,0,-1 ,0};
int yy[] = {0,-1,0,1} ;
long long ans = 0;


void dfs(int x,int y){
    
    if(x==N && y==M){
        ans++;
        return;
    }
    
    for(int i = 0;i <4;i++){
    	
        int dx = xx[i] + x ;
        int dy = yy[i] + y;
        
		if(dx >= 0 && dx <= N && dy >= 0 && dy <= M &&  !flag[dx][dy] && za[dx][dy] != -1){
			flag[dx][dy] = 1;
			dfs(dx,dy);
			flag[dx][dy] = 0;
		}
        
        
    }
    
}

int main()
{
    cin >> N >> M >> T >> P;
    
    for(int i =0 ; i < T ; i++){
        
        int a,b;
        
        cin >> a >> b;
        
        za[a][b] = -1;
        
    }

    flag[0][0] = 1;
    dfs(0,0);
    
	cout << ans % P  ;
}

