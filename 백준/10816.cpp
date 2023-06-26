#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int m1, m2;
    cin >> m1;
    vector<int> a;
    int temp;
    for (int i = 0; i < m1; i++) {
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    cin >> m2;

    vector<int> r(m2, 0); // Initialize vector r with size m2 and initial value 0

    for (int i = 0; i < m2; i++) {
        cin >> temp;
        auto upper = upper_bound(a.begin(), a.end(), temp);
        auto lower = lower_bound(a.begin(), a.end(), temp);
        r[i] = upper - lower; // Store the size of the element in r[i]
    }

    for (int i = 0; i < m2; i++) {
        cout << r[i] << " ";
    }

    return 0;
}
1