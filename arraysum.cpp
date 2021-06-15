#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll n;
int main()
{
	#ifndef ONLINE_JUDGEbb
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);

    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	cin>>n;
	int array[n];
	if(n%2==0){
			        for(auto i=0;i<n;i++)
			        {
			        	array[i++]=i+1;
			        	array[i]=-1*(i+1);
			        }
    	}
        else
        {
	        	array[0]=0;
	        	 for(auto i=1;i<n;i++)
			        {
			             array[i++]=i+1;
			        	array[i]=-1*(i+1);
			        }
        }
	
	for(auto i:array)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}