#include "Utilidades.h"

void Utilidades::clrscr() {
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); // gets the window handle
    COORD coord = { 0, 0 }; // sets coordinates to 0,0
    DWORD count;

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hStdOut, &csbi); // gets the buffer info (screen)

    // fill all characters as ' ' (empty the screen)
    FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

    // resets the cursor position
    SetConsoleCursorPosition(hStdOut, coord);
}

// mueve el cursor donde se imprimira el texto
void Utilidades::gotoxy(int x, int y) {

    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void Utilidades::setConsole(int posX, int posY, int tamX, int tamY) {
    HANDLE wHnd;
    wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = { posX, posY, tamX, tamY };
    SetConsoleWindowInfo(wHnd, 1, &windowSize);
}

string Utilidades::deMayusculaAMinuscula(string cadena) {
    for (int i = 0; i < cadena.length(); i++) cadena[i] = tolower(cadena[i]);
    return cadena;
}

string Utilidades::deMinusculaAMayuscula(string cadena) {
    for (int i = 0; i < cadena.length(); i++) cadena[i] = toupper(cadena[i]);
    return cadena;
}

void Utilidades::wait(float seconds) {
    clock_t endwait;
    endwait = clock() + seconds * CLOCKS_PER_SEC;
    while (clock() < endwait) {}
}

void Utilidades::cursorHide()
{
    HANDLE hwnd;
    hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;

    info.bVisible = 0;
    info.dwSize = 1;

    SetConsoleCursorInfo(hwnd, &info);
}

int Utilidades::ingreso(const char* msj) {
    char dato[9];
    char c;
    int i = 0;
    printf("%s", msj);
    while ((c = _getch()) != 13) {
        if (c >= '0' && c <= '9') {
            printf("%c", c);
            dato[i++] = c;
        }
    }
    int valor = atoi(dato);
    cout << endl;
    return valor;
}

string Utilidades::ocultarIngreso(const char* msj) {
    char dato[20];
    char c;
    int i = 0, cont = 0;
    string cad;
    printf("%s", msj);
    while ((c = _getch()) != 13) {
        cout << "*";
        dato[i++] = c;
        cont++;
    }
    for (int j = 0; j < cont; j++)
    {
        cad.push_back(dato[j]);
    }
    cout << endl;
    return cad;
}

string Utilidades::ingresarSoloLetras(const char* msj) {
    char dato[30];
    char c;
    int i = 0;
    printf("%s \n", msj);
    while ((c = _getch()) != 13) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == 32) {
            printf("%c", c);
            dato[i++] = c;
        }
    }
    string valor;
    for (int j = 0; j < i; j++)
    {
        valor.push_back(dato[j]);
    }
    return valor;
}

string Utilidades::soloNumeros(const char* msj) {
    char dato[10];
    char c;
    int i = 0;
    printf("%s \n", msj);
    while ((c = _getch()) != 13) {
        if ((c >= '0' && c <= '9') && i < 10) {
            printf("%c", c);
            dato[i++] = c;
        }
    }
    string valor;
    for (int j = 0; j < i; j++)
    {
        valor.push_back(dato[j]);
    }
    return valor;
}

