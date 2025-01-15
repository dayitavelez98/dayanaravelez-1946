Algoritmo Bono_Desarrollo_HUmano
	//Realizar un diagrama de flujo de los siguientes procesos según el grupo asignado.
	//El Gobierno del Ecuador desea implementar un sistema que determine si una familia es elegible para recibir el Bono de Desarrollo Humano (BDH). 
	//Este bono se entrega a las familias en situación de pobreza extrema, y se asigna bajo los siguientes criterios: 

	//Bono de Desarrollo Humano(Grupo 3)
	//Transferencia monetaria mensual de USD 55,00 para cubrir vulnerabilidades relacionadas a la situación económica del núcleo familiar. 
	//Está dirigida al representante de las familias que viven en situación de pobreza y extrema pobreza según información de Registro Social vigente, 
	//que no accedan a seguridad social contributiva, a excepción de Seguro Social Campesino y Trabajo no Remunerado en el Hogar; de preferencia a la 
	//mujer jefa de hogar o cónyuge, o en aquella persona que tenga como responsabilidad las decisiones de compra y cuya edad esté comprendida entre los 18 y 64 años.
	Definir CI, EP, SS, ST, M Como Entero
	escribir "Ingrese su numero de cedula: "
	leer CI
	Escribir "¿Usted se encuentra en una situacion de pobreza o extrema pobreza?"
	Escribir "Digite 1 si su respuesta es Si"
	Escribir "Digite 2 si su respuesta es No"
	Leer EP
	Si EP = 1 Entonces
		Escribir "¿Usted accede a la seguridad social?"
		Escribir "Digite 1 si su respuesta es Si"
		Escribir "Digite 2 si su respuesta es No"
		Leer SS
		Si SS = 1 Entonces
			escribir "Usted no accede a este bono"
		SiNo
			Escribir "¿Usted accede al seguro social campesino y al trabajo no remunerado?"
			Escribir "Digite 1 si su respuesta es Si"
			Escribir "Digite 2 si su respuesta es No"
			Leer ST
			Si ST =1 O ST = 2 Entonces
				Escribir "¿Usted es mujer?"
				Escribir "Digite 1 si su respuesta es Si"
				Escribir "Digite 2 si su respuesta es No"
				Leer M
				Si M = 1 Entonces
				Escribir "Usted accede al bono de USD 55,00"
				SiNo
				Escribir "Usted no accede a este bono"
				FinSi
			FinSi
		FinSi
	SiNo
		escribir "Usted no accede a este bono"
	FinSi
FinAlgoritmo
