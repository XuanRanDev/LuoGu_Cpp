#include "bits/stdc++.h"

using namespace std;

int num;

bool flag[20];
int data[20] ;

void print(){
	//������
	for(int i = 1 ; i <= num ; i++){
		
		cout << setw(5) << data[i] ;
		
	} 
	cout << endl;
}


void dfs(int x){
	
	if( x > num) print();
	
	for(int i = 1 ; i <= num ; i++){
		
		if( !flag[i] ){//��������û�б�ʹ�ù� 
			
			data[x] = i; //��ջ 
			flag[i] = 1; // ����������Ϊ��ʹ��
			dfs(x+1) ; // ������һ���ڵ�
			flag[i] = 0;//���δʹ�� 
			 
		}
		
	}
} 

int main(){
	

	cin >> num;
	
	dfs(1);
	
} 
