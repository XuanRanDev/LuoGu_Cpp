#include "bits/stdc++.h"

using namespace std;

long ans = 0 ;

char mp[12][12];
int p[4],n[4];
bool zt[50000000];

void move(int x,int y,int mi,int h){//移动函数
	if (mi==0){
		if (mp[x-1][y]=='*') if (h==0) p[0]=1; else n[0]=1;
		else if (h==0) p[1]--; else n[1]--;
	}else if (mi==1){
		if (mp[x][y+1]=='*') if (h==0) p[0]=2; else n[0]=2;
		else if (h==0) p[2]++; else n[2]++;
	}else if (mi==2){
		if (mp[x+1][y]=='*') if (h==0) p[0]=3; else n[0]=3;
		else if (h==0) p[1]++; else n[1]++;
	}else{
		if (mp[x][y-1]=='*') if (h==0) p[0]=0; else n[0]=0;
		else if (h==0) p[2]--; else n[2]--;
	}
}

// 0123 北东南西  f:0农 1 牛 
void search(int x,int y ,int fx,int f){ // x y fx flag

	//向北 
	if(fx == 0){
		if(mp[x-1][y] == '*'){
			if( f == 1){ //
				p[0] = 1;
			}else{
				n[0] = 1;
			}
		} else{
			if(f==1){
				p[1] --;
			}else{
				n[1] --;
			}
		}	
	} 
	
	////
	
	//东 
	if( fx == 1){
		
		if(mp[x][y+1] == '*'){
			
			if(f==1){
				p[0] = 2;
			}else{
				n[0] = 2;
			}
		}else{
			if(f==1){
				p[2] = 2;
			}else{
				n[2] = 2;
			}
		}
		
	} 
	
	if(mp[x+1][y] == '*'){
		
		if(f==1){
			p[0] = 3;
		}else{
			n[0] = 3;
		}
		
	}else{
		if(f==1){
			p[1]++;
		}else{
			n[1] ++;
		}
	}
	
	if(mp[x][y-1] == '*'){
		if(f==1){
			p[0] = 0;
		}else{
			n[0] = 0;
 		}
	}else{
		if(f==1){
			p[2]--;
		}else{
			n[2]--;
		}
	}
	
}

int check(){
	
	if(p[1] == n[1] && p[2] == n[2]){
		return 0;
	}
	return 1;
}


int main(){

	for(int i = 0 ; i <= 11 ; i++){
		mp[0][i] = '*';
		mp[i][0] = '*';  //别问为什么，问就是构建墙壁 
		mp[11][i] = '*';
		mp[i][11] = '*';
	}	
	
	//数据读入 
	for(int i = 1 ; i <= 10 ; i++){
		for(int k = 1 ; k <= 10 ; k++){
			char a;
			cin >> a;
			mp[i][k] = a;
			
			if(a=='F'){
				p[1] = i;
				p[2] = k;
			}else if(a=='C'){
				n[1] = i;
				n[2] = k; 
			}
		}
	}
	
	
	int temp = 0; // 生成随机数 
	
	while(check()){
		
		temp = p[1]+p[2]* 10 + n[1]*100 + n[2] * 1000 + p[0]*10000+n[0]*40000;
		

	//	cout << temp << endl;
		
		if(zt[temp]){
			cout << 0 << endl;
			return 0;
		}
		
		zt[temp] = 1;
		
		move(p[1],p[2],p[0],0);//x,y,方向,农夫 
		move(n[1],n[2],n[0],1);
		
		ans++; 
	//	cout << ans << endl;
		
	}
	
	
	cout << ans;
	
	
	
	
	return 0;
}
