#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,i,m,j,z,k,a;
	vector<int> box,empty,count;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		for(j=0;j<n;j++)
		{
			cin>>a;
			box.push_back(a);
			empty.push_back(1);
		}
		sort(box.begin(),box.end());
		count.push_back(n);
		for(k=0;k<n;k++)
		{	
			for(z=k+1;(box[z]<(2*box[k])||empty[z]==0) && z<n;z++)
				;
			if(empty[z] && z<n)
			{
				empty[z]=0;
				count[i]--;
				
			}
		}
		box.clear();
	}
	for(i=0;i<t;i++)
		cout<<"Case "<<i+1<<": "<<count[i]<<"\n"; 
	return 0;
}
