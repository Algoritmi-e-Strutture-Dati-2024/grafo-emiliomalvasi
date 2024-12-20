#include<iostream>
#include"Grafo.cpp"
int main(){
  Grafo<int>GrafoM;
  GrafoM.aggiunginodo('Roma');
  GrafoM.aggiunginodo('Milano');
  GrafoM.aggiunginodo('Bari');
  GrafoM.aggiunginodo('Napoli');
  GrafoM.aggiunginodo('Venezia');
  
  GrafoM.aggiungiarco('Roma','Bari' 10);
  GrafoM.aggiungiarco('Napoli','Milano' 20);
  GrafoM.aggiungiarco('Venezia','Roma' 30);
  GrafoM.aggiungiarco('Napoli','Bari' 40);
  
  GrafoM.stampa();
  
  std::cout << "C'e' Roma?", (GrafoM.verificaNodo('Roma')) << std::endl;
  std::cout << "C'e' Milano?", (GrafoM.verificaNodo('Milano')) << std::endl;
  
  std::cout << "C'e'un collegamento tra Venezia e Roma?", (GrafoM.verificaArco('Venezia', 'Roma')) << std::endl;
  std::cout << "C'e'un collegamento tra Milano e Venezia?", (GrafoM.verificaArco('Milano', 'Venezia')) << std::endl;
  
  GrafoM.rimuoviArco('Roma', 'Bari');
  
  GrafoM.rimuoviNodo('Milano');
  
  GrafoM.nodiAdiacenti('Venezia');
  
  int min;
  min = GrafoM.pesominore(10);
  if(arcoMinimo != ){
    std::cout << L' rco con il peso minore e' 10 << arcoMinimo << std :: endl;
  }else{
    std :: cout << "Non ci sono archi con un peso da 10" << std :: endl;
  }
}

