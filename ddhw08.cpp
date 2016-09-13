/**************************************************************
* Danyelle Dixson * CS1B MTWTH 2-5:30pm * HW 08
*                 * Due July 10,2016
***************************************************************/
#include "ddhw08.h"

int main() { 

  BOOK *head;
  head = NULL;
  int choice;

  do{
    choice = menu(choice);
    switch(choice) {
  
      case 1 : addRec(head);
      break;
      case 2 : delRec(head);
      break;
      case 3 : showRec(head);
      break;
      case 4 : showRecs(head);
      break;
      case 5 :delptr(head);
      break;
    }
  }while(choice != 5);
   

  return 0;
}
