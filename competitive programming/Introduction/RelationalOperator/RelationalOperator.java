import java.util.Scanner;
public class RelationalOperator {
	public static void main (String [] args)
	{
		Scanner tec = new Scanner(System.in);
		int T = tec.nextInt();
		int a,b;
		for (int i=0;i<T;i+=1)
		{
			a=tec.nextInt();
			b=tec.nextInt();
			if (a<b){System.out.println("<");}
			else if (a>b){System.out.println(">");}
			else {System.out.println("=");}
		}
		tec.close();
	}

}
