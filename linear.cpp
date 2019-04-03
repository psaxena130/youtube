#include<bits/stdc++.h>
using namespace std;
void findArr(int *arr,int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			cout<<i<<endl;
		}
	}
}


int main()
{
	int n;
	cin>>n;
	//elements in the array;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	while(1){
		//for infinte requests
		int x;
		cout<<"number to be searched"<<endl;
		cin>>x;
		findArr(&arr[0],n,x);
	}
}