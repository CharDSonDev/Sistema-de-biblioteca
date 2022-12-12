#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Estructura para almacenar la información de un libro
struct Libro
{
    string codigo;
    string titulo;
    string autor;
    string apellido;
    string area;
    string publicador;
    string estado;
};

// Vector para almacenar la lista de libros de la biblioteca
vector<Libro> listaLibros;

// Función para agregar un nuevo libro a la lista
void agregarLibro()
{
    Libro libro;

    cout << "Ingresa el código del libro: ";
    cin >> libro.codigo;

    // Verificamos si ya existe un libro con ese código en la lista
    bool codigoExiste = false;
    for (int i = 0; i < listaLibros.size(); i++)
    {
        if (listaLibros[i].codigo == libro.codigo)
        {
            codigoExiste = true;
            break;
        }
    }

    // Si el código ya existe, pedimos un código diferente al usuario
    if (codigoExiste)
    {
        cout << "El código ingresado ya existe, por favor ingresa un código diferente: ";
        cin >> libro.codigo;
    }

    cout << "Ingresa el título del libro: ";
    cin >> libro.titulo;

    cout << "Ingresa el autor del libro: ";
    cin >> libro.autor;

    cout << "Ingresa el apellido del autor: ";
    cin >> libro.apellido;

    cout << "Ingresa el área de conocimiento del libro: ";
    cin >> libro.area;

    cout << "Ingresa el publicador del libro: ";
    cin >> libro.publicador;

    // Por defecto, el estado de un libro al agregarlo es "en sala"
    libro.estado = "en sala";

    // Agregamos el libro al vector de libros
    listaLibros.push_back(libro);
}

// Función para modificar un libro de la lista
void modificarLibro()
{
    string codigo;

    cout << "Ingresa el código del libro a modificar: ";
    cin >> codigo;

    // Buscamos el libro en la lista con el código especificado
    for (int i = 0; i < listaLibros.size(); i++)
    {
        if (listaLibros[i].codigo == codigo)
        {
            // Si el libro es encontrado, se preguntan los nuevos valores para sus campos
            cout << "Ingresa el nuevo título del libro: ";
            cin >> listaLibros[i].titulo;

            cout << "Ingresa el nuevo autor del libro: ";
            cin >> listaLibros[i].autor;

            cout << "Ingresa el nuevo apellido del autor: ";
            cin >> listaLibros[i].apellido;

            cout << "Ingresa el nuevo área de conocimiento del libro: ";
            cin >> listaLibros[i].area;

            cout << "Ingresa el nuevo publicador del libro: ";
            cin >> listaLibros[i].publicador;

            // Finalizamos el ciclo una vez que el libro es modificado
            break;
        }
    }
}

// Función para eliminar un libro de la lista
void eliminarLibro()
{
    string codigo;

    cout << "Ingresa el código del libro a eliminar: ";
    cin >> codigo;

    // Buscamos el libro en la lista con el código especificado
    for (int i = 0; i < listaLibros.size(); i++)
    {
        if (listaLibros[i].codigo == codigo)
        {
            // Si el libro es encontrado, lo eliminamos de la lista
            listaLibros.erase(listaLibros.begin() + i);
            // Finalizamos el ciclo una vez que el libro es eliminado
            break;
        }
    }
}

// Función para prestar un libro
void prestarLibro()
{
    string codigo;

    cout << "Ingresa el código del libro a prestar: ";
    cin >> codigo;

    // Buscamos el libro en la lista con el código especificado
    for (int i = 0; i < listaLibros.size(); i++)
    {
        if (listaLibros[i].codigo == codigo)
        {
            // Si el libro es encontrado y está "en sala", cambiamos su estado a "prestado"
            if (listaLibros[i].estado == "en sala")
            {
                listaLibros[i].estado = "prestado";
                cout << "El libro ha sido prestado exitosamente." << endl;
            }
            else
            {
                cout << "El libro ya ha sido prestado." << endl;
            }

            // Finalizamos el ciclo una vez que el libro es prestado
            break;
        }
    }
}

// Función para devolver un libro
void devolverLibro()
{
    string codigo;

    cout << "Ingresa el código del libro a devolver: ";
    cin >> codigo;

    // Buscamos el libro en la lista con el código especificado
    for (int i = 0; i < listaLibros.size(); i++)
    {
        if (listaLibros[i].codigo == codigo)
        {
            // Si el libro es encontrado y está "prestado", cambiamos su estado a "en sala"
            if (listaLibros[i].estado == "prestado")
            {
                listaLibros[i].estado = "en sala";
                cout << "El libro ha sido devuelto exitosamente." << endl;
            }
            else
            {
                cout << "El libro no se encuentra prestado." << endl;
            }

            // Finalizamos el ciclo una vez que el libro es devuelto
            break;
        }
    }
}

// Función para realizar una consulta o búsqueda en la lista de libros
void consultarLibro()
{
    string codigo;

    cout << "Ingresa el código del libro a consultar: ";
    cin >> codigo;

    bool encontrado = false; // agregamos una bandera para saber si el libro fue encontrado

    // Buscamos el libro en la lista con el código especificado
    for (int i = 0; i < listaLibros.size(); i++)
    {
        if (listaLibros[i].codigo == codigo)
        {
            // Si el libro es encontrado, se muestran sus campos
            cout << "Código: " << listaLibros[i].codigo << endl;
            cout << "Título: " << listaLibros[i].titulo << endl;
            cout << "Autor: " << listaLibros[i].autor << endl;
            cout << "Apellido: " << listaLibros[i].apellido << endl;
            cout << "Área de conocimiento: " << listaLibros[i].area << endl;
            cout << "Publicador: " << listaLibros[i].publicador << endl;
            cout << "Estado: " << listaLibros[i].estado << endl;

            encontrado = true; // actualizamos la bandera para indicar que el libro fue encontrado
            // Finalizamos el ciclo una vez que el libro es consultado
            break;
        }
    }

    // Si la bandera todavía es falsa, significa que el libro no fue encontrado
    if (!encontrado)
    {
        cout << "Lo sentimos, no se encontró un libro con el código especificado" << endl;
    }
}

// Función que muestra todos los libros guardados en la biblioteca
void mostrarLibros()
{
    for (int i = 0; i < listaLibros.size(); i++)
    {
        cout << "Código: " << listaLibros[i].codigo << endl;
        cout << "Título: " << listaLibros[i].titulo << endl;
        cout << "Autor: " << listaLibros[i].autor << endl;
        cout << "Apellido: " << listaLibros[i].apellido << endl;
        cout << "Área de conocimiento: " << listaLibros[i].area << endl;
        cout << "Publicador: " << listaLibros[i].publicador << endl;
        cout << "Estado: " << listaLibros[i].estado << endl;
        cout << endl;
    }
}

int main()
{
    int opcion = 0;

    while (opcion != 8)
    {
        // Mostramos el menú de opciones y pedimos una opción al usuario
        cout << "Biblioteca" << endl;
        cout << "1. Agregar libro" << endl;
        cout << "2. Modificar libro" << endl;
        cout << "3. Eliminar libro" << endl;
        cout << "4. Prestar libro" << endl;
        cout << "5. Devolver libro" << endl;
        cout << "6. Consultar libro" << endl;
        cout << "7. Mostrar libros" << endl;
        cout << "8. Salir" << endl;
        cout << "Ingresa una opción: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            // Si el usuario elige la opción 1, se agrega un libro a la lista
            agregarLibro();
            break;
        case 2:
            // Si el usuario elige la opción 2, se modifica un libro de la lista
            modificarLibro();
            break;
        case 3:
            // Si el usuario elige la opción 3, se elimina un libro de la lista
            eliminarLibro();
            break;
        case 4:
            // Si el usuario elige la opción 4, se presta un libro
            prestarLibro();
            break;
        case 5:
            // Si el usuario elige la opción 5, se devuelve un libro
            devolverLibro();
            break;
        case 6:
            // Si el usuario elige la opción 6, se consulta un libro
            consultarLibro();
            break;
        case 7:
            // Si el usuario elige la opción 7, se muestran los libros
            mostrarLibros();
            break;
        case 8:
            // Si el usuario elige la opción 7, se finaliza el programa
            cout << "Hasta luego!" << endl;
            break;
        default:
            // Si el usuuario ingresa una opción inválida, se muestra un mensaje de error
            cout << "Opción inválida. Intenta de nuevo." << endl;
        }
    }

    return 0;
}
