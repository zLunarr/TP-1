import javax.swing.JOptionPane;
public class actividad {

	public static void main(String[] args) {
		
		/* 
		 * 
		 * - - ACTIVIDAD 1 --
		 * float num1 = 5;
		float num2 = 10;
		
		System.out.println("La suma es igual a " +(num1 + num2));
		System.out.println("La resta es igual a " +(num1 - num2));
		System.out.println("La multiplicacion es igual a " +(num1 * num2));
		System.out.println("La division es igual a " +(num1 / num2));
		System.out.println("El modulo es igual a " +(num1%num2)); */
		
		
		
		/* 
		 * 
		 * -- ACTIVIDAD 2 --
		 * int num1 = 20;
		int num2 = 6;
		
		if(num1 > num2) {
			System.out.println("El numero 1 es el mayor");
		}
		else {
			System.out.println("El numero 2 es el mayor");
		}
		
		if(num1 == num2) {
			System.out.println("Los numeros son iguales");
		} */

		
		/*
		 * 
		 * -- ACTIVIDAD 3 --
		 * String bienvenida = "Flavio";
		
		
		System.out.println("Bienvenido a Java" +bienvenida);*/
		
		
	/*                  -- ACTIVIDAD 4 -- 
	
	String bienvenida=JOptionPane.showInputDialog("Cual es tu nombre");
	
	System.out.println("Bienvenido a java " +bienvenida); */
		
		
		/*		-- ACTIVIDAD 5 --
				
		String area=JOptionPane.showInputDialog("Cual es tu radio");
		double radio = Double.parseDouble(area);
		double area2=Math.PI * Math.pow(radio, 2);

		System.out.println("El area de tu circulo es " +area2); */
		
		
	/*	             -- ACTIVIDAD 6 --
		
		String numero=JOptionPane.showInputDialog("Cual es su numero");
		int numerito = Integer.parseInt(numero);
		
		if(numerito%2 == 0) {
			System.out.println("El numero es efectivamente divisibile por 2");
			
		}
		
		else {
			System.out.println("El numero no es divisible por 2 perdedor");
		} */
		
		
		/* -- ACTIVIDAD 7 --
		String codigo=JOptionPane.showInputDialog("Inserte un codigo del ASCII");
		int ascii = Integer.parseInt(codigo);
		
		char caracter = (char)ascii;
		
		System.out.println(caracter); */
	

	/* -- ACTIVIDAD 8 --
	  
	  String letra=JOptionPane.showInputDialog("Inserte una letra");
	 
	char letracaracter = letra.charAt(0);
	int ascii=(int)letracaracter;
	
	System.out.println(ascii); */

		/* --ACTIVIDAD 9--
		  double IVA = 0.21;
		
		String numero=JOptionPane.showInputDialog("Inserte el precio de su producto");
		
		double decimal = Double.parseDouble(numero);
		double precio = decimal+(decimal * IVA);
		
		System.out.println("El precio final es" +precio);  */
		
		
		/* --ACTIVIDAD 10--
		 int numero = 1;
	
		
		while(numero < 101) {
			
			System.out.println(numero);
			numero++;
		}
		
		 */
		
		/* --ACTIVIDAD 11--
		
		for(int i = 0; i < 101; i++) {
			
			System.out.println(i);
			
		}
		
		*/
		
		/* --ACTIVIDAD 12--
		
		for(int i = 1; i < 101; i++) {
			
			if(i%2 == 0 && i%3 == 0) {
				
				System.out.println(i);
				
			}
		}
		
		*/
		
		
	}

}
