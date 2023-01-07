#include <iostream>
#include <algorithm>
#include <vector>
//#include <utility>

using namespace std;

// bool compare(pair<int, int>a, pair<int, int>b) {
// 	if (a.first == b.first) {
// 		return a.second < b.second;
// 	}
// 	else {
// 		return a.first < b.first;
// 	}
// }
bool compare(pair<int, int>a, pair<int, int>b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int main(){
    int n;
    cin >> n;
    int fir;
    int sec;

    vector<pair<int,int>>p;
    // vector<pair<int,int>>c;
    for(int i = 0; i < n; i++){
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        cin >> fir >> sec;
        p.emplace_back(fir,sec);


    }
    sort(p.begin(), p.end(), compare);
    for(int i = 0; i < p.size(); i++){
        cout << p[i].first << " " << p[i].second << "\n";
    }
    


}
