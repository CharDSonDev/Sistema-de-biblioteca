# Sistema-de-biblioteca

![Screenshot from 2022-12-10 21-12-38](https://user-images.githubusercontent.com/36754778/206881795-b8cbb211-b320-4c60-84f4-87638f85a34d.png)

# Enunciado

En la última reunión con el encargado de la biblioteca pública Nacional, este se aquejó sobre lo tedioso que se hace el trabajo de préstamos de libros y control de inventario en la biblioteca. El lead del equipo de desarrollo ha propuesto desarrollar un software que les permita simplificar este proceso.

Para su demostración, primero se desarrollará una app en consola en c++ utilizando estructura de datos como lista para manejar la entrada y salida de los libros. Del libro se desea tener guardado código del libro, título del libro, apellido del autor, nombre del autor, Área de Conocimiento y publicador, tramo asignado.

Por ahora el lead desea presentar esta opción básica, luego se trabajaran los módulos:

    Préstamo de libros
    1- El encargado de biblioteca cambia el estado de los libros de “en sala” a “prestado”, mediante un lector.

    Autoservicio
    2- El estudiante puede realizar operaciones de préstamo, renovación y devolución sin la intervención del encargado de biblioteca con la ayuda de un lector rfid y un equipo tipo kiosko.
    
    Salida de libros de biblioteca
    3- Si un libro sale de la biblioteca con el estado “En sala”, el controlador conjuntamente con la antena dan aviso de la salida irregular.
    
Criterios que se evaluaran:

    1- Si se puede guardar el libro
    2- Si se puede modificar un libro ya guardo con su código.
    3- Si se puede realizar consulta o mostrar un listado de los libros guardados.
    4- Si se puede realizar  búsqueda en base a su código.
    5- Si se puede eliminar un libro en base a su código.