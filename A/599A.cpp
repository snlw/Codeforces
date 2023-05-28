

#include<iostream>


using namespace std;


int main(){
    long long d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    long long distance;
    distance = min((d1+d2+d3),min((2*(d1+d3)),min((2*(d2+d3)),2*(d1+d2))));
    cout << distance;
    return 0;
}

