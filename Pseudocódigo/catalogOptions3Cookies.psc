Proceso catalogOptions3Cookies
    Definir cantidad Como Entero;
    definir harina Como Real;
    definir azucar Como Real;
    definir huevos Como Entero;
    definir mantequilla Como Real;
    definir levadura Como Real;
    definir empaques Como Entero;
	
    harina <- 10.0;      
    azucar <- 5.0;       
    huevos <- 10;         
    mantequilla <- 2.0;  
    levadura <- 1.0;      
    empaques <- 10;       
	
    Limpiar Pantalla;
    Escribir "¿Cuantas galletas seran?";
    Leer cantidad;
	
    harina <- harina - 0.300 * cantidad;
    azucar <- azucar - 0.6 * cantidad;
    huevos <- huevos - 2 * cantidad;
    mantequilla <- mantequilla - 0.19 * cantidad;
    levadura <- levadura - 0.009 * cantidad;
    empaques <- empaques - 1;
	
    Escribir "El proceso fue realizado con exito";
    Escribir " ";
    Escribir "Pulse cualquier tecla para continuar.";
    Esperar Tecla;
FinProceso


