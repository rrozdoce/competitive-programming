#include <iostream>
#include <vector>
#include <climits>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, T;
    cin >> N >> T;

    vector<vector<int>> c(N, vector<int>(T));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < T; ++j) {
            cin >> c[i][j];
        }
    }

    int L, U;
    cin >> L >> U;

    // dp[t][k] = máxima confiabilidade até o tempo t, com o sensor k ativo no final
    vector<vector<long long>> dp(T + 1, vector<long long>(N, -1));
    // prefix[k][t] = soma acumulada do sensor k até o tempo t
    vector<vector<long long>> prefix(N, vector<long long>(T + 1, 0));

    // Pré-calcula prefix sums para cada sensor
    for (int k = 0; k < N; ++k) {
        for (int t = 1; t <= T; ++t) {
            prefix[k][t] = prefix[k][t - 1] + c[k][t - 1];
        }
    }

    // Inicializa o primeiro passo
    for (int k = 0; k < N; ++k) {
        if (L <= 1 && 1 <= U) {
            dp[1][k] = c[k][0];
        }
    }

    for (int t = 2; t <= T; ++t) {
        for (int k = 0; k < N; ++k) {
            long long max_val = -1;

            // Caso 1: Continuar usando o mesmo sensor k
            for (int d = 1; d <= min(U, t); ++d) {
                if (d >= L && t - d >= 0) {
                    if (t - d == 0) {
                        // Caso especial: começar no tempo 1
                        if (d <= U) {
                            long long sum = prefix[k][t] - prefix[k][0];
                            max_val = max(max_val, sum);
                        }
                    } else {
                        // Encontra o melhor sensor anterior
                        long long best_prev = -1;
                        for (int prev_k = 0; prev_k < N; ++prev_k) {
                            if (prev_k != k && dp[t - d][prev_k] != -1) {
                                best_prev = max(best_prev, dp[t - d][prev_k]);
                            }
                        }
                        if (best_prev != -1) {
                            long long sum = prefix[k][t] - prefix[k][t - d];
                            max_val = max(max_val, best_prev + sum);
                        }
                    }
                }
            }

            dp[t][k] = max_val;
        }
    }

    long long result = -1;
    for (int k = 0; k < N; ++k) {
        result = max(result, dp[T][k]);
    }

    cout << result << endl;

    return 0;
}