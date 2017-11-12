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
/*.........................................Version 3....................................*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    char name[20];
    char phno[10];
    char address[50];
    int numocc;
} database;
database entry[20]={{"Ramesh","9722344431","1197 2nd cross",4},
                    {"Eshwar","9881233421","1198 2nd cross",5},
                    {"Mahesh","9552144313","1210 2nd cross",3},
                    {"Jonathan","8801213443","1400 3rd cross", 4},
                    {"Jagadeesh","8047589923","1405 3rd cross",2},
                    {"Adithya","7019045564","1521 10th cross",5},
                    {"Santhosh","9008887912","1622 15th main rd",3},
                    {"Mridula","9900288842","1650 15th main rd",1},
                    {"Ashwin","9730012351","1811 18th main rd",5},
                    {"Priyanka","7719923193","2121 23rd cross",2}
                
};
void addrecord()
{
    static int c=1; 
    printf("Enter name of the owner of the house\n");
    gets(entry[9+c].name);
    printf("Enter their telephone number (10 digits)\n");
    gets(entry[9+c].phno);
    printf("Enter their full address\n");
    gets(entry[9+c].address);
    printf("Enter total number of occupants of the house\n");
    scanf("%d",&entry[9+c].numocc);
    ++c;
    printf("Record added successfully\nUpdated database is\n");
    //call display function
}
int main()
{
    addrecord();
    return 0;
}
/*.....................................................End of version 3......................................................*/

