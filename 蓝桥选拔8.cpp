#include "bits/stdc++.h"

using namespace std;

int num;//���Ƹ��� 
int price[100];//��Ʒ�۸� 
int result = 0;//������� 
int total_num[100];
int max_money = 1000;//���ּ۸� 
int current_money = 0;//��ǰ�۸� 


struct data{
	int flag;//��Ƿ�������ֹ���ݻ��� 
	int node_result[100];
	int index;
};

data d[100];

void node (int index){
	
	//�����ǰ���Ѵ���max_money����û��Ʒ(��ǰ��Ʒ��Ŵ�������������ѡ��return 
	if(current_money > max_money || index >= num) return;
	
//	cout << current_money << endl;
	//���Ǯ�Ѿ������˱����˷�������ִ�� 
	if(current_money == max_money) 
	{
		//���������ṹ���� 
		d[result].flag = result;
		d[result].index = index;
		for(int i = 0 ; i < num ; i ++){
			d[result].node_result[i] = total_num[i];
		}
		
		//�ܷ���������1 
		result++;
		return;
	 } 
	 //���򣬼����� 
	 total_num[index]++;
	 current_money += price[index] ;
	 node(index);
	 
	 //�²㺯��return��������ȥ�ˣ���ȥ�ռӵĽ�� 
	 total_num[index]--;
	 current_money -= price[index] ;
	 
	 //������һ��
	 node(index+1) ;
	
}
	
int main(){
	
	cin >> num;
	
	for(int i = 0 ; i < num ; i++){
		cin >> price[i];
	}
	
	node(0);
	
	cout << result << endl;
	
	for(int i = 0 ; i < result ; i++){
		data temp = d[i];
		for(int j = 0; j < num; j++){
			
			cout << temp.node_result[j] << " ";
		}
		cout << endl;
	}

	
}
