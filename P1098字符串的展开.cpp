#include "bits/stdc++.h"
#include "cctype" // ����ַ��õ� 

using namespace std;



/*
 * ���ᰡ���� 
 */ 

int P1,P2,P3; //�������� 

char data[50000];
int i;//�����±� 
string s; 
int w;//����±���� 


int main(){
	
	cin >> P1 >> P2 >> P3 >> s;
	
	//���s�ĵ�i�����������ʼѭ�� 
	while(s[i]){
		
		//���ֵ����-��ֱ�ӷ���������(ֻ���ִ�����Ҫ��飩 
		if(s[i] != '-'){
			data[w++] = s[i];
		} else{
			//���ˣ�����-�ţ��ѵ�����
			char a = s[i-1];//����ǰһ��
			char b = s[i];//����Ϊʲô��ôд���ʾ��ǲ�֪��
			char c = s[i+1]; // ��һ��
			
			///////////////////////////
			//���������
			
			if(a+1 == c) { // �����һ����ǰһ��ĺ����ֱ���Թ�����ѭ�� 
				continue;
			}else if(a == c  || a > c){ //���-ǰ����ȣ�����ǰ>�� ��ԭ�� 
				data[w++] = s[i];//-���ٲ��� 
				
				
			///////////////////////////
			//��������� ǧ��Ҫ�ǵð����ִ��ĸ�ʽ�� 
			}else{ //����������� 
				//�������һ���ǰһ��Ĳ�ֵ
				int cha = c-a;
				//��Ӳ�ֵ����
				for(int i = 1 ; i <= cha ; i++){
					
					//��Ϊ��Ҫ�ظ�P2�Σ���ҪǶ��for
					for(int k = 0 ; k < P2 ; k ++){
						//ע�⣺��ͬʱ��������һ����ʽ������������ת��
						if(P3 == 2){ // ���������Ƿ���Ҫ��ת
							//ִ�з�ת���� ,��c�a���
							//������һ��1ΪСд 2Ϊ��д 3Ϊ*
							
							if(P1 == 1 ){
								if(islower(a+(cha-i))){
									data[w++] = a+(cha-i);
								}else{
									data[w++] = a+(cha-i) + 32;
								}
							}else if(P1 == 2) {
								if(isupper(a+cha-i)){
									data[w++] = a+(cha-i);
									
								}else{
									data[w++] = a+(cha-i) - 32;
								}
							}else{
								data[w++] = '*';
							}					 
							
						}  else{
							
							if(P1 == 1 ){
								if(islower(a+i)){
									data[w++] = a+i;
								}else{
									data[w++] = a+i + 32;
								}
							}else if(P1 == 2) {
								if(isupper(a+i)){
									data[w++] = a+i;
								}else{
									data[w++] = a+i - 32;
								}
							}else{
								data[w++] = '*';
							}

						}
					} 
					
				} 
			} 
			
			
		}
		
	}
	
	1++; 
	
	for(int i = 0 ; i < w; i++){
		
		cout << data[i];
	}
	
	return 0;
} 
