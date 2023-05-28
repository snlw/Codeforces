
#include<iostream>
#include<algorithm>

using namespace std;

const int MAX = 1e5;
int v[MAX];

bool isnotdegen(int a, int b, int c){
    int tri[] = {a, b, c};
    sort(tri, tri+3);
    return (tri[0] + tri[1] > tri[2]);
};

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    bool yes = false;
    if (n >= 45)
        yes = true;
    else{
        for (int a = 0; a < n; a++){
            for (int b = a+1; b < n; b++){
                for (int c = b+1; c < n; c++){
                    if (isnotdegen(v[a], v[b], v[c])){
                        yes = true;
                        break;
                    }
                }
            }
        }
    }
    cout << ( yes ? "YES":"NO" ) << "\n";

    return 0;
}


