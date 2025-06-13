#include <iostream>
using namespace std;
// Función para verificar stock y mostrar alerta si es menor a 10
void verificarStock(string nombre, int stock) {
    if (stock < 10) {
        cout << "??  Alerta: El stock de " << nombre << " es bajo (" << stock << " unidades)." << endl;
    }
}

int main() {
    // Stock inicial de la papeleria
    int papel = 25;
    int lapiz = 20;
    int marcador = 15;

    int cantidad;
    int opcion;
    char continuar;

    do {
        cout << "Productos disponibles:\n";
        cout << "1. Papel (" << papel << " unidades)\n";
        cout << "2. Lápiz (" << lapiz << " unidades)\n";
        cout << "3. Marcador (" << marcador << " unidades)\n";
        cout << "Seleccione el producto que desea comprar (1-3): ";
        cin >> opcion;

        cout << "Ingrese la cantidad que desea llevar: ";
        cin >> cantidad;

        switch (opcion) {
            case 1:
                if (cantidad <= papel) {
                    papel -= cantidad;
                    cout << "Has comprado " << cantidad << " unidades de papel.\n";
                    verificarStock("papel", papel);
                } else {
                    cout << "No hay suficiente papel en stock.\n";
                }
                break;
            case 2:
                if (cantidad <= lapiz) {
                    lapiz -= cantidad;
                    cout << "Has comprado " << cantidad << " unidades de lápiz.\n";
                    verificarStock("lápiz", lapiz);
                } else {
                    cout << "No hay suficientes lápices en stock.\n";
                }
                break;
            case 3:
                if (cantidad <= marcador) {
                    marcador -= cantidad;
                    cout << "Has comprado " << cantidad << " unidades de marcador.\n";
                    verificarStock("marcador", marcador);
                } else {
                    cout << "No hay suficientes marcadores en stock.\n";
                }
                break;
            default:
                cout << "Opción inválida.\n";
                break;
        }

        cout << "\n¿Desea comprar otro producto? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "\nGracias por su compra.\n";

    return 0;
}
