#include <bits/stdc++.h>

using namespace std;

main(){
	
	int num;
	
	cin >> num;
	
	int data[num];
	
	for(int i= 0;i<num;i++){
		cin >> data[i];
	}
	
	int result = 0;
	
	for(int i = 0;i<num ;i++){
		
		for(int j = i;j < num;j++){
			if(data[i] > data[j]) {
				int temp = data[i];
				data[i] =  data[j];
				data[j] = temp;
				result++; 
				
			}
		} 
		
	} 
	
	cout << result;
	
}
