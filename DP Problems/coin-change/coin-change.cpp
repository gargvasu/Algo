#include<bits/stdc++.h>
using namespace std;
long long int count( vector <long long int> Coins, long long int m,  long long int n )
{

    // Initialize all table values as 0
        long long int table[n+1]={0};
 
 
    // Base case (If given value is 0)
    table[0] = 1;
 
    // Pick all coins one by one and update the table[] values after the index greater than or equal to the value of the picked coin
    for(long long int i=0; i<m; i++)
        for(long long int j=Coins[i]; j<=n; j++)
            table[j] += table[j-Coins[i]];
 
    return table[n];
}
 

int main()
{    long long int n,m;
    cin>>n>>m;
    vector <long long int> coins(m);
    for(long long int i=0;i<m;i++)
        cin>>coins[i];
    cout<<count(coins,m,n);
    return 0;
}