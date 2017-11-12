/*.................................Version 1.................................................*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
    char n[20] = " ";
} names;
typedef struct 
{ 
    names name[4];
    long int tel;
    int numocc; 
} entry;
entry e[10];
void create()
{
     strcpy(e[0].name[0].n, "Mahesh");
     e[0].tel=9722148381; if(!e[0].name[2].n) puts(e[0].name[0].n);
}
int main()
{
    create();
    
    return 0;
}
/*..........................................................................................*/
/*...........................................version 2.......................................*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct database
{
    char name1[20],name2[20],name3[20],name4[20],name5[20],name6[20],name7[20];
    char address[50];
    long int tel;
    
} database;
void create(database *entry1,database *entry2,database *entry3,database *entry4,database *entry5,database *entry6,database *entry7,database *entry8,database *entry9,database *entry10)
{   
    /*Use entryX->nameX to access members of structure here*/
    strcpy(entry1->name1,"Eshwar");
    strcpy(entry1->name2,"Ram");
    strcpy(entry1->name3,"Lalitha");
     
}
int main()
{
 database entry1,entry2,entry3,entry4,entry5,entry6,entry7,entry8,entry9,entry10;
 create(&entry1,&entry2,&entry3,&entry4,&entry5,&entry6,&entry7,&entry8,&entry9,&entry10);
/*Use entryX.nameX to access members of structure here*/ 
puts(entry1.name3);
}
/*Working, but if we print name4 or any null value it gives runtime error*/

