#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findGaps(vector<vector<int>> &arr) {
    if (arr.empty()) return {};
    
    // Sort intervals by start time
    sort(arr.begin(), arr.end());
    
    vector<vector<int>> res;
    for (int i = 1; i < arr.size(); i++) {
        
        // End of previous and start of current are
        // are checked and if non-overlapping, then
        // added to the result
        if (arr[i - 1][1] < arr[i][0]) {
            res.push_back({arr[i - 1][1], arr[i][0]});
        }
    }
    return res;
}

int main() {
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    
    for (auto &gap : findGaps(arr)) {
        cout << "[" << gap[0] << ", " << gap[1] << "] ";
    }
    return 0;
}
