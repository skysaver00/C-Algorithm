/*
n, m = map(int, input().split())

x = 1
for i in range(n - m + 1, n + 1):
	x = x * i

for i in range(1, m + 1):
	x = x // i

print(int(x))
 */