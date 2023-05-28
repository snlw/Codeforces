
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n,k;
    int res,cur;
    cin>>n>>k;
    res=0;
    cur=n*2;
    res+=(cur+k-1)/k;
    cur=n*5;
    res+=(cur+k-1)/k;
    cur=n*8;
    res+=(cur+k-1)/k;
    cout<<res<<endl;
}

