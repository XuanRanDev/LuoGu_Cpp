#include "bits/stdc++.h"

using namespace std;
/*
 *	���ò��鼯������Ȼ�ᳬʱ������һ����� 
 */
const int MAXN = 10000+100; 

int N,M;

int data[MAXN]; 
int ans[MAXN];

int find(int k){ //���ϴ� 
	
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
	
	int f = find(jd); //�õ��ڵ���ϴ�
	
	//���� All�ڵ� �����ӶȻ�ܸߣ���Ҳû��Ĵ������ˣ�
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
			//û������������仰 
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
