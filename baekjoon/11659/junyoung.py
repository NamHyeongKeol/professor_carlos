import sys

n, m = map(int, sys.stdin.readline().split())
dp = [0 for _ in range(n + 1)]
for i, val in enumerate(sys.stdin.readline().split()):
    dp[i + 1] = dp[i] + int(val)

for _ in range(m):
    start, end = map(int, sys.stdin.readline().split())
    print(dp[end] - dp[start - 1])
