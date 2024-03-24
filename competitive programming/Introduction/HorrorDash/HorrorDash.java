import java.util.Scanner;

public class HorrorDash {

	public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        
        for (int t = 1; t <= T; t++) {
            int N = scanner.nextInt();
            int centinela=0;
            
            for (int i = 0; i < N; i++) {
                int speed = scanner.nextInt();
              if (speed>centinela)
              {
            	  centinela=speed;
              }
            }
            
            System.out.println("Case " + t + ": " + centinela);
        }
        
        scanner.close();
    }

}
