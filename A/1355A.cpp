
#include<iostream>
#include<set>

using namespace std;

long long formula(long long a){
    set<int> s;
    long long dummy = a;
    while(dummy){
        s.insert(dummy%10);
        dummy /= 10;
    }
    long long mx = *s.rbegin();
    long long mn = *(--s.rend());
    return mx*mn ;
};


int main(){
    int t;
    cin >> t;
    while (t--){
        long long a, k;
        cin >> a >> k;
        if (k != 1){
            for (int i = 0; i < k-1; i++){
                long long add = formula(a);
                if (add == 0)
                    break;
                a += add;
            }
        }
        cout << a << endl;    
    }
    return 0;
}



