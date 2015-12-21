#include<stdio.h>
int main()
{
	int cnt=0, k=0,i,j,n;
	int a[1000] = {0}, b[1000][2] = {0},c[1000] = {0};
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		c[i] = a[i];
		
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
		
		printf("cnt:%d\n",cnt);
		cnt = 0;	
	}
}

