#include<stdio.h>
int main()
{
	int cnt=0, k=0,i,j,n;
	int a[1000] = {0}, b[1000][2] = {0};
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		
	for(i=0;i<n;i++)
	{
		cnt = 0;
		for(j=0;j<n;j++)
		{
			if(a[i] == a[j] && a[i] != -1)
			{
				printf("a[%d]%d==a[%d]%d   ",i,a[i],j,a[j]);
				cnt++;
				a[j] = -1;
			}
		}
	
		b[k][0] = a[i];
		b[k][1] = cnt;
		k++;
	//	printf("k=%d,cnt=%d\n",k,cnt); 
	}
	
}

