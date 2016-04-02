#include "node.hpp"
#include "person.hpp"
#include <cstring>
#include <iostream>

using namespace std;


Node::Node(){
	this -> next = NULL;
}

Node::Node(Person persona): persona(persona), next(NULL){
	
}

Node::~Node(){

}

Person Node::getValue(){
	return persona;
}

Node* Node::getNext(){
	return next;
}

void Node::setValue(Person persona){
	this -> persona= persona;
}

void Node::setNext(Node* next){
	this-> next = next;
}

bool Node::hasNext(){
	if(next!=NULL){
		return true;
	}else{
		return false;
	}
}
