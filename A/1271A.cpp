
#include<iostream>

using namespace std;

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int first, second;
    if (f > e){
        second = min(b, min(c,d));
        first  = min(a, d-second);
    }
    else{
        first = min(a, d);
        second = min(b, min(c,d-first));
    }
    cout << first*e + second*f ;

    return 0;
}

