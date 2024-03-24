import java.util.Scanner;

public class AutomaticAnswer {

	public static void main(String[] args) {
		Scanner tec = new Scanner (System.in);
        String centinela="";
        String auxiliar="";
		int t = tec.nextInt();
		if (t>=1 & t<=100)
		{
			for (int j=0;j<t;j+=1){
		         int n=tec.nextInt();
		         if (n>=-1000 & n<=1000){
		          n=n*567;
		         n=n/9;
		         n=n+7492;
		         n=n*235;
		         n=n/47;
		         n=n-498;
		         centinela+=n;
		         for (int i=centinela.length()-1;i>0;i--)
		         {

		        	 auxiliar+=centinela.charAt(i);
		         }
		         System.out.println(auxiliar.charAt(1));
		         auxiliar="";
		         centinela="";

				}
		         else 
		         {
		        	 tec.close();
		         }
			}
		}else 
		{
			tec.close();
		}
	

	}

}
