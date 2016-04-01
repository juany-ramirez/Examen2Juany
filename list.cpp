#include "list.hpp"
#include "node.hpp"
#include <cstring>
#include <iostream>

using namespace std;


List::List(){

}

List::List(Person persona){
	head = new Node(persona);
}

List::~List(){
	delete head;
}

void List::setHead(Person persona){
	this->head = head;
}

Person List::getHead(){
	return head->getValue();
}

void List::insert(int posicion, Person persona){
    int cont=0;
	Node* temp=head;
	do{
		if(posicion==0 && cont==0 && temp==NULL){
			head=new Node(persona);
			temp=head;
		}else if(posicion==0 && cont==0){
			temp->setNext(head);	
			head=temp;
			
		}else if ((cont+1)==posicion){
			Node* temp2=temp->getNext();
			temp->setNext(new Node(persona,temp2));	
		}
		cont++;
		temp=temp->getNext();
	} while (temp!=NULL);
	
}

Person List::at(int posicion){
	int cont=0;
	Node* temp=head;
	Node* retorno;
	do{
		if(posicion==cont){
			retorno=temp;
		}
		cont++;
		temp=temp->getNext();
	} while (temp!=NULL);
	return retorno->getValue();
}

void List::erase(int posicion){

}

void List::concat(List* lista){

}

int List::find(Person persona){
	Node* nuevo=head;
	int cont=0;
	while (nuevo->hasNext()){
		if(persona.getName()==(nuevo->getValue()).getName())
		nuevo=nuevo->getNext();
		cont++;
	} 
	return cont;
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

Node* List::first(){
	return head;
}


