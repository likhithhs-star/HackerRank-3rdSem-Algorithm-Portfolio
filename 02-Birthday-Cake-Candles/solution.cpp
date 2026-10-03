#include <iostream>
#include <vector>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int maximum = 0;
    int count = 0;

    for (int height : candles) {
        if (height > maximum) {
            maximum = height;
            count = 1;
        } else if (height == maximum) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> candles(n);
    for (int &x : candles) cin >> x;

    cout << birthdayCakeCandles(candles) << '\n';
    return 0;
}
