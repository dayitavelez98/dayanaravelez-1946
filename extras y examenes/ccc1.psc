Algoritmo FactoresDivisibles
    Definir num, i, contador Como Entero
    Definir mensaje Como Cadena
    Escribir "Ingrese un n�mero:"
    Leer num
    contador = 0
    mensaje = "Los factores divisibles de " + ConvertirATexto(num) + " son: "
    i = 1
    Mientras i <= num Hacer
        Si num Mod i = 0 Entonces
            mensaje = mensaje + ConvertirATexto(i) + " "
            contador = contador + 1
        FinSi
        i = i + 1
    FinMientras
    Si contador > 0 Entonces
        Escribir mensaje
        Escribir "El n�mero de factores divisibles es: ", contador
    FinSi
FinAlgoritmo
