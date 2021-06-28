#include "bits/stdc++.h"

using namespace std;

int mp[1050][1050];
int N,M;
int xx[] = {0,1,0,-1};
int yy[] = {1,0,-1,0};
int vis[1050][1050];
int ans;

void dfs(int w ,int e){
	
	queue< pair<int,int> > q;
	
	q.push( make_pair(w,e));
	
	vis[w][e] = 1;
	
	while( !q.empty() ){
		
		int fx = q.front().first;
		int fy = q.front().second;
		
		for(int i = 0 ; i < 4 ; i++){
			
			int dx = fx + xx[i];
			int dy = fy + yy[i];
			
			if( dx >= 1 && dx <= N && dy >= 1 && dy <= N && !vis[dx][dy]){
				
				if(mp[dx][dy] != mp[fx][fy]){
					
					vis[dx][dy] = 1;
					q.push( make_pair(dx,dy) );
					ans++;
					
				}
				
			}
			
		}
		
		if(ans == 0 ){
			ans++;
		}		
		
		
		q.pop();
			
	}
	
	
}

int main(){
	
	cin >> N >> M;
	
	char c;
	for(int i = 1 ; i <= N ; i++){
		for(int k = 1 ; k <= N ; k++){
			cin >> c;
			mp[i][k] = c-'0';	
		}
	}
	
	for(int i = 1 ; i <= N ; i++){
		
		for(int k = 1  ;  k <= N ; k++){
				
			if(!vis[i][k]){
				bfs(i,k);
			}
			
		}
		
	}
	
	while(M--){
		
		ans = 0;
		
		memset(vis,0,sizeof(vis));
		
		queue< pair<int,int> > q;
		
		int t,r;
		
		cin >> t >> r;
		
		q.push(make_pair(t,r)); 
		
		while( !q.empty() ){
			
			int fx = q.front().first;
			int fy = q.front().second;
			
			int cur = mp[fx][fy];
			
			
			q.pop();
			
			for(int i = 0  ; i < 4 ; i++){
			
				int dx = xx[i] + fx;
				int dy = yy[i] + fy;
				
			
				if( dx >= 1 && dx <= N && dy >= 1 && dy <= N && !vis[dx][dy] ){
					
					if( cur != mp[dx][dy] ){
						vis[dx][dy] =1;
						q.push(make_pair(dx,dy));
						ans++;
					}
	
				}
			
			}
			
		}

		if(ans == 0){
			ans++;
		}
		
		cout << ans << endl;

		
	}
	
	return 0;
} 
