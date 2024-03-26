import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        int numero = 0;
        while (true) {
            numero = tec.nextInt();
            if (numero != 0) {
                while (true) {
                    if (numero == 0) {
                        System.out.print(numero);
                        break;
                    }
                    numero = calculatorSum(numero);

                    if (digitos(numero) == 1) {
                        System.out.println(numero);
                        break;
                    }
                }
            } else {
                break;
            }
        }
        tec.close();
    }

    public static int digitos(int numero) {
        int digitos = 0;
        int x = 0;
        int y = 0;
        while (numero != 0) {
            x = numero % 10;
            y += x;
            numero = numero / 10;
            digitos += 1;
        }
        return digitos;
    }

    public static int calculatorSum(int numero) {
        int x = 0;
        int y = 0;
        while (numero != 0) {
            x = numero % 10;
            y += x;
            numero = numero / 10;
        }
        return y;
    }
}
