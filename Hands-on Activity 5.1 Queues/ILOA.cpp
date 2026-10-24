#include <iostream>
#include <queue>

void display(std::queue<char> r);


int main(){

  std::queue<char> q;
  q.push('c');
  q.push('p');
  q.push('e');
  q.push('0');
  q.push('1');
  q.push('0');


  //DISPLAY
  display(q);

//EMPTY

std::cout << "The queue is empty: " << q.empty();
std::cout<< "\n";

//SIZE

std::cout << "Queue size: " << q.size();
std::cout<< "\n";

//FRONT

std::cout << "The front is: " << q.front();
std::cout<< "\n";

//BACK

std::cout << "The back is: " << q.back();
std::cout<< "\n";

//POP

q.pop();

//DISPLAY

display(q);

//PUSH ANOTHER ELEMENT

q.push('N');
q.push('I');

//DISPLAY

display(q);

}

void display(std::queue<char> r){
  //create a copy of the queue
  std::queue<char> c = r;

  while(!c.empty()){
    std::cout<< " " << c.front();
    c.pop();

  }
  std::cout << "\n";

}