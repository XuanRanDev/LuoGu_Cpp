#include<string.h>  
#include "bits/stdc++.h"
int m;//物品数  
int p[100];//价格  
int ans[100][100];//ans[i][j]表示第i个方案中第j个物品被选数  
int num[100];//num[i]表示第i件物品被选的个数  
int cas=0;//方案数  
int money=0;//花的钱  
void buy(int n)//n表示当前搜索到的物品编号  
{  
    if(money>1000||n>=m)//当花的钱超过预算或者所有的物品都已遍历过了，不再继续搜索下去  
        return ;  
    if(money==1000)//当花的钱正好为1000，满足要求  
    {  
        for(int i=0; i<m; i++)  
            ans[cas][i]=num[i];  
        cas++;  
        return ;  
    }  
    num[n]++;//选该物品  
    money+=p[n];  
    buy(n);//可以继续选该物品  
    num[n]--;//不选该物品，前面加的要减去  
    money-=p[n];//钱也相应的减  
    buy(n+1);//选下一个物品  
}  
int main()  
{  
    scanf("%d",&m);  
    for(int i=0; i<m; i++)  
        scanf("%d",&p[i]);  
    memset(num,0,sizeof(num));  
    buy(0);  
    printf("%d\n",cas);  
    for(int i=0; i<cas; i++)  
    {  
        for(int j=0; j<m; j++)  
            printf("%d ",ans[i][j]);  
        printf("\n");  
    }  
    return 0;  
}

