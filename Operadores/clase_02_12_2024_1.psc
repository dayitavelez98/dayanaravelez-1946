Algoritmo suma_numeros
	definir n, datos, contador,  s Como Entero
	Escribir "Cuantos datos quieres ingresar: "
	leer n
	contador = 0
	s = 0
	Mientras contador < n Hacer
		Escribir "Ingrese un numero: "
		leer datos
		contador = contador + 1
		s = s + datos
	FinMientras 
	Escribir "La acumulacion de los ", n," datos es igual ", s
	
FinAlgoritmo
