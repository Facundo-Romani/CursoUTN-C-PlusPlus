
/* 1.EJERCICIO:
Hacer un programa para mostrar los números del 1 al 10. No se debe realizar
ningún pedido de datos.USANDO WHILE. */


/* #include <iostream>

using namespace std;

int main()
{
    int contador = 0;

	while (contador < 10)
	{
		contador++;
		cout << "" << contador << endl;
	}

	

    return 0;
} */ 


/**********************************************************************************************************************/

/* 2.EJERCICIO:
Hacer un programa para mostrar los números del 10 al 1. No se debe realizar
ningún pedido de datos.USANDO WHILE. */


/* #include <iostream>

using namespace std;

int main()
{
	int numero = 11;

	while (numero > 1)
	{
		numero -- ;
		cout << "" << numero << endl;
	}

	return 0;
} */



/**********************************************************************************************************************/

/* 3.EJERCICIO:
Hacer un programa que solicite la edad de un grupo de personas.El programa
deberá pedir edades hasta que se ingrese una edad menor a 18 años.Deberá
mostrar por pantalla cuántas personas mayores se registraron. */


/* #include <iostream>

using namespace std;

int main(){

	int edad;
	int pM = 0; // CONTADOR MAYORES DE EDAD

	cout << "ingresa edad" << endl;
	cin >> edad; // PEDIMOS NUMERO PARA ENTRAR AL WHILE.

	while (edad > 18)
	{		
		pM++;         // SI CUMPLE LA CONDICION CUENTA Y PIDE OTRA EDAD.
		cin >> edad;
	}
	cout << "Mayores de edad: " << pM << endl;
	

	return 0;
}*/		


/**********************************************************************************************************************/

/* 4.EJERCICIO:
Hacer un programa que solicite dos números y luego muestre los números
entre el menor y el mayor de ellos.Acordate, usando While. */ 

/* #include <iostream>

using namespace std;

int main() {

	int x, y;

	cout << "Ingresa un numero" << endl;
	cin >> x;
	cout << "Ingresa un numero" << endl;
	cin >> y;

	while (x > y || y > x)
	{
		
		if (x > y){
			cout << "numero Mayor: \n"<< x << endl;
			cout << "numero Menor: \n" << y << endl;
		}
		else if (y > x) {
			cout << "numero Mayor: \n" << y << endl;
			cout << "numero Menor: \n" << x << endl;
		}

		cout << "Ingresa un numero" << endl;
		cin >> x;
		cout << "Ingresa un numero" << endl;
		cin >> y;

	}


	return 0;
} */

/*******************************************************************************************************************/


/* 5.EJERCICIO:
Hacer un programa que muestre los números del 1 al 100 de 5 en 5. Ejemplo:
0, 5, 10, 15, 20…. 100. Usando While. */ 


/* #include <iostream>

using namespace std;

int main() {

	int n = 0;  // NUMERO EN 0.

	while (n < 100)  
	{
		cout << "" << n << endl; // MUESTRO VALOR DEL NUMERO Y LUEGO SUMO DE 5 EN 5 .

		n+=5;	
	}
	
	return 0;

} */


/**********************************************************************************************************/


/* 6.EJERCICIO:
Hacer un programa que solicite UN número y luego calcule y emita un cartel
aclaratorio si el mismo es primo o no es primo.
Nota: usando While.Ya lo hicimos con FOR, ahora con While. */

/* #include <iostream>

using namespace std;

int main() {

	int n, d = 1, con = 0;
	
	cin >> n;
	// CONDICION PARA ENTRAR AL CICLO WHILE.
	while (d <= n) {
		// CONDICION PARA EVALUAR DIVISIORES.
		if (n %d == 0){
			con++;
		}	
	}
	// FUERA DEL CICLO PREGUNTO CONDICION PARA SABER SI ES PRIMO O NO.
	if (con == 2) {
		cout << "Numero es primo: " << endl;
	}
	else {
		cout << "Numero no es primo:  " << endl;
	}

	return 0;
} */


/**********************************************************************************************************/

/* 7.EJERCICIO:
Hacer un programa que solicite una lista de números que corta cuando se
ingresa un cero y luego mostrar por pantalla el máximo de ellos y la posición
en la que fue ingresado. */ 


/* #include <iostream>

using namespace std;

int main() {

	int n, nM, pos = 1, p;
	

	cout << "Ingresa un numero" << endl;
	cin >> n;
	nM = n;
	p = pos;

	while (n != 0)
	{
		if (n > nM) {
			nM = n;
			p = pos;
		}

		pos++;
		cout << "Ingresa un numero" << endl;
		cin >> n;
	}

	cout << "numero mayor: "<< nM << endl;
	cout << "En posicion: " << p << endl;

	return 0;
} */


/**********************************************************************************************************/


/* 8.EJERCICIO:
Hacer un programa que solicite una lista de números que corta cuando se
ingresa un cero y luego mostrar por pantalla el menor y el segundo menor. */



/* #include <iostream>

using namespace std;

int main() {

	int n, nM1 , nM2 ;


	cout << "Ingresa un numero" << endl;
	cin >> n;
	nM1 = n;
	

	while (n != 0)
	{
		if (n < nM1) {
			nM2 = nM1;   // PISAR VARIABLES SI LA CONDICION SE CUMPLE.
			nM1 = n;
		}

		cout << "Ingresa un numero" << endl;
		cin >> n;
	}

	cout << "numero menor: " << nM1 << endl;
	cout << "sgundo numero menor: " << nM2 << endl;

	return 0;
} */ 


/**********************************************************************************************************/


/* 9.EJERCICIO: 
Realizar el nuevamente el ejercicio 8 pero ahora debe devolver además la
posición en la que fue encontrado cada uno de los mínimos. */


/* #include <iostream>

	using namespace std;

	int main() {

		int n, nM1, nM2 , pos = 0 , p1 , p2;


		cout << "Ingresa un numero" << endl;
		cin >> n;
		nM1 = n;
		p1 = pos++;


		while (n != 0)
		{
			if (n < nM1) {
				nM2 = nM1;   // PISAR VARIABLES SI LA CONDICION SE CUMPLE.
				p2 = p1;
				nM1 = n;
				p1 = pos;

			}

			cout << "Ingresa un numero" << endl;
			cin >> n;
			pos++;
			
		}

		cout << "numero menor: " << nM1 << endl;
		cout << "pos: " << p1 << endl;
		cout << "segundo numero menor: " << nM2 << endl;
		cout << "pos: " << p2 << endl;

		return 0;
	} */


/**********************************************************************************************************/


	/* 10.EJERCICIO:
	Hacer un programa que solicite una lista de números que corta cuando se
	ingresa un cero y luego emitir por pantalla el máximo de los números
	negativos y el mínimo de los números positivos. */


/* #include <iostream>

using namespace std;

int main() {


	// PASO 0 DECLARO LAS VARIABLES.
	int n , nN , nP, maxNeg, minPos; 
	bool bP = 0;
	bool bN = 0;
	
	// PASO 1 PIDO INGRESO DE DATOS.
	cin >> n;  

	while (n != 0)
	{
		// CONDICION PARA SACAR EL MININO POSITIVO
		if (n > 0) {
			if (bP == 0) {
				minPos = n;
				bP = 1;     // CAMBIA EL VALOR DE MI BANDERA, PARA QUE EN LA PROX VUELTA ENTRE AL ELSE.
			}
			else if (n < minPos) {
				minPos = n;
			}
		// CONDICION PARA SACAR EL MAX NEGATIVO.
		} else {
			if (bN == 0) {
				maxNeg = n;
				bN = 1;
			}
			else if(n > maxNeg){
				maxNeg = n;
			}
		}

		cin >> n;

		}

	cout << "numero mayor negativi: " << maxNeg << endl;
	cout << "numero menor positivo: " << minPos << endl;

	return 0; 
} */


/**********************************************************************************************************/


/* 11.EJERCICIO:
Hacer un programa para ingresar una lista de números que corta cuando se
ingresa un cero y luego mostrar : la cantidad de números primos, la cantidad de
números pares, la cantidad de positivos y la cantidad de negativos. */


/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DECLARO VARIABLES.
	int n, primo = 0, pares = 0, conPos = 0, conNeg = 0;

	cin >> n;

	while (n != 0)
	{

		// CONDICION PARA NUMEROS POS Y NEGA.
		if (n > 0) {
			conPos++;
		} else if (n < 0) {
			conNeg++;
		}

		// CONDICION PARA NUMEROS PARES.
		if (n % 2 == 0) {
			pares++;
		}

		// CONDICION DE PRIMOS.
		int con = 0;
		int d = 1;

		if (d <= n) {
			if (n % d == 0) {
				con++;
				d++;
			}
		} // CUENTA EL NUMERO DE DIVISIORES PARA DETERMINAR SI ES PRIMO.
		if (d == 2) {
			primo++;
		}
		
		cin >> n;
	}

	cout << "cantidad de primos: " << primo << endl;
	cout << "cantidad de pares: " << pares << endl;
	cout << "cantidad de positivos: " << conPos << endl;
	cout << "Cantidad de negativos: " << conNeg << endl;

	return 0;
} */
