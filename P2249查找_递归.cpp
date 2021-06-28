#include "bits/stdc++.h"

using namespace std;

const int MAX = 1e6+10;
int data[MAX];
int N,M;

int find(int L,int R,int F){
	
	if(L<0 || R > N) return -1;

	if(L==R){
		if(data[L] == F){
			return L+1;
		}else{
			return -1;
		}
	} 
	
	int mid = (L+R) / 2;
	
	if( F <= data[mid]){
		find(L,mid,F);
	}else{
		find(mid+1,R,F);
	}
	
} 

int main(){
	
	cin >> N >> M;
	
	for(int i = 0 ; i < N ; i++){
		cin >> data[i];
	}
	
	while(M--){
		int num;
		
		cin >> num;
		
		cout << find(0,N,num) << " ";
	}
	
	
	return 0;
} 
