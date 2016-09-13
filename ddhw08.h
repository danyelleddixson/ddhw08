/**************************************************************
* Danyelle Dixson * CS1B MTWTH 2-5:30pm * HW 08
*                 * Due July 10,2016
***************************************************************/
#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

typedef struct BookNode BOOK;

struct BookNode {
  string isbn;
  string author;
  string title;
  BOOK *next;
  BOOK *prev;
};

  int  menu(int choice);
  void readRec(BOOK *&head);
  void addRec(BOOK *&head);
  void delRec(BOOK *&head);
  void showRec(BOOK *&head);
  void showRecs(BOOK *&head);
  void savenExit(BOOK *&head);
  void delptr(BOOK *&head);
