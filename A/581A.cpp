

#include<iostream>
#include<algorithm>

using namespace std;


int main(){
    int a, b;
    cin >> a >> b; 
    int min = std::min(a,b);

    cout << min << " " << (max(a-min, b-min))/2 << endl;


    return 0;
}

