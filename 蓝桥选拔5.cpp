#include "bits/stdc++.h"

using namespace std;

//每个砝码最多三种状态，要么加要么减，要么不选 
int data[5][3] = {{0,-1,1},{0,3,-3},{0,9,-9},{0,27,-27},{0,81,-81}};
int ans[5];
int num;//需求数据

bool cmp(int x,int y){
	return abs(x)>abs(y);
}


int main(){

	cin >> num;
	
	int xh[5] = {0,0,0,0,0};
	
	for(xh[0] = 0 ; xh[0]< 3 ; xh[0]++){
		
			for( xh[1] = 0 ; xh[1] < 3 ; xh[1]++){
				
					for( xh[2] = 0 ; xh[2] < 3 ; xh[2]++){
						
							for(xh[3] = 0 ; xh[3] < 3 ; xh[3]++){
								
								for( xh[4] = 0 ; xh[4] < 3 ; xh[4]++){
									
									if(data[0][xh[0]]+data[1][xh[1]]+data[2][xh[2]]+data[3][xh[3]]+data[4][xh[4]] == num){
										for(int i = 0 ;  i < 5 ; i++){
											
											ans[i] = data[i][xh[i]];
										}
										//cout << data[0][xh[0]] << " " << data[1][xh[1]] << " " << data[2][xh[2]] << " " << data[3][xh[3]] << " " << data[4][xh[4]];
									} 

								}
							}
					}
			
	}
	
	} 

	sort(ans,ans+5,cmp);
	
	cout << num <<"=";
	for(int i = 0 ; i < 5;i++){
		
		if(ans[i] != 0){
			if(ans[i] >0 && i != 0){
				cout << "+";
			}
			cout << ans[i];
		}
	}
	
} 
