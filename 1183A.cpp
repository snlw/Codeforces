

#include<iostream>


using namespace std;

bool check(int a){
    int sumofdigits = 0;
    while(a){
        sumofdigits += a%10;
        a /= 10;
    }
    if (sumofdigits % 4 == 0)
        return true;
    else 
        return false;
}

int main(){
    int a;
    cin >> a;
    while (a){
        if (check(a)){
            cout << a;
            return 0;
        }
        else
            a++;
    }
    return 0;
}

