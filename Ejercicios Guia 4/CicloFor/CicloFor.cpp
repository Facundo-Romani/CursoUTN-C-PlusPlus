/* 1.EJERCICIO:
Hacer un programa que solicite el ingreso de 10 números y que muestre el
mayor de ellos por pantalla. Solo se debe emitir UN valor por pantalla. */

 /* #include <iostream>

using namespace std;

int main()
{	
	int numeros, mayor ;

	// CICLO FOR.
	for (int i = 0; i < 10; i++) {
		cout << "Ingresa un numero" << endl;
		cin >> numeros;

		if (i == 0) {
			 mayor = numeros;
		}else { 
			if (numeros > mayor )
			{
				mayor = numeros;
			}
		}
	}
	cout << "MAYOR: "<< mayor << endl;
	
	return 0;


} */



/*****************************************************************************************************/


/* 2.EJERCICIO:
Hacer un programa que solicite 20 números y calcule y emita por pantalla
cuántos son positivos(mayores a cero).Se debe mostrar un solo valor : el
conteo final. */


/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 VARIABLE.
	int n,y = 0;

	// PASO 1 FOR PARA PEDIR INGRESO DE NUMEROS.
	for (int x = 0; x < 20; x++) {
		cout << "Ingrese 20 numeros" << endl;
		cin >> n;
		// PASO 2 CALCULAR Y CUMPLIR CONDICION. 	
		if (n > 0) {
			y += n;
		}
			
	}

	cout << "TOTAL: " << y << endl;

	return 0;
} */



/*****************************************************************************************************/


/* 3.EJERCICIO:
Hacer un programa para mostrar los números del 1 al 10. No se debe realizar
ningún pedido de datos. */


/* #include <iostream>

using namespace std;

int main() {
;

	for (int i = 0; i <= 10; i++) {
		cout << "numeros: " << i << endl;
	}

	return 0;
} */


/*****************************************************************************************************/


/* 4.EJERCICIO:
Hacer un programa para mostrar los números del 10 al 1. No se debe realizar
ningún pedido de datos. */


/* #include <iostream>

using namespace std;

int main() {
	
	for (int i = 10; i >= 0; i--) {
		cout << "numeros: " << i << endl;
	}

	return 0;
}


/*****************************************************************************************************/


/* 5. Hacer un programa que muestre los números del 1 al 100 de 5 en 5. Ejemplo:
0, 5, 10, 15, 20…. 100. */


/* #include <iostream>

using namespace std;

int main() {

	int acumulador = 0;

	for (int i = 0 ; i <= 100; i++) {
		if (acumulador < 100) {
			acumulador += 5;
			cout << "numeros: " << acumulador << endl;
		}
	}
		

	return 0;
} */

/*****************************************************************************************************/


/* 6.EJERCICIO:
Hacer un programa que solicite UN número y luego calcule y emita un cartel
aclaratorio si el mismo es primo o no es primo. */



/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DECLARO MIS 3 VARIABLES.
	int i;
	int x;
	int contadorDivisores = 0; // INICIA DE 0.

	// PASO 1 PIDO AL  EL INGRESO.
	cout << "Ingresa un numero" << endl;
	cin >> x;
											// EN EL FOR SE LE PREGUNTA SI i ES MENOR O IGUAL A X (NUMERO INGRESADO) 
	// PASO 2 CONDICIONES					// NUMERO PRIMO SE PUEDE DIVIDIR POR 1 O POR SI MISMO.
	for (i = 1; i <= x; i++) {
		// PREGUNTAMOS CONDICION.
		if (x %i == 0) {					// CONDICION i VA TOAMANDO EL VALOR DE CADA VUELTA DEL BUCLE FOR, SI RESIDUO ES 0 AUMENTA EL CONTADOR.
			contadorDivisores++;			// SI LA CONDICION SE CUMPLE CONTADOR DIVISORES AUMENTA 1 
		}
	}// FINAL DEL CICLO FOR.

	// PASO 3 SEGUNDA CONDICION.
		if (contadorDivisores == 2) { // SEGUNDA CONDICION PARA VER SI ES PRIMO SI EL TOTAL DE DIVISORES ES 2 CUMPLE CONDICION.
			cout << "Numero Primo" << endl;
		}
		else {
			cout << "Numero no es Primo" << endl;
		}

		return 0;
	
} */

/*****************************************************************************************************/


/* 7.EJERCICIO:
Hacer un programa que solicite 10 números y luego mostrar por pantalla el
máximo de ellos y la posición en la que fue ingresado. */


/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DECLARO LAS VARIABLES. 
	int n,max,pos;

	// PASO 1 PEDIR INGRESO DE DATOS DENTRO DEL CICLO FOR.
	for ( int i = 0; i < 10 ; i++){  
		// PIDO LOS 10 NUMEROS PARA ALMACENARLOS EN N.
		cin >> n;	

		// PASO 2.
		// PREGUNTO SI i ES IGUAL A 0 Y SI CUMPLE LA CONDICION N LO ALMACENO EN MAX Y POS LE ASIGNO 1.
		if (i == 0) {  
			max = n;
			pos = 1;

			// PASO 3.
		}if ( n > max ) { // SEGUNDA CONDICION N ES MAYOR QUE EL MAXIMO 
			max = n;      // SI CUMPLE LA CONDICION A N LO GUARDO EN MAX PISANDO EL VALOR ANTERIOR.
			pos = i + 1;  // i + 1 PARA AUMENTAR LA POSICION EN UNO MAS. 
		}	
	}

	//PASO 4.
	cout << "Numero max: " << max << endl;
	cout << "Numero pos: " << pos << endl;
	
	return 0; 
} */



/*****************************************************************************************************/


/* 8.EJERCICIO:
Hacer un programa que solicite 20 números y luego mostrar por pantalla el
menor de ellos y la posición en la que fue encontrado.*/


 /* #include <iostream>

using namespace std;

int main() {

	// PASO 0.
	int n, menor, pos;

	// PASO 1.
	for (int i = 0; i < 20; i++) {
		cin >> n;

		//PASO 2.
		if (i == 0) {
			menor = n;
			pos = 1;
		}if (n < menor) { 
			menor = n;      
			pos = i + 1;  
		}
	}
	// PASO 3.
	cout << "Numero menor: " << menor << endl;
	cout << "Numero pos: " << pos << endl;

	return 0;
} */


/*****************************************************************************************************/


/* 9.EJERCICIO:
Hacer un programa que solicite 20 edades y luego calcule el promedio de edad
de aquellas personas mayores a 18 años. */


/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DECLARO VARIABLES.
	int edad;
	int mayor18 = 0;
	int edad18 = 0;
	int promedio;

	// PASO 1 INGRESO DE DATOS.
	for (int i = 0; i < 10; i++) {
		cin >> edad;
		if (edad > 18) {
			mayor18++;
			edad18 += edad;
			promedio = edad18 / mayor18;  
		}
	}
	cout << "Promedio Mayores de 18: " << promedio << endl ;

	return 0; 
} */


/*****************************************************************************************************/


/* 10.EJERCICIO:
Hacer un programa que solicite 20 números y luego emitir por pantalla el
máximo de los números pares y el mínimo de los números impares. */


/* #include <iostream>

using namespace std;

int main() {


	// PASO CERO.
	bool bP = 0;  // BANDERA PAR 1
	bool bI = 0;  // BANDERA IMPAR 0
	int	 n;
	int  maxP;
	int  minI;

	// PASO 1.
	for (int i = 0; i < 10; i++) {
		cin >> n;
		// PAR.
		if (n % 2 == 0) { // PRIMER IF PONE CONDICIONES DE LOS NUMEROS PARES.
			if (bP == 0) {
				maxP = n;
				bP = 1;
			}
			else if (n > maxP) {
				maxP = n;
			}
		}
		// IMPAR.
		if (!bI) {  // SEGUNDO IF PONE CONDICIONES DE NUMEROS IMPARES ! CAMBIA EL VALOR BOOL A TRUE=1
			minI = n;
			bI = 1;
		}
		else if (n < minI) {
			minI = n;
		}
	
	}

	cout << "Max Par: " << maxP << endl;
	cout << "Min Impar: " << minI << endl;

	return 0;

} */


/*****************************************************************************************************/


/* 11.EJERCICIO:
Hacer un programa para ingresar 10 números y luego calcule y emita el mayor
de los primos de la lista.En caso de no haber ningún número primo, deberá
aclararlo con un cartel. */


/* #include <iostream>

using namespace std;

int main() {

	// DECLARAR LAS VARIABLES.
	int n,mP;
	bool primo = 0;  // BOOLEANO QUE LE ASIGNAMOS FALSE.

	// INICIO DEL PRIMER CICLO FOR QUE MANIPULA EL INGRESO DEL NUMERO.
	for (int x = 0; x < 10; x++) {
		cin >> n;
		int contador = 0; // CONTADOR EN 0 PARA DETERMINAR CONDICION SI NUMERO ES PRIMO O NO.

	    // INICIO DEL SEGUNDO CICLO FOR QUIEN MANIPULA LA CONDICION DE SI NUMERO ES PRIMO O NO.
		// EN ESTE CASO EL CICLO FOR INICIAMOS VARIABLE Y CON ASIGNACION 1 Y PREGUNTAMOS SI ES MENOR O IGUAL A  NUM INGRESADO YA QUE UN NUMERO PRIMO SE DIVIDE POR SI MISMO Y POR 1.
		for (int y = 1; y <= n; y++) { 
			
		// PRIMERA CONDICION.
			if (n % y == 0) {
				contador++;
			} 
		}
			//SEGUNDA CONDICION.
			if (contador == 2) {
				if (!primo) {       // !PRIMO CAMBIA A TRUE EN A LA PRIMERA VUELTA.
					mP = n;
					primo = 1;      // CUANDO ENTRA LA SEGUNDA VUELTA PRIMO TRUE PASA A FALSE.
				}else if (n > mP) {
					mP = n;
				}
			}		
	}

	cout << "Numero mayor de los Primos es: " << mP << endl;   


	return 0;
} */


/*****************************************************************************************************/
 

