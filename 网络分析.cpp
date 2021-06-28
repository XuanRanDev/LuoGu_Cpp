#include "bits/stdc++.h"

using namespace std;
/*
 *	先用并查集做，虽然会超时，但有一半分数 
 */
const int MAXN = 10000+100; 

int N,M;

int data[MAXN]; 
int ans[MAXN];

int find(int k){ //找老大 
	
	if( data[k] == k){
		return data[k];
	}
	
	return data[k] = find(data[k]);
}

void join(int x,int y)
{
	int a = find(x);
	int b = find(y);

	data[b] = a; 

}

void send(int jd,int size){
	
	int f = find(jd); //得到节点的老大
	
	//遍历 All节点 （复杂度会很高，但也没别的处理方法了）
	for(int i = 1 ;  i <= N ; i ++){
		
		int t = find(i);

		if( f == t){

			ans[i] += size;
		}
		
	}

	
}
int main(){
	
	cin >> N >> M;
	
	
	for(int i = 1 ;  i <= N ; i++){
		data[i] = i; 
	} 
	
	int a,b,c; 
	for(int i = 1 ; i <= M ;  i++){
	
		cin >> a >> b >> c;
		
		if( a == 1){
			//没错，就是下面这句话 
			join(b,c); 
		}else{
			send(b,c);
		}
		
	} 
	
	
	for(int i = 1 ; i <= N ; i ++){
		cout << ans[i] << " ";
	}
	
	
	return 0;
} 
