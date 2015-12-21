#include<stdio.h>
int main()
{
	int n, a[1000] = {0}, b[1000][2] = {0},i,j,k = 0,cnt = 0,m,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;(i<n) && (a[i]>=0);i++)
	{
		b[k][0] = a[i];
		b[k][1] = cnt;
		printf("cnt=%d  ",cnt);
		cnt = 0;
		k++;
		for(j=i;j<n;j++)
		{
			if(a[i] == a[j]) 
			{
				cnt++;
				a[j] = -1;
				printf("a[i] = %d   a[%d]=%d  \n",a[i],j,a[j]);
			}
		}	
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<2;j++)
			printf("b[%d][%d]=%d    ",i,j,b[i][j]);
		printf("\n"); 
	}
		
	for(i=0; i<k; i++)
	{	
		for(j=i; j<k; j++)
			if(b[i][1] < b[j][1])
			{
				m = b[i][1]; b[i][1] = b[j][1]; b[j][1] = m;
				p = b[i][0]; b[i][0] = b[j][0]; b[j][0] = p;
			}
	}
	for(i=0;i<k;i++)
		for(j=0;j<2;j++)
			printf("%d ",b[i][j]);
		printf("\n"); 
	printf("a1:\n");
	m=0;p=0;
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		if(b[i][1] == b[j][1])
		{
			if(b[i][0]>b[j][0])
				m = b[i][1]; b[i][1] = b[j][1]; b[j][1] = m;
				p = b[i][0]; b[i][0] = b[j][0]; b[j][0] = p;
		}
	}
	for(i=0;i<k;i++)
		for(j=0;j<2;j++)
			printf("%d ",b[i][j]);
		printf("\n"); 
	return 0;
}
