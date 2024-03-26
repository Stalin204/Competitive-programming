def digits(numero):
    digitos = 0
    while numero != 0:
        x = numero % 10
        numero //= 10
        digitos += 1
    return digitos

def calculator_sum(numero):
    suma = 0
    while numero != 0:
        x = numero % 10
        suma += x
        numero //= 10
    return suma

while True:
    numero = int(input())
    if numero != 0:
        while True:
            if numero == 0:
                print(numero, end='')
                break
            numero = calculator_sum(numero)

            if digits(numero) == 1:
                print(numero)
                break
    else:
        break
