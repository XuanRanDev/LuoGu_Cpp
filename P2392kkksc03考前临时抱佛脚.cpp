#include "bits/stdc++.h"

using namespace std;


/*
 *	此题无思路 
 *
 */

int A,B,C,D;
int AT[25],BT[25],CT[25],DT[25];

void dfs(int f,int index,){
	
	if( f > 4) return;
	
	
}
 
int main(){

	cin >> A >> B >> C >> D;
	
	for(int i = 0 ; i < A ; i++){
		cin >> AT[i];
	}
	
	for(int i = 0 ; i < B ; i++){
		cin >> BT[i];
	}
	
	for(int i = 0 ; i < C ; i++){
		cin >> CT[i];
	}
	
	for(int i = 0 ; i < D ; i++){
		cin >> DT[i];
	}
	
	sort(AT,AT+A);
	sort(BT,BT+B);
	sort(CT,CT+C);
	sort(DT,DT+D);
	
	dfs(1) ;
	
	return 0;
} 
