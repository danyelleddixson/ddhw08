/**************************************************************
* Danyelle Dixson * CS1B MTWTH 2-5:30pm * HW 08
*                 * Due July 10,2016
***************************************************************/
#include"ddhw08.h"

void delRec(BOOK *&head) {

  BookNode *delptr, *prev;
  delptr = NULL;
  prev = NULL;
  delptr = head;
  
  string searchItem;
  bool found;
  found = false;
  
  cin.ignore(1000,'\n');
  cout << "\nPlease enter the title of book you would like to delete: ";
  getline(cin,searchItem);

  while(!found && delptr != NULL) {

    if(searchItem == delptr->title) {
      found = true;
       
    }else{
      prev = delptr;
      delptr = delptr->next;
    }
  } 
  
  if(!found) {
    cout << "\nNo results are found.\n";

  }else{
 // Node is the only node in the list.
     if(delptr->next == NULL && prev == NULL){
       head = NULL;
     }
 // Node is at end of the list.
     else if(delptr->next == NULL){   
      prev->next = NULL;
      prev->prev = delptr->prev;
      delptr = NULL;
    }

 // Node is at the beginning of the list.
  else if(prev == NULL){
     head = delptr->next;
     delptr->next = NULL; 
     delptr->prev = NULL;

 // Else Statement: Node is in the middle.  
    }else{
      prev->next = delptr->next;
      prev->prev = delptr->prev;
      delptr->next = NULL;
      delptr->prev = NULL;
    }
  }
  savenExit(head);
}
