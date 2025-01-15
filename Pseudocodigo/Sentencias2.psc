Algoritmo multiplode3
	definir num, M, divisor como entero
	escribir "Ingrese el valor"
	leer num
	escribir "Ingrese el divisor"
	leer divisor
	M = num Mod divisor
	Si  M = 0 Entonces
		Escribir "Es multiplo de " , divisor
	SiNo
		escribir "No es multiplo de ", divisor
	FinSi
FinAlgoritmo
