t = int(input())
for _ in range(t):
    n = int(input())
    if -1000 <= n <= 1000:
        n = (((n * 567) // 9 + 7492) * 235 // 47 - 498)
        centinela = str(n)
        auxiliar = centinela[::-1]
        print(auxiliar[1])
