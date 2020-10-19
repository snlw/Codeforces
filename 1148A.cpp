
#include<iostream>

using namespace std;

int main(){
    long long a, b, ab;
    cin >> a >> b >> ab;
    long long longest = ab*2 + min(a,b)*2;
    if (a-min(a,b) != 0 || b-min(a,b) !=0)
        longest++;

    cout << longest;

    return 0;
}

