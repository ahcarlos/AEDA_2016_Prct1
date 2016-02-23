#include "addons.hpp"
#include "vector_t.hpp"
#include "stack_t.hpp"
#include "queue_t.hpp"
#include <stdlib.h>


int main(void)
{
    int main=8;
    vector_t v(10);
    vector_t c(10);
    sll_t list;
    stack_t pila;
    queue_t cola;
    node_t* b;
    node_t* a;
    
    
    do
    {   cout << "*********************************************************"<< endl;
        cout << "*--------AEDA: Estructuras de datos esenciales ---------* " << endl;
        cout << "*********************************************************" << endl;
        cout << endl;
        cout << "Elija estructura de datos para trabajar" << endl;
        cout << "0.- Salir del programa" << endl;
        cout << "1.- Vector" << endl;
        cout << "2.- Pila" << endl;
        cout << "3.- Lista" << endl;
        cout << "4.- Cola" << endl;
        cout << "**********************************************************" << endl;
        
        
        cout << " >> ";
        cin >> main;
        
        switch(main){
            case 0: cout << "Has salido del programa."<< endl; exit(0); break;
            
            case 1:
                system("clear");
                cout << "Trabajando con VECTOR" << endl;
                cout << "Rellenamos el vector" << endl;
                for(int i=0; i< v.get_sz(); i++){
                    v[i]= i;
                    c[i]= i;
                }
                
                v.write(cout);
        
                int elige;
                int posi;
                cout<< "Que posicion del vector desea inspeccionar? (escriba numero)" << endl;
                cout << ">>";
                cin >> elige;
                
                posi= v.get_val(elige);
                cout << "La posicion  " << elige << " contiene lo siguiente: " << posi << endl;
                
                cout<< "Producto escalar de el vector por si mismo: ";
                cout << v.scalprod(c);
                cout<< endl;
            break;
            
            case 2:
                system("clear");
                cout << "Trabajando con PILA" << endl;
                cout << "'Push' de datos en la pila (numeros del 1 al 10)" << endl;
    
                for(int i=0; i<10; i++){
                    pila.push(i);
                }
                
                 cout << "Se ha rellenado la pila: ";
                pila.write(cout);
                cout << endl;
                cout << endl;
                
                cout << "Hacemos 'pop' de todos los elementos de la pila" << endl;
                while(!pila.empty()){
                    pila.pop();
                    pila.write(cout);
                    cout << endl;
                }
            break;
            
            case 3:
                system("clear");
                cout << " Trabajando con LISTA" << endl;
                
                cout << "Rellenando lista" << endl;
                
                for(int i=0;i<10;i++){
                    list.insert_beginning(new node_t(i));
            	}
            	
            	list.write(cout);
                cout << endl;
                
                cout << "Extrayendo por el principio: ";
                a= list.extract_beginning();
                cout<< a->get_dato()<< endl;
    
                cout << "Estrayendo por el final: ";
                b= list.extract_end();
                cout << b->get_dato() << endl;
                
                
            
            break;
            
            case 4:
                system("clear");
                cout << "Trabajando con COLA" << endl;
                cout << "Hacemos 'put' de datos en la cola (numeros del 1 al 10)" << endl;
    
                for(int i=0; i< 10 ; i++){
                    cola.put(i);
                }
                
                cout << "Se ha rellenado la cola: ";
                cola.write(cout);
                cout << endl;
                cout << endl;
                
                cout << "Hacemos 'get' de todos los elementos de la cola" << endl;
                while(!cola.empty()){
                    cola.get();
                    cola.write(cout);
                    cout << endl;
                }
                
                
            break;
            
           
            
        }
        
    }
    while(main!=0);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    vector_t v(10);
    vector_t c(10);
    
    
    for(int i=0; i< v.get_sz(); i++){
        v[i]= i;
        c[i]= i;
    }
    
    
    v.write(cout);
    
    int elige;
    cout<< "Que posicion del vector desea inspeccionar? (escriba numero)" << endl;
    cout << ">>";
    cin >> elige;
    
    int a= v.get_val(elige);
    cout << "La posicion  " << elige << " contiene lo siguiente: " << a << endl;
    
    cout<< "Producto escalar de el vetor por si mismo: ";
    cout << v.scalprod(c);
    cout<< endl;
    */
    
    /*
    cout << "Rellenando lista" << endl;
    sll_t list;
    for(int i=0;i<10;i++){
        
	    list.insert_beginning(new node_t(i));
	}
    
    list.write(cout);
    cout << endl;
    
    cout << "Extrayendo por el principio: ";
    node_t* a= list.extract_beginning();
    
    cout<< a->get_dato()<< endl;
    
    cout << "Estrayendo por el final: ";
    node_t* b= list.extract_end();
    cout << b->get_dato() << endl;
    */
    
    /*
    stack_t pila;
    
    cout << "'Push' de datos en la pila (numeros del 1 al 10)" << endl;
    
    for(int i=0; i<10; i++){
        pila.push(i);
    }
    cout << "Se ha rellenado la pila: ";
    pila.write(cout);
    cout << endl;
    cout << endl;
    
    cout << "Hacemos 'pop' de todos los elementos de la pila" << endl;
    while(!pila.empty()){
        pila.pop();
        pila.write(cout);
        cout << endl;
    }
    */
  
  /*
    queue_t cola;
    cout << "Hacemos 'put' de datos en la cola (numeros del 1 al 10)" << endl;
    
    for(int i=0; i< 10 ; i++){
        cola.put(i);
    }
    cout << "Se ha rellenado la cola: ";
    cola.write(cout);
    cout << endl;
    cout << endl;
    
    cout << "Hacemos 'get' de todos los elementos de la cola" << endl;
    while(!cola.empty()){
        cola.get();
        cola.write(cout);
        cout << endl;
    }
    */
    
    
   
    
}

//system("clear");