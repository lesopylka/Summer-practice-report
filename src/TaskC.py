from itertools import permutations

ll = list(map(int, input().split()))
for l in permutations(ll):
    if l[0] + l[1] == l[2]:
        print(*l)
        break
else:
    print(-1, -1, -1)