# Ejercicio-Autograding para C++ usando Catch2

**Fuente:** *Learning Autograding with C/C++ and Catch2 - Prof. Igor Machado Coelho* 
https://medium.com/swlh/easy-c-autograding-on-github-classroom-with-catch2-106ad1107402

## Descripción del Problema

Realiza lo que te indica tu examen, está en el archivo pdf del mismo repositorio.

## Diagrama de Clases


```mermaid
classDiagram
    Caja *-- Dimension
      class Dimension{
        - ancho : int
        - largo : int
        - alto : int
      }
    Dimension : + Dimension()
    Dimension : + Dimension(int, int, int)
    Dimension : + getAncho() int
    Dimension : + getLargo() int
    Dimension : + getAlto() int
    Dimension : + setAncho(int) void
    Dimension : + setLargo(int) void
    Dimension : + setAlto(int) void
    Dimension : + imprime() void
    Dimension : + iguales(Dimension&) int

    class Caja{
        - material : string
        - medidas : Dimension
    }
    Caja : + Caja()
    Caja : + Caja(string, Dimension)
    Caja : + getMaterial() string
    Caja : + getMedidas() Dimension
    Caja : + setMaterial(string) void
    Caja : + setMedidas(Dimension) void
    Caja : + volumen() int
    Caja : + imprime() void
```


## Objetivo

- Busca que el código pase correctamente todas las pruebas
   * Solamente cambia los archivos permitidos para lograr este objetivo (abajo se indican las reglas específicas)
   
- Las GitHub Actions deberán presentar una palomita en verde si se han satisfecho todas las pruebas, y una cruz roja cuando alguna (o todas) las pruebas han fallado.
   * **Recomendación:** Puedes dar clic en la cruz roja para verificar cual de las pruebas ha fallado (o si el código no ha compilado correctamente).
   * **Recomendación:** En caso de que el Autograding no muestre pruebas o no funcione, contacta a tu profesor mediante un issue.

## Instrucciones

- Deberás modificar todos los archivos necesarios tal cual te lo marca el archivo del examen.
- Ya no necesitas crear más archivo, sólo implementar lo que se te indique.
Explicación de los otros archivos:

- Archivo `test/tests.cpp` tiene las pruebas de esta actividad (NO LO CAMBIES!)
- Archivo `test/catch.hpp` tiene la biblioteca de pruebas  CATCH2 (NO LA CAMBIES!)
- Archivo `makefile` tienes los comandos para ejecutar la actividad (NO LO CAMBIES!)
- Archivo  `./build/appTests` se generará después de compilar (para **pruebas locales**, solo ejecútalo)

## Comandos para pruebas locales, ejecución y depuración

- Comando para construir y ejecutar pruebas: `make` o `make test`
    * Si el ejecutable ya está construido, sólo teclea : `./build/appTests`

- Comando para construir y ejecutar la aplicación: `make run` 
    * Si el ejecutable ya está construido, sólo teclea : `./build/exercise`

- Comando para depurar: `make debug`
    * Para conocer los comandos de depuración consulta:
     https://u.osu.edu/cstutorials/2018/09/28/how-to-debug-c-program-using-gdb-in-6-simple-steps/
     
- Comando para depurar programa principal : `make debugvs` 
    * Utilizar el depurador de la IDE.     

- Comando para depurar pruebas : `make debugtest` 
    * Utilizar el depurador de la IDE.     

## Notas

- El código será evaluado solamente si compila.
   * La razón de esto es, si no compila no es posible generar el ejecutable y realizar las pruebas.

- Algunos casos de prueba podrían recibir calificación individual, otros podrían recibir calificación y si pasan todos juntos (o todas las pruebas en conjunto).

- La calificación final se otorgará de manera automática en cada *commit + push*, y se evaluará solamente hasta la fecha limite de la actividad.

Para dudas adicionales, consulta a tu profesor.

## License

MIT License 2020
