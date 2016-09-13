/**************************************************************
* Danyelle Dixson * CS1B MTWTH 2-5:30pm * HW 08
*                 * Due July 10,2016
***************************************************************/
#include "ddhw08.h"

int menu(int choice) {
  cout << "\nBook Catalog Menu:"
       << "\n1. Add a record"
       << "\n2. Delete a record" 
       << "\n3. Display a record"
       << "\n4. Display all records"
       << "\n5. Save and exit"
       << "\nEnter your choice: ";
  while(!(cin >> choice)){
       cout << "\nSorry invalid entry. Please enter a number 1 to 5. Choice: ";
       cin.clear();
       cin.ignore(1000,'\n');  
  }

  if(choice < 1 || choice > 5){
    cout << "\n\nSorry the number you entered is not part of the menu. Please try again.\n\n";
  }
  return choice;
}

