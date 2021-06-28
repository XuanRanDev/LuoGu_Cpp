#include "bits/stdc++.h"

using namespace std;

typedef long LL;

const int MAX = 1e5 + 1e5;
LL ans;
LL N,M; 
LL data[MAX + 50]; 

int main(){
	
	
	scanf("%d%d",&N,&M);

	
	for(int i = 1 ; i <= N ; i++ ){
		scanf("%d",&data[i]);
	}
	
	sort(data+1,data+N);
	
	for(int i = 1 ; i <= N ; i++){
		
		for(int k = 1 ; k <= N ; k++){
			if(data[i] - data[k] == M){
				ans++;
			}
		}
	}
	
	
	cout << ans;
	
	
	return 0;
}
