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
bool rcompare(pair<int, int>a, pair<int, int>b) {
	if (a.first == b.first) {
		return a.second > b.second;
	}
	else {
		return a.first > b.first;
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
    sort(p.rbegin(), p.rend());
    for(int i = 0; i < p.size(); i++){
        cout << p[i].first << " " << p[i].second << "\n";
    }
    // int temp = p[0].first;

    // for(int i = 0; i < p.size(); i++){
    //     if(temp == p[i].first){         
    //         c.emplace_back(p[i].first,p[i].second);
    //     }
    //     else{
    //         sort(c.begin(), c.end(), rcompare);
    //         for(int j = 0; j < c.size(); j++){
    //             cout << c[j].first << " " << c[j].second << "\n";
    //         }
    //         c.clear();
    //         temp = p[i].first;
    //         c.emplace_back(p[i].first,p[i].second);

    //     }
    // }
    // if(c.size() != 0){
    //     sort(c.begin(), c.end(),rcompare);
    //     for(int j = 0; j < c.size(); j++){
    //         cout << c[j].first << " " << c[j].second << "\n";
    //     }
    // }
    

    //////////////시간초과
    // for(int i = 0; i < n - 1; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(arrx[i] > arrx[j]){
    //             swap(arrx[i],arrx[j]);
    //             swap(arry[i],arry[j]);
    //         }
    //         else if(arrx[i] == arrx[j]){
    //             if(arry[i] > arry[j]){
    //                 swap(arry[i],arry[j]);
    //                 swap(arrx[i],arrx[j]);
    //             }
    //         }
    //     }
    
    // }

    

    

}
