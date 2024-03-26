n = int(input())
centinela = 10 ** 18

if 0 <= n <= centinela:
    for _ in range(n):
        k = int(input())
        contador = 0
        auxiliar = k
        for j in range(1, k + 1):
            auxiliar -= j
            if auxiliar >= j:
                auxiliar -= j
                contador += 1
        print(contador)
