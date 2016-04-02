#include "list.hpp"
#include "node.hpp"
#include <cstring>
#include <iostream>

using namespace std;


List::List(){
	head = NULL;
}

List::List(Person persona){
	head = new Node(persona);
}

List::~List(){
	delete head;
}

void List::setHead(Person persona){
	this->head = new Node(persona);
}

Person List::getHead(){
	return head->getValue();
}

void List::insert(int posicion, Person persona){
    
    /*int cont=0;
	Node* temp=head;
	while (temp->hasNext()){
		if(posicion==0 && cont==0 && temp==NULL){
			setHead(persona);
		}else if(posicion==0 && cont==0){
			Node* temp2->setNext(head);	
			setHead(persona);
		}else if ((cont+1)==posicion){
			//Node* temp2=temp->getNext();
			//temp->setNext(new Node(persona,temp2));	
		}
		cont++;
		temp=temp->getNext();
	}
	*/
	
}

Person List::at(int posicion){
	int cont=0;
	Node* temp=head;
	Node* retorno;
	while (temp->hasNext()){
		if(posicion==cont){
			retorno=temp;
		}
		cont++;
		temp=temp->getNext();
	}
	return retorno->getValue();
}

void List::erase(int posicion){
	if(posicion >=0 && posicion< this-> size()){
		int actual;
		Node* temp = head;
		while(actual < posicion){
			temp = temp -> getNext();
			actual++;
		}
		temp -> setNext(temp -> getNext() ? temp -> getNext() ->getNext() : NULL);
	}
}

void List::concat(List* lista){
	Node* temp = head;
	while(temp->hasNext()){
		temp = temp-> getNext();
	}
	temp -> setNext(lista->first());
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
	int i=0;
	while(head->hasNext()){
    	i++;
    }
    return i;
}

void List::push_back(Person persona){
	if(!head){
		this-> setHead(persona);
	}
    Node* nuevo = head;

	while(nuevo->hasNext()){
		//throw "m";
		nuevo = nuevo-> getNext();
	}
	//throw "m";
	nuevo -> setNext(new Node(persona));

}

Node* List::first(){
	return head;
}


