#include "solution.h"

int main() {
  DoublyList* list = new DoublyList();
  SortedInsert(list, 2);
  display(list); // 2
  SortedInsert(list, 5);
  display(list); // 2, 5
  SortedInsert(list, 1);
  display(list); // 1, 2, 5  
  SortedInsert(list, 10);
  display(list); // 1, 2, 5, 10  
  SortedInsert(list, 4);
  display(list); // 1, 2, 4, 5, 10  
}