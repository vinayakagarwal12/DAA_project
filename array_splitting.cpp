#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
	int n,k;
	cin>>n>>k;

	int arr[n];
	for(int i =0;i<n;i++)
	{
		cin>>arr[i];
	}

	int diff[n];
	for(int i=0;i<n;i++)
	{
		diff[i] = arr[i]-arr[i+1];
	}

	sort(diff,diff+n-1);

	int ans = 0;
	for(int i = 0;i<k-1;i++)
	{
		ans += diff[i];
	}
	ans += (arr[n-1]-arr[0]);

	cout<<ans<<endl;
	return 0;
}