n = int(input())
z = -1
# https://en.wikipedia.org/wiki/List_of_mathematical_series#Low-order_polylogarithms

ans = z * ((1 - (n + 1) * z**n + n * z**(n + 1)) / (1 - z)**2)

print(int(ans))
