import java.util.Scanner;

public class Parity
{
  public static void main (String[] args)
  {
	  	Scanner tec = new Scanner (System.in);
	  	int I=tec.nextInt();
	  	if (I>=1 && I<=2147483647){
	  		while (I>0)
		  	{
	  		System.out.println("The parity of  " + decimalABinario(I) + " is "+contarBinario(I) + " "+"(mod 2).");
	  		I=tec.nextInt();
	  		if (I>=1 && I<=2147483647)
	  		{

	  		}
	  		else
	  		{
	  			break;
	  		}
		  	}
	  	}
	  	tec.close();
   }
  public static int  contarBinario (int decimal)
  {
	  String binario=decimalABinario(decimal);
	  int contador=0;
	  for (int i=0;i<binario.length();i+=1)
	  {
		  if (binario.charAt(i)==49)
		  {
			  contador+=1;
		  }
	  }
	  return contador;
  }
  public static String decimalABinario (int decimal)
  {
	  String x="";
	  while (decimal!=0){
		  x+=decimal%2;
		  decimal=decimal/2;
	  }
	  return (binario(x));
  }
  public static String binario(String numero)
  {
	  String centinela="";
	  for (int i=numero.length()-1;i>=0;i-=1)
	  {
		  centinela+=numero.charAt(i);
	  }
		  return centinela;
  }
}
