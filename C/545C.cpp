
#include<iostream>
#include<utility>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector< pair<int , int> > trees(n);
    for (int i = 0 ; i < n; i++)
        cin >> trees[i].first >> trees[i].second;
    // first tree can be fell left.
    int count = 1, limit = trees[0].first;
    for (int i = 1; i < n-1; i++){
        if (trees[i].first > limit){
            if (trees[i].first - trees[i].second > limit){
                limit = trees[i].first;
                count++;
            }
            else if (trees[i].second + trees[i].first < trees[i+1].first){
                limit = trees[i].second + trees[i].first;
                count++;
            }
            else 
                limit = trees[i].first;
        }
        else
            limit = trees[i].first;
    }
    if (limit < trees[n-1].first)
        count++;
    cout << count << "\n";
    return 0;
}




