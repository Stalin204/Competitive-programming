def main():
    while True:
        cadena = input()
        cadena2 = input()
        resultado = 0
        if cadena == "" and cadena2 == "":
            break
        else:
            x = calcular_numero(leer_cadena(cadena))
            y = calcular_numero(leer_cadena(cadena2))
            if digitos(x) == 1 and digitos(y) == 1:
                if x > y:
                    resultado = y / x
                    print_valor(resultado)
                else:
                    resultado = x / y
                    print_valor(resultado)
            else:
                if digitos(x) == 1 and digitos(y) > 1:
                    while True:
                        y = calcular_numero(y)
                        if digitos(y) == 1:
                            if x > y:
                                resultado = y / x
                                print_valor(resultado)
                                break
                            else:
                                resultado = x / y
                                print_valor(resultado)
                                break
                elif digitos(x) > 1 and digitos(y) == 1:
                    while True:
                        x = calcular_numero(x)
                        if digitos(x) == 1:
                            if x > y:
                                resultado = y / x
                                print_valor(resultado)
                                break
                            else:
                                resultado = x / y
                                print_valor(resultado)
                                break
                elif digitos(x) > 1 and digitos(y) > 1:
                    while True:
                        x = calcular_numero(x)
                        y = calcular_numero(y)
                        if digitos(x) == 1 and digitos(y) == 1:
                            if x > y:
                                resultado = y / x
                                print_valor(resultado)
                                break
                            else:
                                resultado = x / y
                                print_valor(resultado)
                                break

def print_valor(resultado):
    print("valor: {:.2f} % ".format(resultado * 100))

def digitos(numero):
    x = 0
    digitos = 0
    while numero != 0:
        x = numero % 10
        numero = numero // 10
        digitos += 1
    return digitos

def calcular_numero(numero):
    y = 0
    while numero != 0:
        y += numero % 10
        numero = numero // 10
    return y

def leer_cadena(cadena):
    auxiliar = "abcdefghijklmnopqrstuvwxyz"
    centinela = 0
    for letra in cadena:
        for j in range(len(auxiliar)):
            if letra == auxiliar[j]:
                centinela += j + 1
    return centinela

if __name__ == "__main__":
    main()
