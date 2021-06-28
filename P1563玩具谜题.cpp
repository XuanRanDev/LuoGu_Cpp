#include "bits/stdc++.h"

using namespace std;

int N,M;
int cur;

void check(){
	
	while(cur < 0) cur += N; 
	while(cur > N) cur += (-N);
	
}


struct peo{
	int fx ;
	string name;
}p[1000];

//站向 0为里，1 为外
//命令 0为左 1为右 

//朝里向右为正，左为负
//外左为正，右为负 
int main(){
	
	cin >> N >> M;
	
	for(int i = 0 ; i < N ; i++){
		//scanf("%d %s",&p[i].fx,&p[i].name);
		cin >> p[i].fx >> p[i].name;
	}
	
	while(M--){
		
		int a , b;
		scanf("%d %d",&a,&b);
	//	cin >> a >> b;
		
		if(p[cur].fx == 0) {
			
			if( a == 0){
				cur = (cur+N-b) % N;
			} else{
				cur =(cur+b) %N;
			}
			
			
		} else{
		
			if( a == 0){
				cur =(cur+b) %N;
			} else{
				cur = (cur+N-b) % N;
			}
		//	check();
		} 
		
	}
	
	cout << p[cur].name;
	
	
	
	
	return 0;
}
