#include "bits/stdc++.h"

using namespace std;

int num;

bool flag[20];
int data[20] ;

void print(){
	//结果输出
	for(int i = 1 ; i <= num ; i++){
		
		cout << setw(5) << data[i] ;
		
	} 
	cout << endl;
}


void dfs(int x){
	
	if( x > num) print();
	
	for(int i = 1 ; i <= num ; i++){
		
		if( !flag[i] ){//如果这个数没有被使用过 
			
			data[x] = i; //入栈 
			flag[i] = 1; // 将这个数标记为已使用
			dfs(x+1) ; // 查找下一个节点
			flag[i] = 0;//标记未使用 
			 
		}
		
	}
} 

int main(){
	

	cin >> num;
	
	dfs(1);
	
} 
