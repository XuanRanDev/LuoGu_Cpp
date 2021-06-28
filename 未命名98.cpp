#include "bits/stdc++.h"

using namespace std;

int N;
int data[200050];

int main(){
	
	cin >> N;
	
	for(int i = 1 ; i<= N ;i++){
		cin >> data[i];
	}
	
	sort(data+1,data+N+1);
	
	
	int sum = 0;
	for(int i = 1 ; i <= N ; i++){
		
		sum = 1;
		cout << data[i] << " ";
		
		while(data[i] == data[i+1] && i <= N-1){
			i++;
			sum++;
		}
		
		cout << sum << endl;
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
