#include "Fichero.h"


void Fichero::abrirFichero() {
    fstream outfile;
    outfile.open("resumen.txt", std::ios_base::out);//out es para crear un nuevo archivo si exite
    //el fichero y app es para abrir el fichero y colocar el texto al final del texto ya colocado
    //
    if (!outfile.is_open()) {
        cerr << "failed to open " << "tecto" << '\n';
    }
    else {
        outfile.write(text.data(), text.size());
        cerr << "Done Writing!" << endl;
    }
    outfile.close();
}

void Fichero::escribirFichero(Factura f) {
    fstream fichero;
    fichero.open("resumen.txt", std::ios_base::app);
    fichero << "Nombres y Apellidos del Propietario: " << f.getNombresP() << " " << f.getApellidosP() << endl;
    fichero << "Celular/Telefono del Propietario: " << f.getCelular() << endl;
    fichero << "Vehiculo del Propietario: " << endl;
    fichero << "Marca: " << f.getMarca() << "  Placa: " << f.getPlaca() << "  Color: " << f.getColor() << endl;
    fichero << "Nombres y Apellidos del Mecanico: " << f.getNombresM() << " " << f.getApellidosM() << endl;
    fichero << "Detalles del servicio adquirido:" << endl;
    fichero << "Cantidad-------Nombre----------Detalle" << endl;
    fichero << f.getCantidad() << "---" << f.getNombreS() << "---" << f.getDetallesS() << endl;
    fichero << "--------------------------------" << endl;
    fichero.close();
}
