#include<iostream>
using namespace std;

long long getR(long long a){
	while(a % 2 == 0)
		a /= 2;
	return a;
};

void solve(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if(a > b)	
	    swap(a, b);
	if(getR(b) != getR(a)){
		cout << -1 << endl;
		return;
	}
	
	long long ans = 0;
	b /= a;
	
	while(b >= 8){
		b /= 8;
		++ans;
	}
	if(b > 1)	
	    ++ans;
	printf("%d\n", ans);
}

int main(){
	int quest;
	scanf("%d", &quest);
	
	while(quest--)
		solve();
	return 0;
}
