#include<string.h>  
#include "bits/stdc++.h"
int m;//��Ʒ��  
int p[100];//�۸�  
int ans[100][100];//ans[i][j]��ʾ��i�������е�j����Ʒ��ѡ��  
int num[100];//num[i]��ʾ��i����Ʒ��ѡ�ĸ���  
int cas=0;//������  
int money=0;//����Ǯ  
void buy(int n)//n��ʾ��ǰ����������Ʒ���  
{  
    if(money>1000||n>=m)//������Ǯ����Ԥ��������е���Ʒ���ѱ������ˣ����ټ���������ȥ  
        return ;  
    if(money==1000)//������Ǯ����Ϊ1000������Ҫ��  
    {  
        for(int i=0; i<m; i++)  
            ans[cas][i]=num[i];  
        cas++;  
        return ;  
    }  
    num[n]++;//ѡ����Ʒ  
    money+=p[n];  
    buy(n);//���Լ���ѡ����Ʒ  
    num[n]--;//��ѡ����Ʒ��ǰ��ӵ�Ҫ��ȥ  
    money-=p[n];//ǮҲ��Ӧ�ļ�  
    buy(n+1);//ѡ��һ����Ʒ  
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

