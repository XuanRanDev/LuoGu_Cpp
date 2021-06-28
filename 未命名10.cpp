#include "bits/stdc++.h"

using namespace std;


const int MAX = 5 *  1e5 +50;


int flag[MAX];
int data[MAX];
int N;

int main(){
	
	cin >> N;
	
	while(N--){
		
		memset(flag,0,sizeof(int) * MAX);
		memset(data,0,sizeof(int) * MAX);
		 
		
		int num;
		cin >> num;
		for(int i = 1 ;i <= num ;i++ ){
			scanf("%d",&data[i]);
		}
		
		for(int i = 1 ;  i<= num ;i++){
			if(flag[data[i]*data[i] % 1145141] == 1){
				continue;
			} 
			flag[data[i]*data[i] % 1145141] = 1;
			printf("%d ",data[i]);
			
		}
		
		cout << endl;
	}
	
	return 0;
}
