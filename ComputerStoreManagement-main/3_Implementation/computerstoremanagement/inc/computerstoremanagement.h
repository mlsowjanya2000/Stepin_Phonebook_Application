#ifndef COMPUTERSTOREMANAGEMENT_H_INCLUDED
#define COMPUTERSTOREMANAGEMENT_H_INCLUDED

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include"computerstoremanagement.h"
#define ERROR puts("\n=================\n|\a   ERROR!	|\n=================")
//display tags functions
void TITLE();
int comptag(int);
void CUSTOMERPANEL();
void ADMINPANEL();
int pcpur(int);
//PC Purchase function
int PCPurchase();
//Admin database
void Adminpermit();


//Password verifier
int Access();
//Adminpermit functions
void Add();
void Modify();
void Delete();
void Search();
void View();
int enterchoice(int );


#endif // COMPUTERSTOREMANAGEMENT_H_INCLUDED
