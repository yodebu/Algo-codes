#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		char arr[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				cin>>arr[i][j];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=m-1;j>=0;j--)
				cout<<arr[i][j];
			cout<<endl;
		}
	}
	return 0;
}
