Proceso catalogOptions3Cake
    Definir cantidad Como Entero;
    Definir leche Como Real;
    Definir azucar Como Real;
    Definir levadura Como Real;
    Definir harina Como Real;
    Definir dulceLeche Como Real;
    Definir lecheCondensada Como Real;
    Definir empaques Como Entero;
	
    Limpiar Pantalla;
    
    cantidad <- 0;
    leche <- 0.19;
    azucar <- 0.095;
    levadura <- 0.012;  
    harina <- 0.285;
    dulceLeche <- 0.19;
    lecheCondensada <- 0.19;
    empaques <- 1;      
	
   
    levadura <- levadura - 0.012;
    empaques <- empaques - 1;
	
    Escribir "El proceso fue realizado con exito";
    Escribir " ";
    Escribir "Pulse cualquier tecla para continuar.";
    Esperar Tecla;
FinProceso

