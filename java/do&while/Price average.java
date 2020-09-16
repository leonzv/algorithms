import java.util.Scanner;

public class Main{
    
    
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		
		double media,mediaS, aumento,count = 0,soma = 0,somaS = 0,preco;
		
		do{
		System.out.println("Enter product price: ");
		preco = input.nextInt();
		if(preco == 0){
		    break;
		}
		        somaS += preco * 1.20;
		        soma += preco;
		        count++;
		   System.out.println(soma +  " / " + somaS);
		}while(preco > 0);
		
		mediaS = somaS / count;
		media = soma / count;
		System.out.println("Average for products with a 20% increase: " + mediaS);
		System.out.println("Average for products without 20% increase: " + media);
	}
}
