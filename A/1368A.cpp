

#include<iostream>


using namespace std;


int main(){
    long long t, a, b, n;
    cin >> t; 
    while (t--){
        cin >> a >> b >> n;
        if (b > a){
            swap(a,b);
        }
        int count = 0; 
        while ( a <= n && b <= n ){
            b += a;
            swap(a,b);
            count++;
        }
        cout << count << endl;
    }

    return 0;
}

