#include "bits/stdc++.h"

using namespace std;

/*
 *	做题收获：使用字典序排序结果的时候
 *			  最好的方法是使用字典序相对应的方向先走
 *			  因为bfs是先走到底，所以改变四个方向的起始顺序就可以
 *			  在这点上浪费了不少时间 
 *
 */



int N,M;

int mp[510][510];
bool vis[510][510];

//右 下  左 上 (d l r u这样搜就可以避免字典序排序） 
//int xx[] = {0,1,0,-1};
//int yy[] = {1,0,-1,0}; 

int xx[] = {1,0,0,-1};
int yy[] = {0,-1,1,0} ;//和上面没啥区别，唯一区别在于先走按字典序顺序走 


int main(){
	
	
	cin >> N >> M;
	
	char c; 
	for(int i = 1 ; i <= N ;  i++){
		for(int k = 1 ;  k <= M ; k++){
			cin >> c;
			mp[i][k] = c-'0';	
		}
	}
	/*
	* 还是字典序最小的，哎 
	*/
	
	queue< pair<int,int> > q; //x y 
	queue<int> s; // 第几步 
	queue<string> bs;  //走的方向 
	

	vis[1][1] = 1;
	s.push(0);
	bs.push("!"); 
	q.push( make_pair(1,1));
	
	
	while( !q.empty() && !s.empty() ){
		
		int fx = q.front().first;
		int fy = q.front().second;
		string st = bs.front();
		int step = s.front();
		
		bs.pop();
		q.pop();
		s.pop();
		
		if( fx == N && fy == M){
			
			cout << step << endl;
			
			for(int i = 1  ; i < st.size() ;  i++){
				cout << st[i];
			}
			return 0;
		}
		
		for(int i = 0 ;  i < 4 ; i ++){
			int dx = xx[i] + fx;
			int dy = yy[i] + fy;
			
			//系列乱七八糟的条件 
			if( dx >= 1 && dx <= N && dy >= 1 && dy <= M && !vis[dx][dy] && mp[dx][dy] != 1){
				
				vis[dx][dy] = 1;
				q.push( make_pair(dx,dy) );
				s.push(step+1);
				string s = "";
				switch(i){
					case 0:{
						s = "D";
						break;
					}
					case 1:{
						s = "L";
						break;
					}
					case 2 :{
						s = "R";
						break;
					}
					case 3:{
						s = "U";
						break;
					}
				}
				
				bs.push(st+s);
				
			} 
		}
		
		
	}
	
	
	//历史遗留 略过 
	
	
//	sort(ans,ans+flag,cmp); //排序 
//	
//	cout << ans[0].ans;
//	
//	
//	for(int i = 1 ; i < ans[0].s.size() ; i++){
//		cout << ans[0].s[i];
//	}
	
	
	
	
	
	
	
	return 0;
} 
