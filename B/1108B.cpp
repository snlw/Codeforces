
#include<iostream>
#include<set>

using namespace std;

int main(){
    int n, in;
    cin >> n;
    multiset<int> v;
    for (int i = 0; i < n; i++){
        cin >> in;
        v.insert(in);
    }
    std::multiset<int> ::iterator it;
        
    int ans1 = *prev(v.end());
    for (int i = 1; i <= ans1; ++i) {
		if (ans1 % i == 0) {
			v.erase(v.find(i));
		}
	}
	int ans2 = *prev(v.end());
	cout << ans1 << ' ' << ans2;
    
    return 0;
}



