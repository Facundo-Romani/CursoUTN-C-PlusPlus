/* 1.EJERCICIO:
Hacer una función llamada “producto” que reciba dos números enteros y que devuelva
el producto de ambos. Luego hacer un programa que pida el precio  
de un artículo y la cantidad vendida y muestre por pantalla el monto total a  pagar. Usar la función. */



/* #include <iostream>

using namespace std;

// SE DECLARA LA FUNCION.
int producto(int x, int y);

int main()
{
    int precioDelArticulo;
    int cantidadVendida;

    // PEDIMOS AL USUARIO EL INGRESO DE DATOS.
    cout << "Ingresa el precio del Articulo" << endl;
    cin >> precioDelArticulo;
    cout << "Ingresa cantidad Vendida" << endl;
    cin >> cantidadVendida;

    // SE LLAMA A LA FUNCION QUE CALCULA EL PRODUCTO.
    cout << "El total a Pagar es: " << producto(precioDelArticulo, cantidadVendida) << endl;
    

    return 0;
}


// SE CREA LA FUNCION.
int producto(int x, int y) {

    int  resultado = x * y;

    return(resultado);
}; */


/*********************************************************************************************/

/* 2.EJERCICIO:
Hacer una función llamada “mayor” que reciba dos números enteros y devuelva 
el mayor de ellos o cero si son iguales. */



/*#include <iostream>

using namespace std;

int mayor(int x, int y);

int main()
{
    int x;
    int y;
    int numeroMayor;

    cout << "Ingresa un numero" << endl;
    cin >> x;
    cout << "Ingresa otro numero" << endl;
    cin >> y;
    numeroMayor = mayor(x, y);

    cout << "El numero mayor es: " <<numeroMayor << endl;

    return 0;
}

int mayor( int x, int y) {

    
    if (x > y) {
        return x;
    }
    if (y > x) {
        return y;
    }
    if (x == y){
        cout << "Los numeros son iguales" << endl;

    }
   
    return(x, y);
}; */



/*********************************************************************************************/

/* 3.EJERCICIO:
Hacer una función llamada “par” que reciba un número entero y devuelva 1 si  es par o cero si no lo es.
Hacer un programa para ingresar 20 números y  mostrar por pantalla cuántos son pares. */




/*#include <iostream>

using namespace std;

int par(int x);

int main()
{
    int x [20];
    
    // INICIO EL CICLO FOR Y PIDIENDO AL USUARIO INGRESO POR CONSOLA  Y LOS ALMACENO EN MI ARREGLO.
    for (int i = 0; i < 20; i++) {
        cout << "Ingresa un numero" << endl;
        cin >> x[i];
    }
    
    // EN ESTE CICLO FOR LLAMO A LA FUNCION PAR PARA QUE ME DETERMINE CUALES SON LOS NUMEROS PARES POR MEDIO DE LA CONDICION.
    for (int i = 0; i < 20; i++) {
        if (x[i] % 2 == 0) {
            cout << "Numeros pares: " << par(x[i]) << endl;
        }
        
    }
   
    return 0;
};


int par(int x) {

    // DETERMINA SI UN NÚMERO ES PAR CON EL RESTO DE LA DIVISIÓN.
    if (x %2 == 0) {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }

    return (x);
}; */



/*********************************************************************************************/


/* 4.EJERCICIO: 
Hacer una función llamada “primo” que reciba un número entero y devuelva 
1 si el número es primo o cero si no lo es.
Hacer un programa para ingresar  números. El lote corta cuando se ingresa un número cero.
Informar el  promedio teniendo en cuenta sólo los números primos. */



#include <iostream>

using namespace std;

int primo(int x);

int main() {

    int x;
    
    cout << "Ingresa un Numero para saber si es primo" << endl;
    cin >> x;
    primo(x);
  
    
    return 0;

};


int primo(int x) {
    
    // PREGUNTAMOS SI X ES DVISIBLE POR 2 PARA EXTRAER NUMERO PRIMO, DE LO CONTRARIO ES 0.
    if (x % 2 == 2) {
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    };

    return(x);

};



/*********************************************************************************************/

/*5. Hacer una función llamada “pagos” que reciba un monto(float) y una cantidad  de pagos(entero) y devuelva el monto de cada pago.Hacer un programa para  ingresar 10 ventas.Para cada venta se conoce el monto y la cantidad de pagos.El programa deberá mostrar la cantidad de pagos y el monto del pago para  cada una de las ventas.
6. Hacer una función que se llame “sumaResta” que reciba dos números y que  devuelva la suma Y la resta del primer número con el segundo.
Nota: recordemos que una función solo puede devolver UN valor por return.Cómo podríamos hacer para tener ambos resultados en el main ?
7. Hacer una función de tipo void(porque no va a devolver nada) llamada  “positivoNegativoCero” que reciba un número por valor y una variable por  referencia.Que analice el número y escriba variable recibida por referencia  con :*/
