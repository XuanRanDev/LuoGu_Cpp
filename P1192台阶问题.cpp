#include "bits/stdc++.h"

using namespace std;

/*
 *  P1192 ̨������ 
 */ 

int main(){
	
	int num,k;
	cin >> num >> k;
	
	int data[num+1] = {1};
	
	//С��K��������ǱȽ�����ģ���Ϊ�㲻��һ����k��Ȼ�������� 
	for(int i = 1; i < k;i++ ){
		 
		 for(int j = 0; j < i; j++){
		 	
		 	data[i] += data[j];
		 	data[i] %= 100003;
		 } 
	} 
	
	//k���߷� 
	for(int i = k; i <= num;i++){
		
		for(int j = i-k;j < i;j++){
			
			data[i] += data[j];
			data[i] %= 100003;
		}
		
	}
	
	cout << data[num];
	
	return 0;
}
