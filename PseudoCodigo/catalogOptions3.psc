Proceso catalogOptions3
		Definir opc Como Entero;
		Repetir
			Limpiar Pantalla;
			Escribir "Elige una opcion....";
			Escribir "(1) Proceso de galletas";
			Escribir "(2) Proceso de pastel tres leches";
			Escribir "(0) Salir";
			Escribir "Opción (0, 1 o 2): " Sin Saltar;
			Leer opc;
			Escribir " ";
		
			Segun opc Hacer
				1:
					Escribir "Llamar OpGalletas";
				2:
					Escribir "Llamar OpPastelTresLeches";
				0:
					Escribir "¡Adiós!";
				De Otro Modo:
					Escribir "Opcion invaida, intente de nuevo.";
			FinSegun
		Hasta Que (opc==0)
FinProceso

