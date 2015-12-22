#include<stdio.h>
int main()
{
	int  a[1000] = {0}, c[1000] = {0}, b[1000][2] = {0};
	int n,i,j,k = 0,cnt = 0,m,p,q;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[i] = a[i];
	}
		
		
	for(i=0;i<n;i++)	
	{
		if(c[i] == -1) continue;
		for(j=i;j<n;j++)
		{
			if(a[i] == a[j]&& c[j]>=0)
			{
				cnt++;
				c[j] = -1;
			}
		}
		b[k][0] = a[i];
		b[k][1] = cnt;
		//printf("cnt=%d  ",cnt);
		cnt = 0;
		k++;
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
	{
		for(j=0;j<k-i;j++)
		{
			if(b[i][1] == b[i+j][1])
			{
				if(b[i][0] > b[i+j][0])
				{
					m = b[i][1]; b[i][1] = b[i+j][1]; b[i+j][1] = m;
					p = b[i][0]; b[i][0] = b[i+j][0]; b[i+j][0] = p;
				}
			}
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<2;j++)
			printf("%d ",b[i][j]);
		printf("\n"); 
	}
	return 0;
}
