/**************************************************************
* Danyelle Dixson * CS1B MTWTH 2-5:30pm * HW 08
*                 * Due July 10,2016
***************************************************************/
#include"ddhw08.h"

void savenExit(BOOK *&head) {
  ofstream oFile;
  oFile.open("booksdb.txt");

  BOOK *ptr;
  ptr = NULL;
  ptr = head;
  
  while (ptr != NULL) {
    oFile << ptr->isbn   << endl;
    oFile << ptr->author << endl;
    oFile << ptr->title  << endl;
    oFile << endl;
    ptr = ptr->next; 
  }
  ptr = NULL;
  oFile.close();
}
