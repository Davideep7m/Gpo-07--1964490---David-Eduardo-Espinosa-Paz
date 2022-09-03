#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numarticulo, opcion;
    float precio_unitario, impuesto, total;
    string articulo, clasificacion, descripcion, categoria, genero, consola, lanzamiento;

    cout << "\t ***PAPELERIA PESADO*** \n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar Articulo
        cout << "Ingrese el numero de articulo \n";
        cin >> numarticulo;
        cout << "ingrese el nombre del articulo\n";
        cin.ignore();//me ignora el primer espacio 
        getline(cin, articulo); //permite ejecutar los espacios en la variable
        cout << "ingrese el descripcion del articulo\n";
        cin.ignore();
        getline(cin, descripcion);
        cout << "ingrese la categoria del articulo\n";
        cin.ignore();
        getline(cin, categoria);
        cout << "Ingrese la clasificacion del articulo \n";
        cin.ignore();
        getline(cin, clasificacion);
        cout << "Ingresa la fecha de lanzamiento \n";
        cin.ignore();
        getline(cin, lanzamiento);
        cout << "Ingresa el genero del articulo \n";
        cin.ignore();
        getline(cin, genero);
        cout << "Ingrese la consola compatible con el articulo \n";
        cin.ignore();
        getline(cin, consola);
        cout << "ingrese el precio unitario del articulo\n";
        cin >> precio_unitario;
        impuesto = precio_unitario * 0.16;
        cout << "El impuesto del producto es \n" << impuesto; "\n";
        total = impuesto + precio_unitario;
        cout << "\n" "El total es \n" << total; "\n";
        return main();
        break;

    case 2: //Modificar Articulo
        break;

    case 3://Eliminar Articulo
        break;

    case 4: //Lista de Articulos
        break;

    case 5: //Limpiar Pantalla
        system("cls"); //clean  se utiliza en web 
        return main();
        break;

    case 6: //salir
        cout << "Gracias por utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();

    }
}