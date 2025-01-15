//estructura anidadas
Algoritmo clase_29_11_2024
	definir dia Como Entero
		escribir "Ingrese dia de la semana: "
		leer dia
		si dia = 1 Entonces
			escribir "El dia para estudiar es lunes"
		SiNo
			si dia = 2 Entonces
				escribir "El dia para estudiar es martes"
			SiNo
				si dia = 3 Entonces
					escribir "El dia para estudiar es miercoles"
				SiNo
					si dia = 4 Entonces
						escribir "El dia para estudiar es jueves"
					SiNo
						si dia = 5 Entonces
							escribir "El dia para estudiar es viernes"
						SiNo
							si dia = 6 o dia = 7 Entonces
								escribir "Es fin de semana"
							SiNo
									escribir "Ingresaste un dia no valido"
							fin si
						fin si
					fin si
				fin si
			fin si
		FinSi
		
FinAlgoritmo

