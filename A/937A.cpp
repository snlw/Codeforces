
#include<iostream>
#include<set>

using namespace std;

int main(){
    int n, in;
    cin >> n ;
    set<int> s;
    for (int i = 0; i < n; i++){
        cin >> in;
        if (in != 0)
            s.insert(in);
    }
    cout << s.size() << endl;

    return 0;
}


