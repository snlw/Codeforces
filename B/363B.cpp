 
#include<iostream>
#include<vector>
#include<iostream>

using namespace std; 

long long int n,m,sol,val,acc,bst=-1;

int main()
{
    cin>>n>>m;
    long long int nn[n];
    for(int i=0;i<n;i++)
    {
        cin>>nn[i];
        if(i<m)
            val+=nn[i];
        else if(i>=m)
        {
            if(val<=bst || bst==-1)
                sol=i+1,
            bst=val;
            val=val-nn[i-m]+nn[i];
        }
    }
    if(val<=bst || bst==-1)
        sol=n+1;
    cout<<sol-m;
    return 0;
}
