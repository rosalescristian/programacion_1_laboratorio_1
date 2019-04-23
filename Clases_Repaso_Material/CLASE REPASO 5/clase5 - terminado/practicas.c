EPersona miPersona;

miPersona.id = 0;
strcpy(miPersona.nombre,"Luciana");
strcpy(miPersona.apellido,"Varela");
miPersona.isEmpty = 0;
miPersona.nacimiento.dia = 25;
miPersona.nacimiento.mes = 6;
miPersona.nacimiento.anio = 1993;

printf("Persona id:%d: nombre:%s apellido:%s \nnacimiento:%d/%d/%d)",
       miPersona.id,
       miPersona.nombre, miPersona.apellido,
       miPersona.nacimiento.dia, miPersona.nacimiento.mes,
       miPersona.nacimiento.anio);
