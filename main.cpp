#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
vector <int>*cosa;

class Nodo
{
public:
    Nodo*sig;
    int num;
    Nodo(int num)
    {
        this->num=num;
        sig=NULL;
    }

};
class Lista
 {
    public:
        Nodo*inicio;
        Lista()
        {
          inicio=NULL;
        }
        //ingresa un nodo nuevo al final de la lista

        void agregar(Nodo*nuevo)
        {
            if(inicio==NULL)
            {
            inicio=nuevo;
            }
            else
            {
                Nodo*temp=inicio;
                while(temp->sig!=NULL)
                {
                 temp=temp->sig;
                }
                temp->sig=nuevo;
           }
            }

        void imprimir()
        {

        for(Nodo* temp=inicio;temp!=NULL;temp=temp->sig)
    {
        cout<<temp->num<<endl;
    }
        }

        };




class persotable
{
public:

    int posx;
    int posy;
     int vida;
     int ataque;
      int jugador;
    persotable(int posx,int posy, int vida,int ataque, int jugador){
    this->posx=posx;
    this->posy=posy;
    this->vida=vida;
    this->ataque=ataque;
    this->jugador=jugador;
    }
    void imprimir(){
        cout<<posx<<endl;
        cout<<posy<<endl;
        cout<<vida<<endl;
        cout<<ataque<<endl;
        cout<<jugador<<endl;
    }
};
void curacion()
{

};



int main()
{
  int posx;
    int posy;
     int vida;
     int ataque;
      int jugador;
ofstream prueba("exa.txt",ios::app);

cout<<"ingrese el valor de la posicion 1: "<<endl;
cin>>posx;
cout<<"ingrese el valor de la posicion 2: "<<endl;
cin>>posy;
cout<<"ingrese la vida del jugador: "<<endl;
cin>>vida;
cout<<"ingrese el ataque del jugador: "<<endl;
cin>>ataque;
cout<<"ingrese el numero de jugador: "<<endl;
cin>>jugador;
prueba<<posx<<endl;
prueba<<posy<<endl;
prueba<<vida<<endl;
prueba<<ataque<<endl;
prueba<<jugador<<endl;

Lista lu;
persotable go(posx,posy,vida,ataque,jugador);
lu.agregar(new Nodo(10));
lu.imprimir();

return 0;
}






