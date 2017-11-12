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

/*......................................v2.1..............................................*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct database
{
    char name1[20],name2[20],name3[20],name4[20],name5[20],name6[20],name7[20];
    char address[50];
    char tel[10];
    int numocc;
   
} database;
void create(database *entry1,database *entry2,database *entry3,database *entry4,database *entry5,database *entry6,database *entry7,database *entry8,database *entry9,database *entry10)
{   
    /*Use entryX->nameX to access members of structure here*/
    strcpy(entry1->name1,"Eshwar");
    strcpy(entry1->name2,"Lalitha");
    strcpy(entry1->name3,"Lakshmi");
    strcpy(entry1->address,"1500 20th main rd");
    strcpy(entry1->tel,"9971271232");
    
    strcpy(entry2->name1,"Mahesh");
    strcpy(entry2->name2,"Saroja");
    strcpy(entry2->name3,"Bhargavi");
    strcpy(entry2->name4,"Ayush");
    strcpy(entry2->address,"1501 20th main rd");
    strcpy(entry2->tel,"22234442");
    
    strcpy(entry3->name1,"Pandu");
    strcpy(entry3->name2,"Rashmi");
    strcpy(entry3->name3,"Bharat");
    strcpy(entry3->name4,"Nandan")
    
     
}

int main()
{
 database entry1,entry2,entry3,entry4,entry5,entry6,entry7,entry8,entry9,entry10;
 create(&entry1,&entry2,&entry3,&entry4,&entry5,&entry6,&entry7,&entry8,&entry9,&entry10);
/*Use entryX.nameX to access members of structure here*/
entry1.numocc=3;
entry2.numocc=4;
entry3.numocc=4;
entry4.numocc=2;
entry5.numocc=1;
entry6.numocc=3;
entry7.numocc=5;
entry8.numocc=2;
entry9.numocc=2;
entry10.numocc=3;
}
/*......................................................................................*/

