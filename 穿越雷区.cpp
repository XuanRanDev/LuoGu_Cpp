#include "bits/stdc++.h"

using namespace std;

int mp[105][105];
int N;
bool vis[105][105];

//上下左右 
int xx[] = {0,1,0,-1};
int yy[] = {1,0,-1,0}; 
int ans = 0x7fffffff;

int qd_x,qd_y,zd_x,zd_y; //起点和终点坐标 

int main(){
	
	cin >> N;
	
	char c;
	
	
	for(int i = 1 ; i <= N  ; i++){
		
		for(int k = 1 ; k <= N ;k++){
			
			cin >> c;
			
			if(c == 'A'){
				qd_x = i;
				qd_y = k;
				mp[i][k] = -2;
			}else if( c == 'B'){
				zd_x = i;
				zd_y = k;
				mp[i][k] = 2;
			}else if( c == '+'){
				mp[i][k] = 1;
			}else{
				mp[i][k] = -1;
			}
			
		}
		
	}
	
	queue<int> step;
	queue< pair<int,int> > q;
	
	q.push(make_pair(qd_x,qd_y));
	step.push(0);// 压入 
	vis[qd_x][qd_y] = 1;
	
	while( ! q.empty() && !step.empty() ){
		
		int fx = q.front().first;
		int fy = q.front().second;
		int st = step.front(); 
		
		//cout << " st : " << st << "FX：" << fx << " " << fy << endl;
		
		int b = mp[fx][fy]; // 当前符号 
		
		step.pop(); //弹出 
		q.pop();
		
		
		if( fx == zd_x && fy == zd_y && mp[fx][fy] == 2){ //到达终点 
			ans = min(ans,st);//最小步数
			cout << ans << endl; 
			return 0;  //bfs 找最短 所以找到就可以return了 
		}
		
		for(int i = 0 ;  i < 4  ; i++){
			
 			int dx = xx[i] + fx;
 			int dy = yy[i] + fy;
 			
			  
 			if( dx >= 1 && dx <= N && dy >= 1 && dy <= N && !vis[dx][dy] ){
 				
 				int f = mp[dx][dy]; //新符号
 				//防止越界还是再写一层if吧,此外-1表- 1表+ -2表起点 2表终点 
 				
 				if( b == -2){ //如果是第一步的话应该任何符号都可以走 
 					q.push(make_pair(dx,dy));
 					vis[dx][dy] = 1;
 					step.push(st+1);
					continue;		
				 } else if( b == 1 && f == -1){ //+ 到 - 
				 	q.push(make_pair(dx,dy));
 					vis[dx][dy] = 1;
 					step.push(st+1);
 					continue;
				 } else if( b == -1 && f == 1){ //相反 
				 	q.push(make_pair(dx,dy));
 					vis[dx][dy] = 1;
 					step.push(st+1);
					 continue;
				 }else if( (b == 1 || b == -1) && f == 2){ //差点把终点给忘了 ,【少加了个括号找了半天错误操 】 
				 	q.push(make_pair(dx,dy));
 					vis[dx][dy] = 1;
 					step.push(st+1);
 					continue;
				 }else {
				 	vis[dx][dy] = 1;
//				 	cout << "Dx : " << mp[dx][dy]  << " fx :" << mp[fx][fy]  << endl;
				 	continue;//其他情况没什么好说的了 
				 }
				  			
			}
 			
			
		}
		
	}
	
	
	cout << -1; //跑完了都没找到肯定无解呗 
	
	
	
	
	return 0;
} 
