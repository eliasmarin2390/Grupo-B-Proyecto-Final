Proceso catalogOptions
	Definir opc Como Entero;
	
	Limpiar Pantalla;
	opc <- 0;
	Escribir "|-OPCIONES DEL CAT�LOGO-|";
	Escribir " ";
	Escribir "-OPCIONES-";
	Escribir " ";
	Escribir "(1) Tortas personalizadas";
	Escribir "(2) Cupcakes de frutas";
	Escribir "(3) Otros";
	Escribir "(0) Salir";
	Escribir " ";
	
	Repetir
		Escribir "�Qu� desea preparar? (Opci�n 1, 2, 3 o 0)";
		Leer opc;
		
		Segun opc Hacer
			1:
				Escribir " ";
				Escribir "catalogOptions1";
				Escribir " ";
			2:
				Escribir " ";
				Escribir "catalogOptions2";
				Escribir " ";
			3:
				Escribir " ";
				Escribir "catalogOptions3";
				Escribir " ";
			0:
				Escribir " ";
				Escribir "menuProcess";
				Escribir " ";
			De Otro Modo:
				Escribir " ";
				Escribir opc, " no es una opci�n v�lida.";
				Escribir " ";
		FinSegun
	Hasta Que (opc==0)
FinProceso
