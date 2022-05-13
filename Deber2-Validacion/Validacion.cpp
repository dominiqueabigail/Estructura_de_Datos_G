#include "Validacion.h"

template<class T>
Validacion<T>::Validacion(){

}

template<class T>
T Validacion<T>::ingresarDatos(string msg){
    char *dato = new char[10];
    T numero;
    double convertido;
	char c;
	int i = 0, bandera = 0;
	cout << msg << endl;
	while((c = getch()) != 13){
        if(bandera <= 1){
            if((c >= '0' && c <= '9') || c == '.'){
                if (c == '.')
                {
                    bandera++;
                }
                if (bandera <= 1)
                {
                    printf("%c",c);
			        dato[i++] = c;
                }
                if(bandera == 2){
                    bandera--;
                }
		    }
        }
		
	}
	dato[i]='\0';
    convertido = atof(dato);
    numero = convertido;
    cout << endl;
	return numero;
}
