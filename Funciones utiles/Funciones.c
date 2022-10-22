
// USO EL ARCHIVO PARA ALMECENAR FUNCIONES QUE ME AYUDEN EN OTROS PROGRAMAS

int   validInt();
float validFloat();
bool  hasAChar(char*, char*);


bool hasAChar(char* strStart, char* strEnd) // Para validar que una
                                            // cadena no tenga caracteres
{
    char* ptr = strStart;
    if (*ptr == '-')
        ptr++;
    while (ptr <= strEnd && *ptr != '\0')
    {
        if ((*ptr < 48 || *ptr > 57))
            return true;
        if (*(++ptr) == '\n')
            *ptr = '\0';
    }

    return false;
}

int validInt() // Te retorna un int.
               // La uso para no validar cada
               // que necesitamos ingresar algo
{
    char str[10];

    getstr(str);

    while (hasAChar(str, str + 10))
    {
        printw("No puede usar caracteres. Intente de nuevo: ");
        getstr(str);
    }

    return (int)strtol(str, NULL, 10);
}


bool hasACharf(char* strStart, char* strEnd) // Para validar que una
                                             // cadena no tenga caracteres
{
    char* ptr = strStart;
    if (*ptr == '-')
        ptr++;
    while (ptr <= strEnd && *ptr != '\0')
    {
        if (*ptr == '.')
            ptr++;
        if ((*ptr < 48 || *ptr > 57))
            return true;
        if (*(++ptr) == '\n')
            *ptr = '\0';
    }

    return false;
}

float validFloat() // Te retorna un float
{
    char str[10];
    int  num, i;

    fgets(str, 10, stdin);

    while (hasACharf(str, str + 10))
    {
        printf("Caracteres detectados. Intente de nuevo: ");
        fgets(str, 10, stdin);
    }

    return strtof(str, NULL);
}