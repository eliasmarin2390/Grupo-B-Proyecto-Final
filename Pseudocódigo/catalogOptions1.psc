Proceso catalogOptions1
	Definir opc Como Entero;
	opc <- 0;
	Escribir "Se calculan los gastos bases, como la harina, azucar, huevos, etc.";
	Escribir " ";
	Escribir "Tamaño: (1) 0.25 libras, (2) 0.5 libras o (3) 1 libras";
	Leer opc;
	Escribir " ";
	Escribir "Según la opción, se le asignara un valor a tamano";
	Escribir " ";
	
	opc <- 0;
	Escribir "Sabor: (1) Chocolate o (2) Vainilla";
	Leer opc;
	Escribir " ";
	Escribir "Según la opción, se le restará a extractoChocolate o extractoVainilla";
	Escribir " ";
	
	opc <- 0;
	Escribir "Relleno: (1) Dulce de leche o (2) Leche condensada";
	Leer opc;
	Escribir " ";
	Escribir "Según la opción, se le restará a dulceLeche o lecheCondensada";
	Escribir " ";
	
	opc <- 0;
	Escribir "Mermeladas: (1) Fresa, (2) Piña y (3) Frutos Rojos";
	Leer opc;
	Escribir " ";
	Escribir "Según la opción, se le restará a fresa, pina o frutosRojos";
	Escribir " ";
	
	Escribir "El proceso fue realizado con éxito";
	Escribir " ";
	Escribir "Pulse cualquier tecla para continuar.";
	Esperar Tecla;
FinProceso
