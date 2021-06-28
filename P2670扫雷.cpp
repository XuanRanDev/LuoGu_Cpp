	#include "bits/stdc++.h"
	
	using namespace std;
	
	int N,M;
	char mp[105][105];
	int ans[105][105];
	bool flag[105][105];
	
	//°Ë¸ö·½Ïò 
	int xx[] = {0,1,0,-1,1,-1,-1,1};
	int yy[] = {1,0,-1,0,1,1,-1,-1};
	
	void dfs(int x,int y ){
		
		if( x > N && y > M) return;
		
		if(mp[x][y] == '*'){
			ans[x][y] = -1;	
		}else{
			
			int temp = 0;
			
			for(int i = 0 ; i < 8 ; i++){
				
				int dx = xx[i] + x;
				int dy = yy[i] + y;
				
				if(mp[dx][dy] == '*'){
					temp++;
				}
				
			}
			ans[x][y] = temp;		
		}
		
		
		for(int i = 0 ; i < 4 ; i++){
			
			int dx = xx[i] + x;
			int dy = yy[i] + y;
			
			
			if( dx>= 1 && dx <= N+1 && dy >= 1 && dy <= M+1 && !flag[dx][dy])
			{
				flag[dx][dy] = 1;
				dfs(dx,dy);
			//	flag[dx][dy] = 0;
			}
			
		}
		
	}
	
	
	
	int main(){
		
		cin >> N >> M;
		
		for(int i = 1 ; i <= N ;i++){
			
			for(int k = 1 ; k <= M ;k++){
				
				cin >> mp[i][k];
			}
			
		}
		
		dfs(1,1);
		
		for(int i = 1 ; i <= N ;i++){
			
			for(int k = 1 ; k <= M ;k++){
				
				if(ans[i][k]==-1){
					cout << '*'  ;
				}else{
					cout << ans[i][k]  ;
				}
			}
			
			cout << endl;
		}
		
		return 0;
	}
