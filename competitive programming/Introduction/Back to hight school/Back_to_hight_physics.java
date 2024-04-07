import java.util.Scanner;

public class Back_to_hight_physics {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

        while (scanner.hasNextInt()) {
            int v = scanner.nextInt();
            int t = scanner.nextInt();

            int displacement = 2 * v * t;
            System.out.println(displacement);
        }

        scanner.close();
	}

}
