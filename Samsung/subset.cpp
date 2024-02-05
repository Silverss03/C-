#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n, l, r;
    cin >> n >> l >> r;

    vector<long long> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    vector<vector<bool>> dp(n + 1, vector<bool>(r + 1, false));
    dp[0][0] = true;

    for (long long i = 1; i <= n; ++i) {
        for (long long j = 0; j <= r; ++j) {
            dp[i][j] = dp[i - 1][j];
            if (j >= numbers[i - 1]) {
                dp[i][j] = dp[i][j] || dp[i - 1][j - numbers[i - 1]];
            }
        }
    }

    long long max_sum = -1;
    for (long long j = r; j >= l; --j) {
        if (dp[n][j]) {
            max_sum = j;
            break;
        }
    }

    vector<long long> selected_indices;
    long long j = max_sum;
    for (long long i = n; i > 0 && j > 0; --i) {
        if (j >= numbers[i - 1] && dp[i - 1][j - numbers[i - 1]]) {
            selected_indices.push_back(i - 1);
            j -= numbers[i - 1];
        }
    }

    cout << selected_indices.size() << endl;
    for (long long i = selected_indices.size() - 1; i >= 0; --i) {
        cout << selected_indices[i] + 1 << " ";
    }

    return 0;
}

