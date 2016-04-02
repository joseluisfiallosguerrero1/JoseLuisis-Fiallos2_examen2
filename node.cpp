#include<iostream>
#include"person.hpp"
#include"node.hpp"

	Node::Node(){
		
	}
	Node::Node(Person persona){
		this->persona=persona;
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
		this->persona=persona;
	}
	void Node::setNext(Node* next){
		this->next=next;
	}
	bool Node::hasNext(){
		if(next==NULL){
			return false;
		}else{
			return true;
		}
	}
