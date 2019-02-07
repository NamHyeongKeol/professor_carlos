n_m_str = input()
n, m = tuple(map(lambda x: int(x), n_m_str.split(' ')))
arr_str = input()
arr = [None] * n
for i, j in enumerate(arr_str):
    if i % 2 == 0:
        arr[int(i/2)] = int(j)

sum_arr = [None] * n
for ind in range(n):
    before = sum_arr[ind - 1] if ind > 0 else 0
    sum_arr[ind] = before + arr[ind]

for ind in range(m):
    i_j_str = input()
    i, j = tuple(map(lambda x: int(x), i_j_str.split(' ')))
    former = sum_arr[i-2] if i-1>0 else 0
    latter = sum_arr[j-1]
    print(latter - former)

