def minimalny_czas(N, T):
    dp = [0] * (N + 1)

    for i in range(N - 1, 0, -1):
        ti = T[i]
        dp[i] = dp[ti] + i

    return dp[1]

# Wczytanie danych wejściowych
N = int(input())
T = list(map(int, input().split()))

# Wywołanie funkcji i wypisanie wyniku
print(minimalny_czas(N, T))
