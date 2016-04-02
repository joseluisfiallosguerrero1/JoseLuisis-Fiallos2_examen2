#include"list.hpp"
#include"person.hpp"
#include<iostream>




	List::List(){
		this->head=new Node();
	}
	List::List(Person persona){
		this->head=new Node(persona);
	}
	List::~List(){
	
	}
	void List::setHead(Person persona){
		this->head=new  Node(persona);	
	}
	Person List::getHead(){
		return head->getValue();	
	}
	Person List::at(int posicion){
		Node* temp=head;
		for(int i=0;i<=posicion;i++){
			if(temp->hasNext()){	
				temp=temp->getNext();				
			}else{
				throw "error";
			}
		}		
		return temp->getValue();
	}
	void List::erase(int posicion){
		 Node* temp= head;
	        for(int i=0; i<posicion;i++){
	                temp = temp->getNext();
	        }
	        Node* erase= temp->getNext();
	        temp->setNext(erase->getNext());		
	}
	void List::concat(List* lista){
		Node* temp=head;
		while(temp->hasNext()){
			temp=temp->getNext();			
		}
		temp->setNext(lista->first());
		
	}
	int List::find(Person persona){
		Node* temp= head;
		int contador=0;
		bool seleccionado=false;
		bool salir=false;
		while(!salir){
		        if(!strcmp((temp->getValue()).getName(),persona.getName())){
		                salir= true;
		                seleccionado=true;
		        }else{
				temp=temp->getNext();
		                contador++;
		        }
		}

		if(seleccionado){
		        return contador-1;
		}else{
		        return -1;
		}

	}
	int List::size(){
		int contador=0;
		Node* temp=head;
		if(head){
			while(temp->hasNext()){
				if(temp->hasNext()){
					temp=temp->getNext();	
				        contador++;  
				}
			}
			return contador;
		}else{
			return 1;
		}

			
	}
	void List::push_back(Person persona){
		Node* temp = head;
	        if(head){
	                while(temp->hasNext()){
	                        temp= temp->getNext();
	                }
	                temp->setNext(new Node(persona));
	        }else{
	                head =new Node(persona);
	        }

					
		
	}
	Node* List::first(){
		return head;
	}
	void List::insert(int posicion, Person persona){
	}
