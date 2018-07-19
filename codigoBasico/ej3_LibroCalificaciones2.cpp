#include <bits/stdc++.h>
using namespace std;

class LibroCalificaciones{
    private:string nombreCurso;

    public:void mostrar_mensaje(string nombre){
        cout<<"Bienvenido "<<nombre<<'\n';
    };
    public:void setNombreCurso(string nuevo){
        nombreCurso = nuevo;
    }
    public:string getNombreCurso(){
        return nombreCurso;
    }
};

int main(){
    cout<<"Ingrese nombre del curso: \n";
    LibroCalificaciones libro;
    string nombre;

    getline(cin,nombre);

    libro.mostrar_mensaje(nombre);
    libro.setNombreCurso("Quimica Organica");
    cout<<"Nuevo nombre de curso: "<<libro.getNombreCurso();


    return 0;
}
