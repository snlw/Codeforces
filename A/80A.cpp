

#include<iostream>


using namespace std;

bool isprime(int a){
    for (int i = 2; i < a; i++){
        if (a % i == 0)
            return false;
    }
    return true;
}
int main(){
    int n, m, nextprime;
    cin >> n >> m;
    if (isprime(m) == false){
        cout << "NO";
        return 0;
    }
    while (n){
        n++;
        if (isprime(n)){
            nextprime = n;
            if (nextprime == m)
                cout << "YES";
            else
                cout << "NO";
            break;
        }
    }
    return 0;
}

