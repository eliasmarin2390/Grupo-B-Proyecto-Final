Proceso CakeControl
	Definir opc Como Entero;
	Definir extractoChocolate Como Real;
	Definir extractoVainilla Como Real;
	Definir harina Como Real;
	Definir azucar Como Real;
	Definir levadura Como Real;
	Definir dulceLeche Como Real;
	Definir lecheCondensada Como Real;
	Definir fresa Como Real;
	Definir pina Como Real;
	Definir frutosRojos Como Real;
	Definir leche Como Real;
	Definir mantequilla Como Real;
	Definir mora Como Real;
	Definir cereza Como Real;
	Definir mango Como Real;
	Definir chispasChocolate Como Real;
	Definir malvaviscos Como Real;
	Definir huevos Como Entero;
	Definir empaques Como Entero;
	Definir tamano Como Entero;
	Definir cantidad Como Entero;
	Definir aux Como Real;
	
	extractoChocolate <- 0;
	extractoVainilla <- 0;
	harina <- 0;
	azucar <- 0;
	levadura <- 0;
	dulceLeche <- 0;
	lecheCondensada <- 0;
	fresa <- 0;
	pina <- 0;
	frutosRojos <- 0;
	leche <- 0;
	mantequilla <- 0;
	mora <- 0;
	cereza <- 0;
	mango <- 0;
	chispasChocolate <- 0;
	malvaviscos <- 0;
	huevos <- 0;
	empaques <- 0;
	aux <- 0;
	
	Repetir
	Limpiar Pantalla;
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
			Limpiar Pantalla;
			opc <- 0;
			Escribir "|-OPCIONES DEL CATÁLOGO-|";
			Escribir " ";
			Escribir "-OPCIONES-";
			Escribir " ";
			Escribir "(1) Tortas personalizadas";
			Escribir "(2) Cupcakes de frutas";
			Escribir "(3) Otros";
			Escribir " ";
			
			Escribir "¿Qué desea preparar? (Opción 1, 2 o 3)";
			Leer opc;
			Segun opc Hacer
				1:
					opc <- 0;
					tamano <- 0;
					harina<-harina-0.42;
					azucar<-azucar-0.6;
					huevos<-huevos-4;
					mantequilla<-mantequilla-0.07;
					levadura<-levadura-0.012;
					empaques<-empaques-1;
					Escribir "Tamaño: (1) 0.25 libras, (2) 0.5 libras o (3) 1 libras";
					Leer opc;
					Segun opc Hacer
						1:
							tamano<-0.25;
							Escribir " ";
						2:
							tamano<-0.5;
							Escribir " ";
						3:
							tamano<-1;
							Escribir " ";
						De Otro Modo:
							Escribir " ";
							Escribir opc, " no es una opción válida.";
							Escribir " ";
							Escribir "Pulse cualquier tecla para continuar.";
							Esperar Tecla;
					FinSegun
					
					opc <- 0;
					Escribir "Sabor: (1) Chocolate o (2) Vainilla";
					Leer opc;
					Segun opc Hacer
						1:
							extractoChocolate<-extractoChocolate-0.015*tamano;
							Escribir " ";
						2:
							extractoVainilla<-extractoVainilla-0.015*tamano;
							Escribir " ";
						De Otro Modo:
							Escribir " ";
							Escribir opc, " no es una opción válida.";
							Escribir " ";
							Escribir "Pulse cualquier tecla para continuar.";
							Esperar Tecla;
					FinSegun
					
					opc <- 0;
					Escribir "Relleno: (1) Dulce de leche o (2) Leche condensada";
					Leer opc;
					Segun opc Hacer
						1:
							dulceLeche<-dulceLeche-0.12*tamano;
							Escribir " ";
						2:
							lecheCondensada<-lecheCondensada-0.12*tamano;
							Escribir " ";
						De Otro Modo:
							Escribir " ";
							Escribir opc, " no es una opción válida.";
							Escribir " ";
							Escribir "Pulse cualquier tecla para continuar.";
							Esperar Tecla;
					FinSegun
					
					opc <- 0;
					Escribir "Mermeladas: (1) Fresa, (2) Piña y (3) Frutos Rojos";
					Leer opc;
					Segun opc Hacer
						1:
							fresa<-fresa-0.55*tamano;
							Escribir " ";
						2:
							pina<-pina-0.55*tamano;
							Escribir " ";
						3:
							frutosRojos<-frutosRojos-0.55*tamano;
							Escribir " ";
						De Otro Modo:
							Escribir " ";
							Escribir opc, " no es una opción válida.";
							Escribir " ";
							Escribir "Pulse cualquier tecla para continuar.";
							Esperar Tecla;
					FinSegun
					
					Escribir "El proceso fue realizado con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				2:
					opc <- 0;
					cantidad <- 0;
					harina<-harina-0.475;
					azucar<-azucar-0.6;
					huevos<-huevos-3;
					mantequilla<-mantequilla-0.09;
					levadura<-levadura-0.012;
					empaques<-empaques-1;
					Escribir "Cantidad: (1) Individual, (2) Combo X4 o (3) Ramo de 7";
					Leer opc;
					Segun opc Hacer
						1:
							cantidad<-1;
							Escribir " ";
						2:
							cantidad<-4;
							Escribir " ";
						3:
							cantidad<-7;
							Escribir " ";
						De Otro Modo:
							Escribir " ";
							Escribir opc, " no es una opción válida.";
							Escribir " ";
							Escribir "Pulse cualquier tecla para continuar.";
							Esperar Tecla;
					FinSegun
					
					opc <- 0;
					Escribir "Sabores: (1) Fresa, (2) Mora, (3) Cereza y (4) Mango";
					Leer opc;
					Segun opc Hacer
						1:
							fresa<-fresa-0.5*cantidad;
							Escribir " ";
						2:
							mora<-mora-0.5*cantidad;
							Escribir " ";
						3:
							cereza<-cereza-0.5*cantidad;
							Escribir " ";
						4:
							mango<-mango-0.5*cantidad;
							Escribir " ";
						De Otro Modo:
							Escribir " ";
							Escribir opc, " no es una opción válida.";
							Escribir " ";
							Escribir "Pulse cualquier tecla para continuar.";
							Esperar Tecla;
					FinSegun
					
					Escribir "El proceso fue realizado con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				3:
					Escribir "(1) Galletas y (2) Pastel de Tres Leches";
					Leer opc;
					Segun opc Hacer
						1:
							cantidad <- 0;
							Escribir " ";
							Escribir "¿Cuántas galletas serán?";
							Leer cantidad;
							opc <- 0;
							harina<-harina-0.300*cantidad;
							azucar<-azucar-0.6*cantidad;
							huevos<-huevos-2*cantidad;
							mantequilla<-mantequilla-0.19*cantidad;
							levadura<-levadura-0.009*cantidad;
							empaques<-empaques-1;
							Escribir "El proceso fue realizado con éxito";
							Escribir " ";
							Escribir "Pulse cualquier tecla para continuar.";
							Esperar Tecla;
						2:
							opc <- 0;
							cantidad <- 0;
							leche <- 0.19;
							azucar <- 0.095;
							levadura<-levadura-0.012;
							harina <- 0.285;
							dulceLeche <- 0.19;
							lecheCondensada <- 0.19;
							empaques<-empaques-1;
							Escribir "El proceso fue realizado con éxito";
							Escribir " ";
							Escribir "Pulse cualquier tecla para continuar.";
							Esperar Tecla;
						De Otro Modo:
							Escribir " ";
							Escribir opc, " no es una opción válida.";
							Escribir " ";
							Escribir "Pulse cualquier tecla para continuar.";
							Esperar Tecla;
							
					FinSegun
					
				De Otro Modo:
					Escribir " ";
					Escribir opc, " no es una opción válida.";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				
			FinSegun
		2:
			Limpiar Pantalla;
			opc <- 0;
			Escribir "|-ADICIÓN DE INGREDIENTES-|";
			Escribir " ";
			Escribir "-OPCIONES-";
			Escribir " ";
			Escribir "EN LITROS";
			Escribir "(1) Extracto de chocolate";
			Escribir "(2) Extracto de vainilla";
			Escribir "(3) Leche";
			Escribir " ";
			Escribir "EN KILOGRAMOS";
			Escribir "(4) Harina";
			Escribir "(5) Azúcar";
			Escribir "(6) Levadura";
			Escribir "(7) Dulce de leche";
			Escribir "(8) Leche condensada";
			Escribir "(9) Fresa";
			Escribir "(10) Piña";
			Escribir "(11) Frutos rojos";
			Escribir "(12) Mantequilla";
			Escribir "(13) Mora";
			Escribir "(14) Cereza";
			Escribir "(15) Mango";
			Escribir "(16) Chispas de chocolate";
			Escribir "(17) Malvaviscos";
			Escribir " ";
			Escribir "EN UNIDADES";
			Escribir "(18) Huevos";
			Escribir "(19) Empaques";
			Escribir " ";
			
			Escribir "¿Cuánto desea añadir?";
			Leer aux;
			Escribir "¿A qué ingrediente desea añadirlo? (Opción 1-19)";
			Leer opc;
			
			Segun opc Hacer
				1:
					extractoChocolate <- extractoChocolate+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				2:
					extractoVainilla <- extractoVainilla+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				3:
					leche <- leche+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				4:
					harina <- harina+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				5:
					azucar <- azucar+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				6:
					levadura <- levadura+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				7:
					dulceLeche <- dulceLeche+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				8:
					lecheCondensada <- lecheCondensada+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				9:
					fresa <- fresa+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				10:
					pina <- pina+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				11:
					frutosRojos <- frutosRojos+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				12:
					mantequilla <- mantequilla+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				13:
					mora <- mora+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				14:
					cereza <- cereza+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				15:
					mango <- mango+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				16:
					chispasChocolate <- chispasChocolate+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				17:
					malvaviscos <- malvaviscos+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				18:
					huevos <- huevos+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				19:
					empaques <- empaques+aux;
					Escribir "La adición fue realizada con éxito";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
				De Otro Modo:
					Escribir " ";
					Escribir opc, " no es una opción válida.";
					Escribir " ";
					Escribir "Pulse cualquier tecla para continuar.";
					Esperar Tecla;
			FinSegun
		3:
			Limpiar Pantalla;
			Escribir "|-CANTIDAD ACTUAL DE INGREDIENTES-|";
			Escribir "EN LITROS";
			Escribir "Extracto de chocolate: ", extractoChocolate;
			Escribir "Extracto de vainilla: ", extractoVainilla;
			Escribir "Leche: ", leche;
			Escribir " ";
			Escribir "EN KILOGRAMOS";
			Escribir "Harina: ", harina;
			Escribir "Azúcar: ", azucar;
			Escribir "Levadura: ", levadura;
			Escribir "Dulce de leche: ", dulceLeche;
			Escribir "Leche condensada: ", lecheCondensada;
			Escribir "Fresa: ", fresa;
			Escribir "Piña: ", pina;
			Escribir "Frutos rojos: ", frutosRojos;
			Escribir "Mantequilla: ", mantequilla;
			Escribir "Mora: ", mora;
			Escribir "Cereza: ", cereza;
			Escribir "Mango: ", mango;
			Escribir "Chispas de chocolate: ", chispasChocolate;
			Escribir "Malvaviscos: ", malvaviscos;
			Escribir " ";
			Escribir "EN UNIDADES";
			Escribir "Huevos: ", huevos;
			Escribir "Empaques: ", empaques;
			Escribir " ";
			Escribir "Pulse cualquier tecla para continuar.";
			Esperar Tecla;
		0:
			Escribir "¡Adiós!";
		De Otro Modo:
			Escribir " ";
			Escribir opc, " no es una opción válida.";
			Escribir " ";
			Escribir "Pulse cualquier tecla para continuar.";
			Esperar Tecla;
	FinSegun
	Hasta Que (opc==0)
FinProceso