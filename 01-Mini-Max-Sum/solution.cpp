#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void miniMaxSum(vector<int> arr) {
    long long total = 0;
    int minimum = arr[0];
    int maximum = arr[0];

    for (int x : arr) {
        total += x;
        minimum = min(minimum, x);
        maximum = max(maximum, x);
    }

    cout << total - maximum << " " << total - minimum << '\n';
}

int main() {
    vector<int> arr(5);
    for (int &x : arr) cin >> x;
    miniMaxSum(arr);
    return 0;
}
