import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner tec = new Scanner(System.in);
        while (tec.hasNextLine()) {
            String cadena = tec.nextLine();
            String cadena2 = tec.nextLine();
            double resultado = 0;
            if (cadena.equals("") && cadena2.equals("")) {
                break;
            } else {
                int x = calcularNumero(leerCadena(cadena));
                int y = calcularNumero(leerCadena(cadena2));
                if (digitos(x) == 1 & digitos(y) == 1) {
                    if (x > y) {
                        resultado = (double) y / x;
                        print(resultado);
                    } else {

                        resultado = (double) x / y;
                        print(resultado);
                    }
                } else {
                    if (digitos(x) == 1 && digitos(y) > 1) {
                        while (true) {
                            y = calcularNumero(y);
                            if (digitos(y) == 1) {

                                if (x > y) {
                                    resultado = (double) y / x;
                                    print(resultado);
                                    break;
                                } else {

                                    resultado = (double) x / y;
                                    print(resultado);
                                    break;
                                }
                            }
                        }
                    } else if (digitos(x) > 1 && digitos(y) == 1) {

                        while (true) {
                            x = calcularNumero(x);
                            if (digitos(x) == 1) {

                                if (x > y) {
                                    resultado = (double) y / x;
                                    print(resultado);
                                    break;
                                } else {

                                    resultado = (double) x / y;
                                    print(resultado);
                                    break;
                                }
                            }
                        }
                    } else if (digitos(x) > 1 && digitos(y) > 1) {

                        while (true) {
                            x = calcularNumero(x);
                            y = calcularNumero(y);
                            if (digitos(x) == 1 && digitos(y) == 1) {

                                if (x > y) {
                                    resultado = (double) y / x;
                                    print(resultado);
                                    break;
                                } else {

                                    resultado = (double) x / y;
                                    print(resultado);
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
        tec.close();
    }

    public static void print(double resultado) {
        System.out.printf("valor: %.2f", resultado * 100);
        System.out.print(" % ");
    }

    public static int digitos(int numero) {
        int x = 0;
        int digitos = 0;
        while (numero != 0) {
            x = numero % 10;
            numero = numero / 10;
            digitos += 1;
        }
        return digitos;
    }

    public static int calcularNumero(int numero) {

        int y = 0;
        while (numero != 0) {
            y += numero % 10;
            numero = numero / 10;
        }
        return y;
    }

    public static int leerCadena(String cadena) {
        String auxiliar = "abcdefghijklmnopqrstuvwxyz";
        int centinela = 0;
        for (int i = 0; i < cadena.length(); i += 1) {
            for (int j = 0; j < auxiliar.length(); j += 1) {
                if (cadena.charAt(i) == auxiliar.charAt(j)) {
                    centinela += j + 1;
                }
            }
        }
        return centinela;
    }
}
