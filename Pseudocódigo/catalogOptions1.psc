Proceso catalogOptions1
	Definir opc Como Entero;
	opc <- 0;
	Escribir "Se calculan los gastos bases, como la harina, azucar, huevos, etc.";
	Escribir " ";
	Escribir "Tama�o: (1) 0.25 libras, (2) 0.5 libras o (3) 1 libras";
	Leer opc;
	Escribir " ";
	Escribir "Seg�n la opci�n, se le asignara un valor a tamano";
	Escribir " ";
	
	opc <- 0;
	Escribir "Sabor: (1) Chocolate o (2) Vainilla";
	Leer opc;
	Escribir " ";
	Escribir "Seg�n la opci�n, se le restar� a extractoChocolate o extractoVainilla";
	Escribir " ";
	
	opc <- 0;
	Escribir "Relleno: (1) Dulce de leche o (2) Leche condensada";
	Leer opc;
	Escribir " ";
	Escribir "Seg�n la opci�n, se le restar� a dulceLeche o lecheCondensada";
	Escribir " ";
	
	opc <- 0;
	Escribir "Mermeladas: (1) Fresa, (2) Pi�a y (3) Frutos Rojos";
	Leer opc;
	Escribir " ";
	Escribir "Seg�n la opci�n, se le restar� a fresa, pina o frutosRojos";
	Escribir " ";
	
	Escribir "El proceso fue realizado con �xito";
	Escribir " ";
	Escribir "Pulse cualquier tecla para continuar.";
	Esperar Tecla;
FinProceso
