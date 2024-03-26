import java.util.Scanner;

public class EtruscanWarriorsNeverPlaychess {
	public static void main (String [] args){
		Scanner tec = new Scanner (System.in);
		int n = tec.nextInt();
		double centinela=Math.pow(10, 18);
		if (n>=0 && n<=centinela)
		{
			for (int i=0;i<n;i+=1)
			{
				int k=tec.nextInt();
				int contador=0;
				int auxiliar=0;
				auxiliar=k;
				for (int j=1;j<=k;j+=1)
				{
					auxiliar=auxiliar-j;
					if (auxiliar>=j)
					{
						auxiliar=auxiliar-j;
						contador+=1;
					}
					
				}
				System.out.println(contador);
			}
		}
		else 
		{
			tec.close();
		}
	}

}
