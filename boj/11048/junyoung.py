import sys
input = sys.stdin.readline

n, m = map(int, input().split())
arr = [[0 for _ in range(m + 1)] for _ in range(n + 1)]
for i in range(1, n + 1):
    for _j, num in enumerate(input().split()):
        j = _j + 1
        arr[i][j] = int(num)
        arr[i][j] += max(arr[i - 1][j - 1], max(arr[i - 1][j], arr[i][j - 1]))

print(arr[n][m])
        
