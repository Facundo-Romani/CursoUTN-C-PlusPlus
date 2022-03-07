/* 1.EJERCICIO:
Hacer un programa que solicite el ingreso de un número y que luego emita un
cartel por pantalla aclarando si el mismo es múltiplo de 5. */



/* #include <iostream>

using namespace std;

int main()
{
	// PASO 0 DECLARAR VARIABLES.
	int x;

	// PASO 1 PEDIR DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> x;

	// PASO 2 CONDICION.
	if (x %5 == 0) {
		cout << "El numero ingresado es multiplo de cinco: " << x << endl;
	};


	return 0;
}; */



/***********************************************************************************************/


/* 2.EJERCICIO:
Hacer un programa que solicite el ingreso de dos números y luego calcular :
a.La resta si el primero es mayor que el segundo.
b.La suma si son iguales.
c.El producto si el primero es menor.
Se deberá emitir un cartel por pantalla con el resultado correspondiente. */



/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 VARIABLES.
	int x;
	int y;

	// PASO 1 PEDIR LOS DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> x;
	cout << "Ingresa un numero" << endl;
	cin >> y;


	// PASO 3 CONDICIONES.
	if (x > y) {
		int r = x - y;
		cout << "Resta: "<< r << endl;
	}
	if (x == y) {
		int r = x + y;
		cout << "Suma: " << r << endl;
	}
	if (x < y) {
		int r = x * y;
		cout << "Producto:" << r << endl;
	};

}; */



/***********************************************************************************************/


/* 3.EJERCICIO:
Hacer un programa para ingresar dos números.Si el segundo es distinto de
cero, calcular la división del primero por el segundo y mostrar el resultado por
pantalla; caso contrario, emitir un cartel aclarando que no se puede dividir por
cero.*/



/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 VARIABLES.
	int x;
	int y;

	// PASO 1 PEDIR LOS DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> x;
	cout << "Ingresa un numero" << endl;
	cin >> y;


	// PASO 3 CONDICIONES.
	if (y != 0 ) {
		int r = x / y;
		cout << "Resultado: " << r << endl;
	}
	if (y == 0) {
		cout << "No puede dividirse por cero " << endl;
	};

	return 0;
}; */



/***********************************************************************************************/

/* 4.EJERCICIO:
Un importante negocio de desinfectante líquido realiza descuentos
dependiendo de la cantidad de litros vendidos según la siguiente escala :
a.Si vende menos de 100 litros, no hay descuento.
b.Si vende entre 101 y 300 litros, el descuento es del 10 % .
c.Si vende entre 301 y 500 litros, el descuento es del 15 % .
d.Finalmente, si la venta es de más de 500 litros, el descuento es del 25 % .
Hacer un programa que solicite el ingreso del importe total de la venta y la
cantidad de litros vendidos y calcule y emita el importe con el descuento
aplicado. */ 



/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 VARIABLES.
	int x;

	// PASO 1 PEDIR LOS DATOS.
	cout << "Ingresa la venta" << endl;
	cin >> x;


	// PASO 3 CONDICIONES.
	if (x <= 100) {
		cout << "Total a pagar: " << x << endl;
	}
	if ((x > 101) && (x <= 300)) {
		int descuentoUno = (x * 0.10);
		int descuentoFinalUno = x - descuentoUno;
		cout << "Total a pagar: " << descuentoFinalUno << endl;
	}
	if ((x > 301) && (x <= 500)) {
		int descuentoDos = (x * 0.15);
		int descuentoFinalDos = x - descuentoDos;
		cout << "Total a pagar: " << descuentoFinalDos << endl;
	}
	if (x > 500) {
		int descuentoTres = (x * 0.25);
		int descuentoFinalTres = x - descuentoTres;
		cout << "Total a pagar: " << descuentoFinalTres << endl;
	};

	return 0;
}; */



/***********************************************************************************************/



/* 5.EJERCICIO:
Hacer un programa que solicite el ingreso de las notas del primer parcial y del
segundo parcial de una alumna de programación.El programa deberá analizar
las notas y emitir la situación de la alumna según la siguiente escala :
a.Si tiene 8 o más en ambos parciales, emitir “aprobación directa”.
b.Si no tiene 8 o más en ambos pero tiene aprobados ambos parciales(se
aprueba con 6 o más), emitir “rinde examen final”.
c.Si tiene menos de 6 en alguno de los dos parciales, emitir “debe
recuperar”.
El programa debe emitir solo un cartel, el que corresponda. */




/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 VARIABLES.
	int x;
	int y;

	// PASO 1 PEDIR LOS DATOS.
	cout << "Ingresa Nota de la Alumna primer parcial" << endl;
	cin >> x;
	cout << "Ingresa Nota de la Alumna segundo parcial" << endl;
	cin >> y;

	// PASO 3 CONDICIONES.
	if ((x >= 8) && (y >= 8)) {
		cout << "APROBADO " << endl;
	}
	if ((x >= 6) && (y >= 6)) {
		cout << "RINDE EXAMEN FINAL " << endl;
	}
	else {
		cout << "ENTRA A RECUPERATORIO " << endl;
	};

	return 0;
}; */




/***********************************************************************************************/


/* 6.EJERCICIO:
Hacer un programa para ingresar por teclado la longitud de los tres lados de un
triángulo y que luego determine e informe con un cartel aclaratorio a qué tipo
de triángulo corresponde :
a.Equilátero : cuando los tres lados sean iguales.
b.Isósceles : cuando dos de los tres lados sean iguales.
c.Escaleno : cuando todos los lados sean distintos. */



/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 VARIABLES.
	int x;
	int y;
	int z;

	// PASO 1 PEDIR LOS DATOS.
	cout << "Ingresa primer lado" << endl;
	cin >> x;
	cout << "Ingresa segundo lado" << endl;
	cin >> y;
	cout << "Ingresa tercer lado" << endl;
	cin >> z;


	// PASO 3 CONDICIONES.
	if ((x == y) && (z == x)) {
		cout << "Equilatero " << endl;
	}
	if ((x == y) && (z != x)) {
		cout << "Isosceles" << endl;
	}
	if ((x != y) && (z != x)) {
		cout << "Escaleno " << endl;
	};

	return 0;
}; */


/***********************************************************************************************/


/* 7.EJERCICIO:
Hacer un programa para ingresar 4 números.Luego analizar e informar por
pantalla si los mismos se encuentran ordenados de forma decreciente. */



/* #include <iostream>

using namespace std;

int main() {

	int x, y, z, r;

	cout << " ingresa cuatro numeros" << endl;
	cin >> x;
	cin >> y;
	cin >> z;
	cin >> r;

	if ((x < y) && (y < z) && (z < r)) {
		cout << " DECRECIENTE" << endl;
	};


	return 0;
}; */



/***********************************************************************************************/



/* 8.EJERCICIO: 
El negocio de desinfectante antes mencionado vende además detergente
suelto, y los precios se aplican según la siguiente escala :
a. 25 ARS por litro los primeros 50 litros.
b. 20 ARS por litro si la venta es de 51 a 200 litros.
c. 15 ARS por litro si la venta es de 201 a 500 litros.
d. 10 ARS por litro si la venta es de más de 500 litros.
Además, si paga en efectivo, tiene un adicional del 10 % sobre el importe final.
Hacer un programa que solicite la cantidad de litros vendidos y el tipo de pago
(ingresará 1 si paga en efectivo y 0 con cualquier otro medio de pago) y calcule
y emita por pantalla el monto final a abonar por el cliente. */



/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 VARIABLE.
	int x;
	int total;
	int pago;

	// PASO 1 INGRESO EL DATO.
	cout << "Negocio de desinfectante ingrese el la cantidad de litros a comprar" << endl;
	cin >> x;

	//	COMPRA.
	if (x <= 50) {
		total = x * 25;
		cout << "total: " << total << endl;
	}
	if ((x >= 51) && (x <= 200)) {
		 total = x * 20;
		cout << "total: " << total << endl;
	}
	if ((x >= 201) && (x <= 500)) {
		total = x * 25;
		cout << "total: " << total << endl;
	}
	if (x > 500) {
		int total = x * 10;
		cout << "total: " << total << endl;
	};

	// INGRESA FORMA DE PAGO.
	cout << "DIGITE 1 PARA ABONAR EFECTIVO O CERO PARA TARJETA" << endl;
	cin >> pago;


	// CONDICION DE PAGO.
	if (pago == 1) {
		int totalEfectivo = total * 0.10;
		int totalEnEfectivo = total - totalEfectivo;
		cout << "litros vendidos: " << x << endl; 
		cout << "Total a pagar:  " << totalEnEfectivo << endl;
	}
	else {
		cout << "litros vendidos: " << x << endl;
		cout << "total: " << total << endl;
	};



	return 0;

}; */


/***********************************************************************************************/


/* 9.EJERCICIO:
Una importante marca de computadoras permite elegir cierta configuración del
equipo a comprar. Para ello existe la siguiente escala de precios :

			i5(1)		i7(2)		    i9(3)
8  RAM(1)	USD 800     USD 900 		USD 1200
16 RAM(2)	USD 900 	USD	1000 		USD 1400
32 RAM(3)	USD 1000 	USD 1400 		USD 2000

Además, el equipo viene con un disco que permite almacenar 500 GB de
información y que se puede ampliar a 1 TB si así lo desea, lo cual tiene un costo
adicional de USD 300.
Hacer un programa que solicite la opción de procesador, la opción de memoria
RAM, y si extiende el disco o no(ingresa 1 para extender y 0 para no extender)
y calcule y emita por pantalla el monto de la máquina seleccionada. */



/* #include <iostream>

using namespace std;

int main() {

	int procesador, ram, disco, p ;

	// MENU DE OPCIONES PARA EL CLIENTE.
	cout << "***********************************************" << endl;
	cout << "Bienvenido a casa de computacion" << endl;
	cout << "***********************************************" << endl;
	cout << "Seleccione un procesador para su pc: " << endl;
	cout << "***********************************************" << endl;
	cout << "Procesador i5 -Digite 1 " << endl;
	cout << "Procesador i7 -Digite 2 " << endl;
	cout << "Procesador i9 -Digite 3 " << endl;
	cin >> procesador;
	cout << "***********************************************" << endl;
	cout << "Seleccione cantidad de Ram para su pc: " << endl;
	cout << "***********************************************" << endl;
	cout << "Procesador 8ram -Digite 1 " << endl;
	cout << "Procesador 16ram -Digite 2 " << endl;
	cout << "Procesador 32ram -Digite 3 " << endl;
	cin >> ram;
	cout << "***********************************************" << endl;
	cout << "***********************************************" << endl;
	cout << "Para expandir la memoria del disco presione 1 de lo contrario 0: " << endl;
	cin >> disco;
	cout << "***********************************************" << endl;
	cout << "***********************************************" << endl;

	// OPCIONES DE PROCESADOR UTILIZANDO UN SWITCH.

	switch (procesador) {
	case 1:
		if (procesador == 1) {
			cout << "Procesador i5" << endl;

			// SWITCH RAM.
			switch (ram) {
			case 1:
				if (ram == 1) {
					cout << "8gb de ram" << endl;
					p = 800;
				}
				break;

			case 2:
				if (ram == 2) {
					cout << "16gb de ram" << endl;
					p = 900;
				}
				break;

			case 3:
				if (ram == 3) { 
					cout << "32gb de ram" << endl;
					p = 1000;
				}
				break;

			default: cout << "error" << endl;
			}
		}



	case 2: // CASO 2 DE SWITCH CONTENEDOR.
		if (procesador == 2) {
			cout << "Procesador i7" << endl;

			// SWITCH RAM.
			switch (ram) {
			case 1:
				if (ram == 1) {
					cout << "8gb de ram" << endl;
					p = 900;
				}
				break;

			case 2:
				if (ram == 2) {
					cout << "16gb de ram" << endl;
					 p = 1000;
				}

				break;

			case 3:
				if (ram == 3) {
					cout << "32gb de ram" << endl;
					p = 1400;
				}
				break;

			default: cout << "error" << endl;
			}
		}



	case 3: // CASO 3 DE SWITCH CONTENEDOR.
		if (procesador == 3) {
			cout << "Procesador i9" << endl;

			// SWITCH RAM.
			switch (ram) {
			case 1:
				if (ram == 1) {
					cout << "8gb de ram" << endl;
					p = 1200;
				}
				break;

			case 2:
				if (ram == 2) {
					cout << "16gb de ram" << endl;
					p = 1400;
				}
				break;

			case 3:
				if (ram == 3) {
					cout << "32gb de ram" << endl;
					p = 2000;
				}
				break;

			default: cout << "error" << endl;
			}
		} break;

		default: cout << "error" << endl;
	}


	// CODICIONES PARA EXTENDER EL DISCO.
	if (disco == 1) {
		int totalExDis = p + 300;
		cout << "TOTAL: " << totalExDis << endl;
	}
	else if (disco == 0) {
		cout << "TOTAL: " << p << endl;
	};

return 0;
} */




/***********************************************************************************************/


/* 10.EJERCICIO:
Hacer un programa que solicite cuatro números y emitir un cartel aclaratorio si
son todos iguales entre sí, caso contrario, no emitir nada. */



/* #include <iostream>

using namespace std;

int main() {


	int n1, n2, n3, n4;

	cout << "Ingresa 4 numeros: " << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;

	if ((n1 == n2) && (n1 == n3) && (n1 == n4)) {
		cout << "son todos iguales entre si" << endl;
	};


	return 0;
} */



/***********************************************************************************************/

/* 11.EJERCICIO:
Hacer un programa para ingresar tres números y luego mostrarlos ordenados
de menor a mayor. */



/* #include <iostream>

using namespace std;

int main() {

	int n1, n2, n3;

	cout << "Ingresa 3 numeros: " << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;

	if (n1 < n2 && n2 < n3) {
		cout << "" << n1 << endl;
		cout << "" << n2 << endl;
		cout << "" << n3 << endl;
	} else if (n2 < n1 && n2 < n3) {
		cout << "" << n2 << endl;
		cout << "" << n1 << endl;
		cout << "" << n3 << endl;
	} else if(n3 < n2 && n3 < n1) {
		cout << "" << n3 << endl;
		cout << "" << n2 << endl;
		cout << "" << n1 << endl;
	}

	return 0;
} */


/***********************************************************************************************/


/* 12.EJERCICIO:
Hacer un programa para ingresar tres números y emitir un cartel aclaratorio si
la suma de los dos primeros es mayor al producto del segundo con el tercero. */


/* #include <iostream>

using namespace std;

int main() {

	int n1, n2, n3, r ,r2;

	cout << "Ingresa 3 numeros: " << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;

	r = n1 + n2;
	r2 = n2 * n3;

	if (r > r2) {
		cout << "Suma es mayor" << endl;
	}
	else {
		cout << "Suma es menor" << endl;
	}

	return 0;

}; */

