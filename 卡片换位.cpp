#include "bits/stdc++.h"

using namespace std;

char mp[5][5];

int qd_x,qd_y; 
map<string,bool> flag;
string str,mb; //参数二为目标状态 



void read(){
	
	int t[4]; //存放空格的xy坐标 
	char c1[8],c2[8];
	gets(c1);
	gets(c2);
	
	string s = "",s2 = "";
	
	
	char c;
	for(int i = 1 ;  i <= strlen(c1) ;  i++){
		c = c1[i-1];
		if(c==' ' ){
			c= '!';
			qd_x = 1;
			qd_y = i;
		}
		s+=c;
		
		
		if( c == 'A'){
			c = 'B';
		}else if( c == 'B'){
			c = 'A';
		}
		
		s2 += c;
	}
	
	for(int i = 1 ;  i <= strlen(c2) ;  i++){
		c = c2[i-1];
		if(c==' '){
			c= '!';
			qd_x = 1;
			qd_y = i;
		}
		s+=c;
		
		if( c == 'A'){
			c = 'B';
		}else if( c == 'B'){
			c = 'A';
		}
		
		s2 += c;
	}
	
	str = s;
	mb = s2; // 目标状态 

} 

int main(){
	
	read();
	
	cout <<str <<endl;
	
	cout << mb;
	
	
	return 0;
	
	queue< pair<int,int> > q;
	queue<int> s;
	queue <string> z; 
	
	q.push(make_pair(qd_x,qd_y));
	s.push(0);
	z.push(str);
	
	flag[str] = 1;	
	
	while( !z.empty() && !s.empty() ){ //保证队列不空
	
		string t = z.front();
		int step = s.front();
		
		z.pop();
		s.pop(); //出列
		
	//	if(t == str) 
		
				
		
	} 
	
	
	return 0;
} 
