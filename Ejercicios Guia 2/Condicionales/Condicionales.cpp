/* 1.EJERCICIO:
Hacer un programa para ingresar un número y luego se emita por pantalla un
cartel aclaratorio si “Es mayor a 10” o “No es mayor a 10”. */

/* #include <iostream>

using namespace std;

int main()
{

	// PASO 0 DEFINIR VARIABLE.
	int n1;

	// PASO 1 PEDIR DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> n1;

	// PASO 2 PREGUNTAR CONDICIONES.
	if ((n1 > 10) || (n1 < 10)) {
		cout << "Es mayor a 10" << endl;
	}
	else {
		cout << "Es menor a 10" << endl;
	};

	return 0;
}; */


/********************************************************************************************/

/* 2.EJERCICIO: 
Hacer un programa para ingresar dos números distintos y luego se muestre por
pantalla el menor de ellos. */



/* #include <iostream>

using namespace std;

int main()
{

	// PASO 0 DEFINIR VARIABLES.
	int n1 , n2;

	// PASO 1 PEDIR DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> n1;
	cout << "Ingresa otro numero" << endl;
	cin >> n2;


	// PASO 2 PREGUNTAR CONDICIONES.
	if (n1 < n2) {
		cout << ""<< n1 << endl;
	};



	return 0;
}; */



/********************************************************************************************/


/* 3.EJERCICIO: 
Hacer un programa para ingresar dos números y que luego emita por pantalla
el mayor de ellos o un cartel aclaratorio “Son iguales” en el caso de que así sea.
Nota: los números pueden ser iguales. */



/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DEFINIR VARIABLES.
	int n1, n2;

	// PASO 1 PEDIR DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> n1;
	cout << "Ingresa otro numero" << endl;
	cin >> n2;

	// PASO 2 PREGUNTAR CONDICIONES.
	if (n1 > n2){
		cout << "Numero mayor es: " << n1<< endl;
	}
	if (n2 > n1){
		cout << "El mayor es: " << n2 << endl;
	}
	if (n2 == n1){
		cout << "Ambos numeros son iguales " << endl;
	};

	return 0;
}; */



/********************************************************************************************/


/* 4.EJERCICIO:
Hacer un programa para ingresar un número y luego se emita un cartel por
pantalla “Positivo” si el número es mayor a cero, “Negativo” si el número es
menor a cero o “Cero” si el número es igual a cero. */



/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DEFINIR VARIABLES.
	int n1;

	// PASO 1 PEDIR DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> n1;

	// PASO 2 PREGUNTAR CONDICIONES.
	if (n1 > 0) {
		cout << "Positivo " <<  endl;
	}
	if (n1 <= 0) {
		cout << "Negativo " << endl;
	};
	
	return 0;
}; */



/********************************************************************************************/

/* 5.EJERCICIO:
Hacer un programa para ingresar un número y mostrar por pantalla un cartel
aclaratorio si el mismo es PAR o IMPAR. */



/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DEFINIR VARIABLES.
	int n1;

	// PASO 1 PEDIR DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> n1;

	// PASO 2 PREGUNTAR CONDICIONES.
	if (n1 %2 == 0) {                    // CONDICION PARA NUMERO PAR.
		cout << "Numero Par " << endl;  
	}
	if (n1 %2 != 0) {					// CONDICION PARA NUMERO IMPAR.
		cout << "Numero Impar " << endl; 
	};

	return 0;
}; */



/********************************************************************************************/

/* 6.EJERCICIO:
Una casa de video juegos otorga un descuento dependiendo del importe de la
compra realizada según los siguientes valores:
• Si el importe es menor a ARS 1000, no hay descuento.
• Si el importe es ARS 1000 o más pero menor a ARS 5000, aplica un
descuento del 10%.
• Si el importe es ARS 5000 o más, aplica un descuento del 18%.
Hacer un programa para ingresar un importe de venta y luego muestre por
pantalla el importe final con el descuento que corresponda. */



/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DEFINIR VARIABLES.
	int importeDeVenta;

	// PASO 1 PEDIR DATOS.
	cout << "Ingresa el importe de la venta" << endl;
	cin >> importeDeVenta;

	// PASO 2 PREGUNTAR CONDICIONES.
	if (importeDeVenta < 1000) {
		cout << "El importe final a pagar es: "<< importeDeVenta << endl;
	}
	if (importeDeVenta >= 1000 && importeDeVenta < 5000) {
		int x = importeDeVenta * 0.10;
		int importeMenosel18 = importeDeVenta - x;
		cout << "El importe final a pagar es: " << importeMenosel18 << endl;
	}
	if (importeDeVenta >= 5000) {
		int y = importeDeVenta * 0.18;
		int importeMenoselVeinte = importeDeVenta - y;
		cout << "El importe final a pagar es: " << importeMenoselVeinte << endl;
	};

	return 0;
}; */



/********************************************************************************************/


/* 7.EJERCICIO:
Hacer un programa para ingresar cuatro números distintos y luego mostrar por
pantalla el mayor de ellos. */


/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DEFINIR VARIABLES.
	int n1 ,n2 ,n3 ,n4;

	// PASO 1 PEDIR DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> n1;
	cout << "Ingresa un numero" << endl;
	cin >> n2;
	cout << "Ingresa un numero" << endl;
	cin >> n3;
	cout << "Ingresa un numero" << endl;
	cin >> n4;


	// PASO 2 PREGUNTAR CONDICIONES.
	if ((n1 > n2) && (n1 > n2) && (n1 > n3) && (n1 > n4)) {
		cout << "Numero Mayor es: " << n1 << endl;
	}
	if ((n2 > n1) && (n2 > n3) && (n2 > n4)) {
		cout << "El numero Mayor es: " << n2 << endl;
	}
	if ((n3 > n1) && (n3 > n2) && (n3 > n4)) {
		cout << "El numero Mayor es: " << n3 << endl;
	}
	if ((n4 > n1) && (n4 > n2) && (n4 > n3)) {
		cout << "El numero Mayor es: " << n4 << endl;
	};

	return 0;
}; */


/********************************************************************************************/


/* 8.EJERCICIO:
Hacer un programa para ingresar cuatro números distintos y luego mostrar por
pantalla el menor de ellos. */



/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DEFINIR VARIABLES.
	int n1, n2, n3, n4;

	// PASO 1 PEDIR DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> n1;
	cout << "Ingresa un numero" << endl;
	cin >> n2;
	cout << "Ingresa un numero" << endl;
	cin >> n3;
	cout << "Ingresa un numero" << endl;
	cin >> n4;


	// PASO 2 PREGUNTAR CONDICIONES.
	if ((n1 < n2) && (n1 < n2) && (n1 < n3) && (n1 < n4)) {
		cout << "Numero Menor es: " << n1 << endl;
	}
	if ((n2 < n1) && (n2 < n3) && (n2 < n4)) {
		cout << "El numero Menor es: " << n2 << endl;
	}
	if ((n3 < n1) && (n3 < n2) && (n3 < n4)) {
		cout << "El numero Menor es: " << n3 << endl;
	}
	if ((n4 < n1) && (n4 < n2) && (n4 < n3)) {
		cout << "El numero Menor es: " << n4 << endl;
	};

	return 0;
}; */



/********************************************************************************************/


/* 9.EJERCICIO:
Hacer un programa para ingresar cinco números distintos y luego mostrar por
pantalla el mayor y el menor de ellos. */


/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DEFINIR VARIABLES.
	int n1, n2, n3, n4 ,n5;

	// PASO 1 PEDIR DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> n1;
	cout << "Ingresa un numero" << endl;
	cin >> n2;
	cout << "Ingresa un numero" << endl;
	cin >> n3;
	cout << "Ingresa un numero" << endl;
	cin >> n4;
	cout << "Ingresa un numero" << endl;
	cin >> n5;

	// PASO 2 PREGUNTAR CONDICIONES.

	// MENORES CONDICION 1

	if ((n1 < n2) && (n1 < n2) && (n1 < n3) && (n1 < n4) && (n4 < n5)) {
		cout << "Numero Menor es: " << n1 << endl;
	}
	if ((n2 < n1) && (n2 < n3) && (n2 < n4) && (n4 < n5)) {
		cout << "El numero Menor es: " << n2 << endl;
	}
	if ((n3 < n1) && (n3 < n2) && (n3 < n4) && (n4 < n5)) {
		cout << "El numero Menor es: " << n3 << endl;
	}
	if ((n4 < n1) && (n4 < n2) && (n4 < n3) && (n4 < n5)) {
		cout << "El numero Menor es: " << n4 << endl;
	}
	if ((n5 < n1) && (n5 < n2) && (n5 < n3) && (n5 < n4)) {
		cout << "El numero Menor es: " << n4 << endl;
	} 
	
	// MAYORES CONDICION 2

	if ((n1 > n2) && (n1 > n2) && (n1 > n3) && (n1 > n4) && (n1 > n5)) {
		cout << "Numero Mayor es: " << n1 << endl;
	}
	if ((n2 > n1) && (n2 > n3) && (n2 > n4) && (n2 > n5)) {
		cout << "El numero Mayor es: " << n2 << endl;
	}
	if ((n3 > n1) && (n3 > n2) && (n3 > n4) && (n3 > n5)) {
		cout << "El numero Mayor es: " << n3 << endl;
	}
	if ((n4 > n1) && (n4 > n2) && (n4 > n3) && (n4 > n5)) {
		cout << "El numero Mayor es: " << n4 << endl;
	}
	if ((n5 > n1) && (n5 > n2) && (n5 > n3) && (n5 > n4)) {
		cout << "El numero Mayor es: " << n4 << endl;
	};
	
	return 0;
}; */


/********************************************************************************************/


/* 10.EJERCICIO:
Hacer un programa para ingresar cuatro números y luego mostrar por pantalla
cuáles son mayores a 100. */

/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DEFINIR VARIABLES.
	int n1, n2, n3, n4;

	// PASO 1 PEDIR DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> n1;
	cout << "Ingresa un numero" << endl;
	cin >> n2;
	cout << "Ingresa un numero" << endl;
	cin >> n3;
	cout << "Ingresa un numero" << endl;
	cin >> n4;
	
	// PASO 2 PREGUNTAR CONDICIONES.
	if (n1 > 100) {
		cout << "" << n1 << endl;
	}
	if (n2 > 100) {
		cout << "" << n2 << endl;
	}
	if (n3 > 100) {
		cout << "" << n3 << endl;
	}
	if (n4 > 100) {
		cout << "" << n4 << endl;
	};

	return 0;
}; */



/********************************************************************************************/


/* 11.EJERCICIOS:
Hacer un programa para ingresar cuatro números y luego mostrar por pantalla
cuántos son menores a 100. */


/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DEFINIR VARIABLES.
	int n1, n2, n3, n4;
	int x = 0;
	

	// PASO 1 PEDIR DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> n1;
	cout << "Ingresa un numero" << endl;
	cin >> n2;
	cout << "Ingresa un numero" << endl;
	cin >> n3;
	cout << "Ingresa un numero" << endl;
	cin >> n4;

	// PASO 2 PREGUNTAR CONDICIONES.
	if (n1 < 100) {
		x++;
	}
	if (n2 < 100) {
		x++;
	}
	if (n3 < 100) {
		x++;
	}
	if (n4 < 100) {
		x++;
	};
	

	// PASO 3 MOSTRAR EN PANTALLA CANTIDAD DE NUMEROS.
	cout << "La canidad de numeros menores a 100: " << x << endl;

	return 0;
}; */



/********************************************************************************************/

/* 12.EJERCICIO:
Hacer un programa para ingresar un valor que estará expresado en minutos.Si
los minutos superan los 60, pasar el valor a horas, de lo contrario dejarlo en
minutos.Mostrar el resultado en pantalla aclarando si se muestran minutos u
horas. */



/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DEFINIR VARIABLES.
	int minutos;
	int hora = 0;

	// PASO 1 PEDIR DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> minutos;

	// PASO 2 PREGUNTAR CONDICIONES.
	if (minutos > 60){
		hora++;
		cout << "Hora: " << hora << endl;
	}
	if (minutos < 60) {
		cout << "Minutos: " << minutos << endl;
	};
	


	return 0;
}; */