#include "solution.h"

int main() {
  DoublyList* list = new DoublyList();
  insert(list, 2);
  display(list); // 2
  insert(list, 5);
  display(list); // 2 -> 5
  insert(list, 1);
  display(list); // 1 -> 2 -> 5  
}