/**************************************************************
* Danyelle Dixson * CS1B MTWTH 2-5:30pm * HW 08
*                 * Due July 10,2016
***************************************************************/
#include"ddhw08.h"

void showRec(BOOK *&head) {
  BOOK *ptr;
  ptr = NULL;
  ptr = head;
  string searchItem;
  bool found;
  found = false;

  cin.ignore(1000,'\n');
  cout << "Please enter the title of the book you would like to display: ";
  getline(cin,searchItem);

  while(ptr != NULL) {

    if(searchItem == ptr->title){
      cout << "\nISBN: "   << ptr->isbn   << endl;
      cout << "Author: " << ptr->author << endl;
      cout << "Title: "  << ptr->title  << endl;
      cout << endl;
      found = true;
    }
      ptr = ptr->next;
      
  }
  if(!found) {
    cout << "\nNo results are found.\n";
  }
  ptr = NULL;
}
