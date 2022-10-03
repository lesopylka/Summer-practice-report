n = int(input())

l = list(map(int, input().split()))

if (sum(l) == 0):
 ans = 1
else:
 ans = 0
 
print(ans)