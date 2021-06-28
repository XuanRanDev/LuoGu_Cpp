#include "bits/stdc++.h" 

using namespace std;

int main(){
	
	int num;
	
	cin >> num;
	
	int total = 1;
	
	num--;
	
	while(num--){
		total++;
		total *= 2;

	}
	
	cout << total;	
	return 0;
}
