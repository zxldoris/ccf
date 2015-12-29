#include<stdio.h>
int main()
{
	int n,s[1000][2] = {0},i,j,t=0,flag[1000] = {0},p=0,t1=0,p1=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i][0]);
	}
	
	for(i=0;i<n;i++)
	{
		if(flag[i] == 1) continue;
		for(j=i;j<n;j++)
		{
			if(s[i][0] == s[j][0])
			{
				s[i][1]++;
				flag[j] = 1;
			}
		}
		
	}//统计数字出现次数 
	/*printf("各数字出现次数\n");
	for(i=0;i<n;i++)
	{
		printf("s[i][0]:%d s[i][1]:%d flag:%d",s[i][0],s[i][1],flag[i]);
		printf("\n"); 
	}*/
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		if(s[i][1]<s[j][1])
		{
			t=s[i][1]; s[i][1]=s[j][1]; s[j][1] = t;
			p=s[i][0]; s[i][0]=s[j][0]; s[j][0] = p;		
		}
	}//s[i][1]从大到小排序 
	/*printf("s[i][1]从大到小排序\n"); 
	for(i=0;i<n;i++)
	{
		printf("s[i][0]:%d s[i][1]:%d flag:%d",s[i][0],s[i][1],flag[i]);
		printf("\n"); 
	}*/
	for(j=1;j<=n;j++)
	{
		if(s[0][1] == s[j][1] && s[0][0]>s[j][0])
		{	
			t1=s[0][1];s[0][1] = s[j][1]; s[j][1] = t1;
			p1=s[0][0];s[0][0] = s[j][0]; s[j][0] = p1;
		}
		if(s[j][1] == 0) break;
	}
	
	/*printf("出现次数最多重较小的数\n"); 
	for(i=0;i<n;i++)
	{
		printf("s[i][0]:%d s[i][1]:%d flag:%d",s[i][0],s[i][1],flag[i]);
		printf("\n"); 
	}*/
	printf("%d",s[0][0]);
	return 0;
 } 
