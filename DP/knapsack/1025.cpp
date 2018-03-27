//
// Created by Mei,Yulong on 2018/3/27.
//
#include "1025.hpp"
#define N 101
#define T 1001
using namespace std;

void park_plan () {
    int n, t;
    int dp[N][T];
    int pros[N][2];
    while (cin >> n >> t) {
        int i, j;
        for (i = 1; i <= n; i++) {
            cin >> pros[i][0] >> pros[i][1];
        }
        memset(dp, 0, sizeof(dp));
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= t; j++) {
                if (j < pros[i][1]) {
                    dp[i][j] = dp[i - 1][j];
                } else {
                    dp[i][j] = max(dp[i - 1][j - pros[i][1]] + pros[i][0], dp[i - 1][j]);
                }
            }
        }
        cout << dp[n][t] << endl;
    }
}
