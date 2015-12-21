#include<stdio.h>
int main()
{
	int cnt=0, k=0,i,j,n;
	int a[1000] = {0}, b[1000][2] = {0};
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
		
	for(i=0;i<n && a[i]>0;i++)
	{
		for(j=i;j<n;j=j+cnt)
		{
			if(a[i] == a[j])
			{
				cnt++;
				a[j] = -1;
			}
		}
		b[k][0] = a[i];
		b[k][1] = cnt;
		k++;
		printf("k=%d,cnt=%d\n",k,cnt); 
	}
	
}

