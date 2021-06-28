#include "bits/stdc++.h"

using namespace std;

string n,m;


map<string,bool> flag;//���������ʹ 


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
				
				if( k == 0) continue; //��֦�Ż��� 
				
				string new_s = t; //�ȿ��ռǣ�ǧ���ı�ԭ�ַ����ݣ��ᵼ���±����  
				
				int e = i + k;
				
				if( e < 0 || e > t.size() || new_s[e] != '*'){
					continue;
				}
				
				//swap
				new_s[e] = new_s[i];
				new_s[i] = '*';
				
				if( !flag[new_s]){ //û�г��ֹ�
					
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
