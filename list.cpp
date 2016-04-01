#include "list.hpp"
#include <cstring>
#include <iostream>

using namespace std;


List::List(){

}

List::List(Person persona){
	head = new Node(persona);
}

List::~List(){

}

void List::setHead(Person persona){

}

Person List::getHead(){

}

void List::insert(int posicion, Person persona){
	int cont=0;
    Node* nuevo = new Node();
    while(posicion!=0){
    	while(head->hasNext()){
    		cont++;
    		nuevo->setValue(persona);
    	}
    }
}

Person List::at(int posicion){

}

void List::erase(int posicion){

}

void List::concat(List* lista){

}

int List::find(Person persona){
	
}

int List::size(){
	int i;
	while(head->hasNext()){
    	i++;
    }
    return i;
}

void List::push_back(Person persona){
    Node* nuevo = head;
    nuevo -> setNext(NULL);
    if(!nuevo->hasNext()){
    	nuevo->setValue(persona);
    }else{
    	while(nuevo->hasNext()){
    		nuevo = nuevo-> getNext();
    	}
    	nuevo -> setNext(new Node(persona));
    }
}

Node* first(){

}


