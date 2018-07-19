#include <bits/stdc++.h>
using namespace std;

class LibroCalificaciones{
    private:string nombreCurso;

    public:LibroCalificaciones(string nombre){
        nombreCurso = nombre;
    };

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
    LibroCalificaciones libro("Fisica");
    string nombre;

    cout<<"Curso: "<<libro.getNombreCurso()<<'\n';

    cout<<"Ingrese nombre del curso: \n";
    getline(cin,nombre);

    libro.mostrar_mensaje(nombre);
    libro.setNombreCurso("Quimica Organica");
    cout<<"Nuevo nombre de curso: "<<libro.getNombreCurso();


    return 0;
}
