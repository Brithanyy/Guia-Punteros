#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
///PROTOTITADO FUNCIONES:
void intercambiarValores(int *Puntero1, int *Puntero2);
void sumandoElementosArreglo(int *copiaPunteroArreglo);
void convertirStringMayuscula(char *copiaPunteroString);
int eliminarNumerosParesArreglo(int *copiaPunteroArregloEnteros);
void invirtiendoArreglo(int *copiaPunteroArreglo2, int validos);
int contandoVocalesDeString(char *copiaPunteroPalabra);
void encontrarElNumMenorYMayor(int *copiaPunteroArr);
int buscarCaracter(char *copiaPunteroCadena, char letraBuscar);
int *crearArregloDinamico(int dimArray);
char *copiarCadena(char *copiaPunteroCadena,int dim);
int *clonarArrayEnteros(int *copiaPunteroEnteros, int validos);
char crearCadenaDinamica(char *copiaPuntero);
void intercambiarValoresPunterosDobles(int **puntero1, int **puntero2);
void pasarUnArregloAFuncionPuntDobles(int **CopiaPtrArray, int validos);



///CONUSLTAR EL EJERCICO 9
int main()
{///1) Intercambiar Valores: Escribe un programa que intercambie los valores de dos variables utilizando punteros.
//    int num1 = 400;
//    int *Puntero1 = &num1;
//
//    int num2 = 500;
//    int *Puntero2 = &num2;
//
//    intercambiarValores(Puntero1, Puntero2); ///Funcion que intercambia valores
//    printf("puntero a: %i y puntero b: %i \n", *Puntero1, *Puntero2); ///Mostrando el intercambio
//
/////2) Suma de Elementos: Calcula la suma de los elementos de un arreglo usando punteros.
//    int arreglo[] = {10,20,30,40,50};
//    int *punteroArreglo = &arreglo;
//    sumandoElementosArreglo(punteroArreglo);
/////3) Cadena en Mayúsculas: Convierte una cadena de caracteres a mayúsculas utilizando punteros.
//    char string[] = {"hola"};
//    char *punteroString = &string;
//    convertirStringMayuscula(punteroString);
/////4) Eliminar Números Pares: Elimina los números pares de un arreglo utilizando punteros.
//    int arregloEnteros[] = {1,2,3,4,5,6,7,8,9,10};
//    int *punteroArregloEnteros = &arregloEnteros;
//    int validosArreglo = eliminarNumerosParesArreglo(punteroArregloEnteros);
//    printf("\n");
//    for(int i = 0; i < validosArreglo; i++){
//        printf("%i", arregloEnteros[i]);
//    }
//    printf("\n");
/////5) Invertir Arreglo: Invierte un arreglo utilizando punteros.
//    int arreglo2[] = {1,2,3,4,5,6,7,8,9,10};
//    int *punteroArreglo2 = &arreglo2;
//    int validosArreglo2 = 10;
//    invirtiendoArreglo(punteroArreglo2, validosArreglo2);
//    printf("\n");
//    for(int c = 0; c < validosArreglo2; c++){
//        printf("%i ", arreglo2[c]);
//    }
//    printf("\n");
/////6) Contar Vocales: Cuenta el número de vocales en una cadena utilizando punteros.
//    char palabra[15];
//    printf("\nIngrese la palabra: ");
//    fflush(stdin);
//    gets(palabra);
//    char *punteroPalabra = &palabra;
//    int contadorDeVocales = contandoVocalesDeString(punteroPalabra);
//    printf("\nLa cantidad de vocales que tiene ese string es de: %i \n", contadorDeVocales);
/////7) Copiar Cadena: Copia una cadena en otra utilizando punteros.
//    char cadena1[] = {"Brisa"};
//    char *punteroCadena1 = &cadena1;
//    char cadena2[] = {"Ortiz"};
//    char *punteroCadena2 = &cadena2;
//    intercambiandoCadenas(punteroCadena1,punteroCadena2);
//    printf("\nCadena 1: ");
//    for(int v = 0; v < 5; v++){
//        printf("%c", cadena1[v]);
//    }
//    printf("\n\nCadena 2: ");
//    for(int b = 0; b < 5; b++){
//        printf("%c", cadena2[b]);
//    }
//    printf("\n");
/////8) Encontrar Mínimo y Máximo: Encuentra el valor mínimo y máximo en un arreglo utilizando punteros.
//    int arregloNum[] = {1,20,30,99};
//    int *punteroArregloNum = arregloNum;
//    encontrarElNumMenorYMayor(punteroArregloNum);
/////10) Buscar Carácter: Busca un carácter en una cadena utilizando punteros.
//    char cadena3[30];
//    printf("\nIngrese una palabra: ");
//    fflush(stdin);
//    gets(cadena3);
//    char *punteroCadena3 = &cadena3;
//    char letraABuscar;
//    printf("\nQue letra deseas buscar en la cadena: ");
//    fflush(stdin);
//    scanf("%c", &letraABuscar);
//    int flag = buscarCaracter(punteroCadena3, letraABuscar);
//    if(flag == 1){
//        printf("\nLetra encontrada.\n");
//    }else{
//        printf("\nNo encontramos esa letra en la cadena.\n");
//    }
/////11) Crear Arreglo Dinámico: Crea un arreglo dinámico de enteros y devuelve un puntero a él.
//    int dimArregloDinamico = 5;
//    int *arregloDinamico = crearArregloDinamico(dimArregloDinamico);
//    printf("\n");
//    ///Probando cargando arreglo dinamico
//    for (int o = 0; o < dimArregloDinamico; o++) {
//        arregloDinamico[o] = o * 2;
//        printf("%i ", arregloDinamico[o]);
//    }
//    printf("\n");
//    ///Liberando el espacio en la memoria.
////    free(arregloDinamico);
//
/////12) Duplicar Cadena: Duplica una cadena y devuelve un puntero a la nueva cadena.
//    char cadena4[] = {"Rosita"};
//    int dim = 6;
//    char *punteroCadena4 = &cadena4;
//    char *copiaCadena = copiarCadena(punteroCadena4, dim);
//    printf("\nCadena Copia: ");
//    while(*copiaCadena){
//        printf("%c", *copiaCadena);
//        *copiaCadena++;
//    }
//    printf("\n");
////    free(copiaCadena);
//
/////13) Clonar Arreglo Dinámico: Clona un arreglo dinámico de enteros y devuelve un puntero al nuevo arreglo.
//    int enteros[] = {1,2,3,4,5,6,7,8,9,10};
//    int *punteroEnteros = enteros;
//    int validosEnteros = 10;
//    int *clonDeEnteros = clonarArrayEnteros(punteroEnteros, validosEnteros);
//    printf("\n");
//    for(int p = 0; p < validosEnteros; p++){
//        printf("|%i| ", *clonDeEnteros);
//        clonDeEnteros++;
//    }
//    printf("\n");
////    free(clonDeEnteros);
/////14) Crear Cadena Dinámica: Crea una cadena dinámica y devuelve un puntero a ella.
//    char string3[20];
//    char *punteroString3 = &string3;
//
//    char *cadenaNew = crearCadenaDinamica(punteroString3);
//    printf("\nIngrese una palabra: ");
//    fflush(stdin);
//    gets(cadenaNew);
//
//    printf("\n %s", cadenaNew); ///CONSULTAR PORQUE NO ME LO MUESTRA Y PORQUE ME TIRA ERROR AL USAR FREE
////    free(cadenaNew);
///PUNTEROS DOBLES:
///Ejemplo:

    int numero = 42;
    int *ptr1 = &numero; /// Puntero simple que apunta a 'numero'
    int **ptr2 = &ptr1; /// Puntero doble que apunta a 'ptr1'

    printf("Valor de num: %d\n", numero);
    printf("Valor apuntado por ptr1: %d\n", *ptr1);
    printf("Valor apuntado por ptr2 (usando puntero doble): %d\n", **ptr2);
///15) Ejercicio 1: Función para intercambiar dos valores usando punteros dobles
    int valor1 = 50;
    int *punteroValor1 = &valor1;
    int valor2 = 100;
    int *punteroValor2 = &valor2;

    printf("\nValor 1 Original: %d", *punteroValor1);
    printf("\nValor 2 Original: %d\n", *punteroValor2);

    intercambiarValoresPunterosDobles(&punteroValor1,&punteroValor2);

    printf("\nValor 1 intercambiado: %d", *punteroValor1);
    printf("\nValor 2 intercambiado: %d\n", *punteroValor2);
///16) Ejercicio 2: Uso de punteros dobles para acceder a un arreglo
    int array[] = {1,2,3,4,5,6};
    int dimArray = 6;
    int *punteroArray = &array;
    int **PuntDobleAPunteroArr = &punteroArray;

    printf("\nElemento 0: |%d| ", **PuntDobleAPunteroArr);
    printf("\nElemento 1: |%d| ",*(*PuntDobleAPunteroArr + 1));
    printf("\nElemento 2: |%d| ",*(*PuntDobleAPunteroArr + 2));
    printf("\nElemento 3: |%d| ",*(*PuntDobleAPunteroArr + 3));
    printf("\nElemento 4: |%d| ",*(*PuntDobleAPunteroArr + 4));
    printf("\nElemento 5: |%d| ",*(*PuntDobleAPunteroArr + 5));
///17) Ejercicio 3: Pasar un arreglo a una función usando punteros dobles
    int array2[] = {2002};
    int dimArray2 = 1;
    int *punteroArray2 = array2;
    printf("\n\n");
    pasarUnArregloAFuncionPuntDobles(&punteroArray2,dimArray2);
    printf("\n");


}
///FUNCIONES:

/// PUNTO 1:
void intercambiarValores(int *copiaPuntero1, int *copiaPuntero2){
   int aux;
   aux = *copiaPuntero1;
   *copiaPuntero1 = *copiaPuntero2;
   *copiaPuntero2 = aux;
}
/// PUNTO 2:
void sumandoElementosArreglo(int *copiaPunteroArreglo){
    int acumulador = 0;
    for(int i = 0; i < 5; i++){
        acumulador = acumulador + *copiaPunteroArreglo;
        *copiaPunteroArreglo++;
    }
    printf("\nLa suma es: %i \n", acumulador);
}
///PUNTO 3:
void convertirStringMayuscula(char *copiaPunteroString){
    printf("\n");
    char caracter;
    while(*copiaPunteroString){
        caracter = toupper(*copiaPunteroString);
        printf("%c", caracter);
        *copiaPunteroString++;
    }
    printf("\n");
}
///PUNTO 4:
int eliminarNumerosParesArreglo(int *copiaPunteroArregloEnteros){
    int *punteroAuxiliar = copiaPunteroArregloEnteros;
    int validos = 0;
    for(int i = 0; i < 10; i++){
            if((*copiaPunteroArregloEnteros % 2) != 0){
                *punteroAuxiliar = *copiaPunteroArregloEnteros;
                punteroAuxiliar++;
                validos++;
            }
            copiaPunteroArregloEnteros++;
    }
    return validos;
}
///PUNTO 5:
void invirtiendoArreglo(int *copiaPunteroArreglo2, int validos){
    int *punteroAuxiliar = copiaPunteroArreglo2 + (validos - 1);
    int variableAuxiliar;
    for(int i = 0; i < validos / 2; i++){
        variableAuxiliar = *copiaPunteroArreglo2;
        *copiaPunteroArreglo2 = *punteroAuxiliar;
        *punteroAuxiliar = variableAuxiliar;
        copiaPunteroArreglo2++;
        punteroAuxiliar--;
    }
}
///PUNTO 6:
int contandoVocalesDeString(char *copiaPunteroPalabra){
    int contador = 0;
    char letra;
    while(*copiaPunteroPalabra){
            letra = tolower(*copiaPunteroPalabra);
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ){
            contador++;
        }
        *copiaPunteroPalabra++;
    }
    return contador;
}
///PUNTO 7:
void intercambiandoCadenas(char *copiaPunteroCadena1, char *copiaPunteroCadena2){
    char aux;
    while(*copiaPunteroCadena1 & *copiaPunteroCadena2){

        aux = *copiaPunteroCadena1;
        *copiaPunteroCadena1 = *copiaPunteroCadena2;
        *copiaPunteroCadena2 = aux;

        *copiaPunteroCadena1++;
        *copiaPunteroCadena2++;
    }
}
///PUNTO 8:
void encontrarElNumMenorYMayor(int *copiaPunteroArr){
    int aux;
    int mayor = *copiaPunteroArr;
    int menor = *copiaPunteroArr;
    for(int i = 0; i < 4; i++){
        aux = *copiaPunteroArr;
        if(aux < menor){
            menor = aux;
        }else{
            mayor = aux;
        }
        *copiaPunteroArr++;
    }
    printf("\nEl numero mayor es: %i \n ", mayor);
    printf("\nEl numero menor es: %i \n ", menor);
}
///PUNTO 10:
int buscarCaracter(char *copiaPunteroCadena, char letraBuscar){
    int flag = 0;
    while(*copiaPunteroCadena){
        if(*copiaPunteroCadena == letraBuscar){
            flag = 1;
        }
        *copiaPunteroCadena++;
    }
    return flag;
}
///PUNTO 11:
int *crearArregloDinamico(int dimArray){
    int *arregloDinamico = (int *) malloc(dimArray * sizeof(int));
    ///verificar que ande correctamente:
    if(arregloDinamico == NULL){
        printf("\nError en la asignacion de memoria.\n");
    }
    printf("\nArreglo dinamico creado con exito.\n");
    return arregloDinamico;
}
///PUNTO 12:
char *copiarCadena(char *copiaPunteroCadena,int dim){
    char *cadenaCopia = (char *)malloc(dim * sizeof(char));
    if(cadenaCopia == NULL){
        printf("\nError en la asignacion de memoria.\n");
    }
    strcpy(cadenaCopia, copiaPunteroCadena); ///Copiando las direcciones en memoria

    return cadenaCopia;
}
///PUNTO 13:
int *clonarArrayEnteros(int *copiaPunteroEnteros, int validos){
    int *clon = (int *)malloc(validos * sizeof(int));
    int *clonAux = clon;
    if(clon == NULL){
        printf("\nError en la asignacion de memoria.\n");
    }
    for(int i = 0; i < validos; i++){
        clonAux[i] = copiaPunteroEnteros[i];
    }
    return clon;
}
///PUNTO 14:
char crearCadenaDinamica(char *copiaPuntero){
    size_t tamanio = strlen(copiaPuntero);
    char *arregloDinamico = (char *)malloc(tamanio * sizeof(char));
    strcpy(arregloDinamico, copiaPuntero);

    return arregloDinamico;
}
///PUNTO 15: Punteros dobles
void intercambiarValoresPunterosDobles(int **puntero1, int **puntero2){
    int *aux = *puntero1;
    *puntero1 = *puntero2;
    *puntero2 = aux;     ///PTRGUNTAR AL PROFE ESTA LINEA PORQUE NO LE PONEMOS *
}
///PUNTO 17:
void pasarUnArregloAFuncionPuntDobles(int **CopiaPtrArray, int validos){
    ///Mostrando el contenido del arreglo pasado por punteros dobles:
    printf("\nMostrando el contenido del arreglo en la funcion: \n");
    for(int i = 0; i < validos; i++){
        printf("%i", *(*CopiaPtrArray + i));
    }
}
