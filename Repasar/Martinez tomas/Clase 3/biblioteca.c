

int cambiarValor(int valor)
{
    valor=999;
    return 1;
}

int cambiarValorReferencia(int *valor)
{
    printf("\nLo que recibe: %d", valor);
    *valor=999;
    return 1;
}

int dividirPorReferencia(int datoUno, int datoDos, float *respuesta)
{
    if(datoUno != 0)
    {
        *respuesta=(float)datoUno/datoDos;
        return 1;
    }
    return 0;
}

int saludar ()
{
    printf("Hola biblioteca");
}

int dividir(int numero)
{
    int respuesta;
    int resultado;
    if(esDistintoQueCero(numero)==1)
    {
        resultado = numero/2;
    }

    return respuesta;
}
int esDistintoQueCero(int numero)
{
    if(numero!=0)
    {
        return 1;
    }
    return 0;
}

int factorial(int numero)
{
    int respuesta;
    if(numero==1)
    {
        return 1;
    }
    respuesta=numero*factorial(numero-1);
    return respuesta;
}
