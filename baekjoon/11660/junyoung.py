import sys

n, m = map(int, input().split())
arr = [[0 for _ in range(n + 1)] for _ in range(n + 1)]
for i in range(n):
    for j, val in enumerate(sys.stdin.readline().split()):
        arr[i + 1][j + 1] = arr[i][j + 1] + arr[i + 1][j] - arr[i][j] + int(val)
        
for _ in range(m):
    xa, ya, xb, yb = map(int, sys.stdin.readline().split())
    answer = arr[xb][yb] - arr[xa - 1][yb] - arr[xb][ya - 1] + arr[xa - 1][ya - 1]
    print(answer)
    
