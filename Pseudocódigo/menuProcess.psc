Proceso menuProcess
	Definir opc Como Entero;
	opc <- 0;
	
	Limpiar Pantalla;
	Repetir
		opc <- 0;
		Escribir "�Bienvenid@ a CakeControl! �Qu� desea hacer";
		Escribir "(1) Opciones del cat�logo";
		Escribir "(2) Adici�n de ingredientes";
		Escribir "(3) Cantidad actual de ingredientes";
		Escribir "(0) Salir";
		Escribir "Opci�n (1, 2, 3 o 0): " Sin Saltar; 
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
				Escribir "�Adi�s!";
			De Otro Modo:
				Escribir opc, " no es una opci�n v�lida.";
				Escribir " ";
		FinSegun
	Hasta Que (opc==0)
FinProceso