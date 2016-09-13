/**************************************************************
* Danyelle Dixson * CS1B MTWTH 2-5:30pm * HW 08
*                 * Due July 10,2016
***************************************************************/
#include"ddhw08.h"

void showRecs(BOOK *&head) {
  BOOK *ptr;
  ptr = NULL;
  ptr = head;
  
  if(ptr == NULL) {
    cout << "\nThis catalog is empty.\n";
  } 

  while(ptr != NULL) {
    cout << "\nISBN: " << ptr->isbn   << endl;
    cout << "Author: " << ptr->author << endl;
    cout << "Title: "  << ptr->title  << endl;
    cout << endl;
    ptr = ptr->next; 
  }
  ptr = NULL;
}
