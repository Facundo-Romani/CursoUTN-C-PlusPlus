/* 2.EJERCICIO:
Hacer un programa para solicitar por teclado un número y luego devolver su
valor elevado al cubo. */



/* #include <iostream>

 using namespace std;

int main()
{	
	// PASO 0 DECLARACION DE VARIABLES.
	int x;
	int resultado;

	// PASO 1 PEDIMOS EL INGRESO DEL NUMERO.
	cout << "Ingresa un numero" << endl;
	cin >> x;

	// PASO 2 AL NUMERO INGRESADO LO MULTIPICAMOS POR 3 ALMACENANDO EL RESULTADO EN LA VARIABLE RESULTADO.
	resultado = x * 3;	

	// PASO 3 MOSTRAMOS EN PANTALLA EL RESULTADO FINAL.
	cout << "El resultado final del numero ingresado elevado al cubo es: " << resultado << endl;

	
	return 0;
}; */


/*******************************************************************************************/


/* 3.EJERCICIO:
Hacer un programa que permita ingresar el año actual y el año de la fecha de
nacimiento de una persona y luego calcule y emita por pantalla su edad.*/



/* #include <iostream>

using namespace std;

int main() {
	
	// PASO 0 DECLARACION DE VARIABLES. 
	int x, y;
	int edad;

	// PASO 1 PEDIR INGRESO DE DATOS.
	cout << "Ingresa el ano Actual: " << endl;
	cin >> x;
	cout << "Ingresa el ano de tu nacimiento: " << endl;
	cin >> y;

	// PASO 2 HACER EL CALCULO Y LUEGO ALMACENARLO EN VARIABLE EDAD.
	edad = x - y;

	// PASO 3 MOSTRAR EN PANTALLA LA EDAD DE LA PERSONA.
	cout << "Tu edad actual es: " << edad << endl;


	return 0; 
}; */



/*******************************************************************************************/


/* 4.EJERCICIO:
Hacer un programa que permita ingresar los kilómetros existentes entre dos
ciudades y la velocidad promedio de un vehículo.Calcular y emitir por pantalla
el tiempo aproximado que demandará llegar de un punto a otro teniendo en
cuenta los datos ingresados. */


/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DECLARO VARIABLES.
	int x, y, z;  

	// PASO 1 INGRESO DE DATOS.
	cout << "Ingresar los kilometros de una ciudad a la otra" << endl;
	cin >> x;
	cout << "Ingresar velocidad promedio de un vehiculo" << endl;
	cin >> y;

	// PASO 2 CALCULO PARA OBTENER EL TIEMPO. 
	z = x / y;

	// PASO 3 MOSTRAR EN PANTALLA EL TIMPO TOTAL.
	cout << "Tiempo aprox que llegara a la otra ciudad: " << z << endl;

	return 0;

}; */



/*******************************************************************************************/

/* 5.EJERCICIO:
Una casa de computación paga a sus empleados un sueldo fijo de ARS15000
más una comisión del 5 % sobre el total facturado por cada empleado.Hacer un
programa para ingresar el total facturado por un empleado y que luego calcule
y emita por pantalla el sueldo total a cobrar por el mismo.*/



/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 VARIABLES
	int sueldoFijo = 15000;
	int totalFacturado;

	// PASO 1 PIDO INGRESO DE DATOS.
	cout << "Ingrese Monto todal facurado del mes: " << endl;
	cin >> totalFacturado;

	// CALCULO PARA SACAR EL SUELDO TOTAL A PAGAR.
	int sueldoTotalaCobrar = (totalFacturado * 0.5) / 100 + sueldoFijo;

	// MUESTRO EN PANTALLA SUELDO TODAL.
	cout << "sueldo a cobrar: " << sueldoTotalaCobrar << endl;


	return 0;
}; */


/*******************************************************************************************/


/* 6.EJERCICIO:
Hacer un programa para ingresar por teclado las tres notas de exámenes de un
alumno y luego calcule y emita por pantalla el promedio final. */


/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DEFINIR VARIABLES.
	float nota1, nota2, nota3;

	// PASO 1 PEDIR DATOS E INGRESAR. 
	cout << "Ingresa tu primera nota: " << endl;
	cin >> nota1;
	cout << "Ingresa tu segunda nota: " << endl;
	cin >> nota2;
	cout << "Ingresa tu tercera nota: " << endl;
	cin >> nota3;

	// PASO 2 CALCULAR PROMEDIO.
	float promedio = (nota1 + nota2 + nota3) / 3;

	// PASO 3 MOSTRAR EN PANTALLA PRODMEDIO.
	cout << "Tu promedio final es: "<< promedio << endl;

	return 0;
}; */



/*******************************************************************************************/

/* 7.EJERCICIO:
Hacer un programa para ingresar por teclado los metros cuadrados totales de
un predio y los metros cuadrados cubiertos; luego calcular y mostrar por
pantalla el porcentaje de metros cuadrados cubiertos y el porcentaje de
metros cuadrados descubiertos */


/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 DEFINIR VARIABLES.
	int x, y;


	// PASO 1 PEDIR INGRESO DE DATOS.
	cout << "Ingresa los metros cuadrados del predio: " << endl;
	cin >> x;
	cout << "Ingresa los metros cuadrados cubiertos: " << endl;
	cin >> y;

	// PASO 2 HACER EL CALCULO.

	int z = x - y ; // RESTA PARA SACAR EL PORCENTAJE DE METROS DESCUBIERTOS QUE VALE Z.
	
	int porcentajeDmc = (y * 100) / x; // (Y = METROS CUBIERTOS) POR CONSTANTE *100 DIVIDIDO METROS TOTALES.

	int porcetajeDmd = (z * 100) / x ; // (Z = METROS DESCUBIERTOS) POR CONSTANTE *100 DIVIDIDO METROS TOTALES.
		
	// PASO 3 MOSTRAR EN PANTALLA LOS SOLICITADO DE LOS PORCENTAJES.

	cout << "Porcentaje de MCC: " << porcentajeDmc << endl;
	cout << "Porcentaje de MCD: " << porcetajeDmd << endl;

	return 0;
}; */



/*******************************************************************************************/


/*8.EJERCICIO:
Una importante cadena de delivery cuenta con una promoción por tiempo
limitado en la que otorga un 15 % de descuento sobre el total del valor de la
compra realizada.Hacer un programa para solicitar el monto total y el mismo
calcule y emita por pantalla el total a cobrar con el descuento aplicado. */


/* #include <iostream>

using namespace std;

int main() {

	// PASO 0 VARIABLE.
	int montoTotal;

	// PASO 1 PEDIR DATOS.
	cout << "INGRESE MONTO TOTAL: " << endl;
	cin >> montoTotal;

	// PASO 2 CALCULO PARA EMITIR EL TOTAL A COBRAR.
	int descuentoDelTotal = (montoTotal * 15) / 100; // SACAMOS EL DESCUENTO CON REGLA DE 3 SIMPLE.
	int precioFianalConDescuento = montoTotal - descuentoDelTotal; // AL MONTO TOTAL LE RESTAMOS EL DESCUENTO.


	// PASO 3 MOSTRAR PRECIO FINAL EN PANTALLA.
	cout << "TOTAL A PAGAR CON DESCUENTO INCLUIDO: " << precioFianalConDescuento << endl;



	return 0;
}; */




/*******************************************************************************************/


/* 9.EJERCICIO:
Una universidad desea conocer los porcentajes de mujeres y hombres en las
carreras de ciencias exactas.Se solicita un programa para cargar la cantidad de
mujeres y la cantidad de hombres y que el mismo calcule y emita por pantalla
los porcentajes correspondientes.*/


 /* #include <iostream>

using namespace std;

int main() {

	// PASO 0 VARIABLES.
	int totalDeVarones;
	int totalDeMujeres;

	// PASO 1 PEDIR DATOS.
	cout << "INGRESE TOTAL DE ALUMNOS VARONES: " << endl;
	cin >> totalDeVarones;
	cout << "INGRESE TOTAL DE ALUMNOS MUJERES: " << endl;
	cin >> totalDeMujeres;

	// PASO 2 CALCULAR PORCENTAJES.
	int totalDeAlumnos = totalDeVarones + totalDeMujeres;
	
	int porcentajeDeHombres = (totalDeVarones * 100) / totalDeAlumnos;

	int porcentajeDeMujeres = (totalDeMujeres * 100) / totalDeAlumnos;

	// PASO 3 MOSTRAR EN PANTALLA.
	cout << "Porcentaje de Varones es: " << porcentajeDeHombres << endl;
	cout << "Porcentaje de Mujeres es: " << porcentajeDeMujeres << endl;

	return 0; 
}; */



/*******************************************************************************************/


/* 10.EJERCICIO:
Hacer un programa que permita ingresar por teclado dos números y que luego
muestre por pantalla la suma, la resta, la multiplicación y la división de dichos
números.Se deben mostrar cuatro resultados en pantalla.Los números deben
ser solicitados una única vez. */



 /* #include <iostream>

using namespace std; 

int main() {

	// PASO 0 VARIABLES.
	int x, y;

	// PASO 1 INGRESO DE DATOS.
	cout << "Ingresa un numero" << endl;
	cin >> x;
	cout << "Ingresa un numero" << endl;
	cin >> y;

	// PASO 2 CALCULOS.
	int suma = x + y;
	int resta = x + y;
	int multiplicacion = x * y;
	int division = x / y;

	// PASO 3 MOSTRAR RESULTADOS EN PANTALLA.
	cout << "RESULTADO DE SUMA: " <<suma<< endl;
	cout << "RESULTADO DE RESTA: " <<resta<< endl;
	cout << "RESULTADO DE MULTIPLICACION: "<<multiplicacion << endl;
	cout << "RESULTADO DE DIVICION: " <<division<< endl;

	return 0;
}; */ 