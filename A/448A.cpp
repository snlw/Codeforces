

#include<iostream>
#include<cmath>

using namespace std;


int main(){
    float a1, a2, a3, b1, b2 ,b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    float cups = ceil((a1 + a2 + a3)/5);
    float medals = ceil((b1 + b2 + b3)/10);

    if (n >= cups+medals){
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}


