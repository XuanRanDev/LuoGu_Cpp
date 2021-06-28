#include "bits/stdc++.h"

using namespace std;

int num;
int flag[20];
int data[num];


void print(){
	
	for(int i = 1 ; i <= num ; i++){
		
		cout << setw(5) <<data[i];
	}
	
	cout << endl;
}

void dfs(int x){
	
	if(x > num) print();
	
	for(int i = 1 ; i <= num; i++){
		
		if( !flag[i] ){ //如果没有使用过就入栈
		 
		 	flag[i] = 1;
			data[x] = i;
			dfs(x+1);
			flag[i] = 0;				
			
		}	
			
	}
	
}


int main(){
	
	cin >> num;
	
	dfs(1);
	
} 
