import java.util.Scanner;

public class Score {
	public static void main(String[] args)
	{
		Scanner tec = new Scanner(System.in);
		int T= tec.nextInt();
		tec.nextLine();
		String line="";
		 for (int i=0;i<T;i+=1)
		{
			 line=tec.nextLine();
			if (line.length()>0 && line.length()<80)
			{
			int centinela=0;
			int suma=0;
			 for (int j=0;j<line.length();j+=1)
			 {
				 if (line.charAt(j)=='O'){
					 centinela+=1;
					 suma+=centinela;
				 }
				 else
				 {
					 centinela=0;
				 }
			 }
			 System.out.println(suma);
			  line="";
			  suma=0;
			  centinela=0;
			}

		}
	}

}
