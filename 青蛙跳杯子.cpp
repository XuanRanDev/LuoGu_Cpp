#include "bits/stdc++.h"

using namespace std;

string n,m;


map<string,bool> flag;//还是这个好使 


void bfs(){
	
	queue < string > q;
	queue < int > s;

	
	q.push( n );
	s.push(0);
	flag[n] = 1;
	
	while ( !q .empty() && !s.empty() ){
		
		string t = q.front();
		int step = s.front();
		
		q.pop();
		s.pop();
		
		if ( t == m ){
			cout << step;
			return ;	
		} 
		
		for(int i = 0 ;  i < t.size() ;  i++){
			
			for(int k = -3 ;  k <= 3 ; k++){
				
				if( k == 0) continue; //剪枝优化下 
				
				string new_s = t; //踩坑日记，千万别改变原字符内容，会导致下标错误  
				
				int e = i + k;
				
				if( e < 0 || e > t.size() || new_s[e] != '*'){
					continue;
				}
				
				//swap
				new_s[e] = new_s[i];
				new_s[i] = '*';
				
				if( !flag[new_s]){ //没有出现过
					
					q.push(new_s);
					s.push(step+1);
					flag[new_s] = 1; 
				}
				 
				
			} 
			
		}
		
		
	}
	
	
}

int main(){
	
	cin >> n >> m;
	
	bfs();
	
	
	
	
	
	
	
	return 0;
}
