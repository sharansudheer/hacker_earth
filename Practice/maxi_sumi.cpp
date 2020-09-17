#include <bits/stdc++.h>
using namespace std;  
typedef long long int lli;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){

        cin>>a[i];
	}
    sort(a,a+n,greater<int>());
    lli sum=0,count=0;
    lli max_sum=INT_MIN;
    for(int i=0;i<n;i++)
    {

        sum+=a[i];
        if(sum>=max_sum)
        {
            max_sum=sum;
            count++;

        }

    }

    cout<<max_sum<<" "<<count;

    return 0;

}
