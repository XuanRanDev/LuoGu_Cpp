#include "bits/stdc++.h"

using namespace std;
//�� �� �� 
int N,M;
char mp[55][55]; 

int ans = 0x7ffffff;

int Total(int w ,int b)
{
	int res = 0;
	for(int i = 1 ; i <= w ; i++){
		
		for(int k = 1 ;  k <= M; k++){
			if(mp[i][k] !='W'){
				res++;
			}
		}
		
	}
	
	
	for(int i = w+1 ; i <= b ; i++){
		
		for(int k = 1 ;  k <= M ; k++){
			if(mp[i][k] !='B'){
				res++;
			}
		}
		
	}
	
	
	for(int i = b+1 ; i <= N ; i++){
		
		for(int k = 1 ;  k <= M ; k++){
			if(mp[i][k] !='R'){
				res++;
			}
		}
		
	}
	
	return res;
	
}
int main(){

	cin >> N >> M;
	
	for(int i = 1 ;  i <= N ;  i++){
		
		for(int k = 1 ; k <= M;  k++){
			
			cin >> mp[i][k];
		}
	
	}
	
	// N-2 ԭ������ ������ɫ����ռ���� 
	for(int i = 1 ; i <= N-2 ;  i++  ){
		
		for(int k = i+1 ; k <= N-1 ; k ++ ){
			
		//	int sy = N - i - k ; // ʣ�µĸ���ɫ 
			ans = min(ans,Total(i,k));
			
		}
		
	}
	
	cout << ans;




	return 0; 
} 
