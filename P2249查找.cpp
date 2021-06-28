#include "bits/stdc++.h"
#include "algorithm"

using namespace std;


/*
 *	STL Ð´·¨ 
 */

const int MAX = 1e6+50;
int data[MAX];
int N,M;

int main(){
	
	scanf("%d %d",&N,&M);
	
	for(int i = 0 ; i < N ; i++){
		scanf("%d",&data[i]);
	}
	
	int num = 0;
	for(int i = 0 ; i < M ; i++){
		scanf("%d",&num);
		
		int ans = lower_bound(data,data+N,num)-data;
		
		if(data[ans] != num){
			printf("-1 ");
		}else{
			printf("%d ",ans+1);
		}
	}
	
	
	return 0;
}

