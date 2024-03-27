def contar_binario(decimal):
    binario = bin(decimal)[2:]
    contador = binario.count('1')
    return contador

def decimal_a_binario(decimal):
    binario = bin(decimal)[2:]
    return binario

def main():
    while True:
        I = int(input())
        if 1 <= I <= 2147483647:
            while I > 0:
                print("The parity of", I, "is", contar_binario(I), "(mod 2).")
                I = int(input())
                if not (1 <= I <= 2147483647):
                    break
        else:
            break

if __name__ == "__main__":
    main()
