/*Este programa solicita datos al usuario y muestra en la salida est�ndar
el resultado de la espresi�n matem�tica: (a+b)/(c+d)* con una precisi�n
de 2 decimales*/

# include <iostream> //Librer�a est�ndar de entrada y salida de datos
# include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std; //Acceso al espacio de nombres

main (){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a y le asignamos el valor: "espa�ol"
	float a,b,c,d, operacion = 0; //Declaramos las variables
	cout<<"Ingrese el valor de a"<<endl; //Solicitamos el valor de la variable "a"
	cin>>a; //Almacenamos el valor de la variable "a"
	cout<<"Ingrese el valor de b"<<endl; //Solicitamos el valor de la variable "b"
	cin>>b; //Almacenamos el valor de la variable "b"
	cout<<"Ingrese el valor de c"<<endl; //Solicitamos el valor de la variable "c"
	cin>>c; //Almacenamos el valor de la variable "c"
	cout<<"Ingrese el valor de d"<<endl; //Solicitamos el valor de la variable "d"
	cin>>d; //Almacenamos el valor de la variable "d"
operacion = (a+b)/(c+d); //Realizamos la operaci�n
cout.precision(2); //Le damos a la salida de la operaci�n una precisi�n de 2 decimales
	cout<<"El resultado de la operaci�n (a+b)/(c+d) es: "<<endl;
	cout<<operacion<<endl;
	return 0; //Fin del programa
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/
