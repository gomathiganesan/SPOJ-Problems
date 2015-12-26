#include<stdio.h>
int main()
{
	int n,i,j,age=1,out=0;
	scanf("%d",&n);
	int v[n];
	for(i=0;i<n;i++)
		scanf("%d",&v[i]);
	for(i=0,j=n-1;;)
	{
		if(v[i]>=v[j])
		{
			out+=v[j]*age++;
			j--;
		}
		else
		{
			out+=v[i]*age++;
			i++;
		}
		if(age==n+1)
			break;
	}
	printf("%d\n",out);
	return 0;
}
