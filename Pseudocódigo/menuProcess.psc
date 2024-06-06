Proceso menuProcess
	Definir opc Como Entero;
	opc <- 0;
	
	Limpiar Pantalla;
	Repetir
		opc <- 0;
		Escribir "¡Bienvenid@ a CakeControl! ¿Qué desea hacer";
		Escribir "(1) Opciones del catálogo";
		Escribir "(2) Adición de ingredientes";
		Escribir "(3) Cantidad actual de ingredientes";
		Escribir "(0) Salir";
		Escribir "Opción (1, 2, 3 o 0): " Sin Saltar; 
		Leer opc;
		Escribir " ";
		
		Segun opc Hacer
			1:
				Escribir "catalogOptions";
				Escribir " ";
			2:
				Escribir "addIngredients";
				Escribir " ";
			3:
				Escribir "showIngredients";
				Escribir " ";
			0:
				Escribir "¡Adiós!";
			De Otro Modo:
				Escribir opc, " no es una opción válida.";
				Escribir " ";
		FinSegun
	Hasta Que (opc==0)
FinProceso