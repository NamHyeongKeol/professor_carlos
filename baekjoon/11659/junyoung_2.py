import sys
input = sys.stdin.readline

n, m = map(int, input().split())
dp = [0]
for i, val in enumerate(input().split()):
    dp.append(dp[-1] + int(val))

for _ in range(m):
    start, end = map(int, input().split())
    print(dp[end] - dp[start - 1])
