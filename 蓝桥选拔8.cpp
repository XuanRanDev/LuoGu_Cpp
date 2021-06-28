#include "bits/stdc++.h"

using namespace std;

int num;//共计个数 
int price[100];//商品价格 
int result = 0;//结果个数 
int total_num[100];
int max_money = 1000;//所持价格 
int current_money = 0;//当前价格 


struct data{
	int flag;//标记方案，防止数据混淆 
	int node_result[100];
	int index;
};

data d[100];

void node (int index){
	
	//如果当前消费大于max_money或者没商品(当前商品编号大于总数量）可选则return 
	if(current_money > max_money || index >= num) return;
	
//	cout << current_money << endl;
	//如果钱已经花完了表明此方案可以执行 
	if(current_money == max_money) 
	{
		//保存结果到结构体内 
		d[result].flag = result;
		d[result].index = index;
		for(int i = 0 ; i < num ; i ++){
			d[result].node_result[i] = total_num[i];
		}
		
		//总方案数自增1 
		result++;
		return;
	 } 
	 //否则，继续买 
	 total_num[index]++;
	 current_money += price[index] ;
	 node(index);
	 
	 //下层函数return代表买不下去了，减去刚加的结果 
	 total_num[index]--;
	 current_money -= price[index] ;
	 
	 //购买下一件
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
