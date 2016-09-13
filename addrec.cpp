/**************************************************************
* Danyelle Dixson * CS1B MTWTH 2-5:30pm * HW 08
*                 * Due July 10,2016
***************************************************************/
#include"ddhw08.h"

void addRec(BOOK *&head) {

  BOOK *ptr, *loop;
  ptr = NULL;
  loop = NULL;
  char answer;
  int count = 0;

  ptr = new BookNode;

  if(head == NULL) { 
  
  cin.ignore(1000,'\n');
  cout << "\nPlease enter isbn of book: ";
  getline(cin,ptr->isbn);
  cout << "Please enter the author of the book: ";
  getline(cin,ptr->author);
  cout << "Please enter the title of the book: ";
  getline(cin,ptr->title);

  ptr->next = NULL;
  ptr->prev = head;
  head = ptr;
  }

  cout << "\nWould you like to add another book?(Y/N): ";
  cin  >> answer;
  answer = toupper(answer);
  cin.ignore(1000,'\n');

  do{

    if(answer == 'N') {
      break;
    }
      loop = new BookNode;
      ++count; 
 
      cout << "\nPlease enter isbn of book: ";
      getline(cin,loop->isbn);
      cout << "Please enter the author of the book: ";
      getline(cin,loop->author);
      cout << "Please enter the title of the book: ";
      getline(cin,loop->title);
    
      loop->next = NULL;
      loop->prev = ptr;
      ptr->next = loop;
      ptr = loop;
      loop = NULL;

      cout << "\nWould you like to add another book?(Y/N): ";
      cin  >> answer;
      answer = toupper(answer);
      cin.ignore(1000,'\n');

  }while(answer != 'N');
  
  if(answer == 'Y') {
    for(int i = 0; i < count; ++i){
      delete loop;
    }
  }
  savenExit(head);

 
}
