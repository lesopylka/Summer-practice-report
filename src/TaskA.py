n, m, k = map(int, input().split())

ans = ('1' * k + '0' * (m-k)) * (n // m + 1)

ans = ans[:n]

print(ans)