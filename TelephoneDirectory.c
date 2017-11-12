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
/*.............................................version 3.1......................................../
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
static int c=10;
typedef struct
{
    char name[20];
    char phno[10];
    int hno;
    int numocc;
} database;
database entry[20]={{"Ramesh","9722344431",1197,4},
                    {"Eshwar","9881233421",1198,5},
                    {"Mahesh","9552144313",1210,3},
                    {"Jonathan","8801213443",1400, 4},
                    {"Jagadeesh","8047589923",1405,2},
                    {"Adithya","7019045564",1521,5},
                    {"Santhosh","9008887912",1622,3},
                    {"Mridula","9900288842",1650,1},
                    {"Ashwin","9730012351",1811,5},
                    {"Priyanka","7719923193",2121,2}
                
};
void addrecord()
{
    printf("Enter name of the owner of the house\n");
    gets(entry[c].name);
    printf("Enter their telephone number (10 digits)\n");
    gets(entry[c].phno);
    printf("Enter their house number\n");
    scanf("%d",&entry[c].hno);
    printf("Enter total number of occupants of the house\n");
    scanf("%d",&entry[c].numocc);
    ++c;
    printf("Record added successfully\n");
    //call display function
}
int main()
{
    addrecord();
    addrecord(); puts(entry[11].name); printf("%d",entry[11].numocc);
    return 0;
}

/*...................................................end of v3.1..................................*/
/*...................Final Code.......................*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
    char s[30];
    char num[12];
    char houseno[5];
    int n;
}house;
house a[20]=       {{"Ramesh","972234990","1197",4},
                    {"Eshwar","9881238912","1198",5},
                    {"Mahesh","9552141221","1210",3},
                    {"Jonathan","8801214534","1400", 4},
                    {"Jagadeesh","8047586567","1405",2},
                    {"Adithya","7019043256","1521",5},
                    {"Santhosh","9008887412","1622",3},
                    {"Mridula","9900289890","1650",1},
                    {"Ashwin","9730016789","1811",5},
                    {"Priyanka","7719921278","2121",2}

};
int i=10;
void add()
{
    printf("Enter house number\n");
    scanf("%s",a[i].houseno);
    printf("Enter the number of residents\n");
    scanf("%d",&a[i].n);
    printf("Enter the name of Owner\n");
    scanf("%s",a[i].s);
    printf("Enter the mobile number\n");
    scanf("%s",a[i].num);
    ++i;
}
void display()
{
    int z;
    printf("HOUSE NUMBER\t     NAME       \t\t          MOBILE NUMBER\t\t     NUMBER OF OCCUPANTS\n");
    for(z=0;z<i;z++)
    {
        printf("    %s     \t     %s         \t\t          %s\t\t            %d\n",a[z].houseno,a[z].s,a[z].num,a[z].n);
    }
}
void Delete()
{
    int ch,y,z,flag=0;
    char keyname[50],keymobilenum[10],keyhousenum[5];
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
               flag=0;
               printf("Enter the full name of resident\n");
               scanf("%s",keyname);
               for(z=0;z<i;z++)
               {
                if(!strcmp(a[z].s,keyname))
                {
                flag=1;
                break;
                }
               }
               if(flag)
               {
                strcpy(a[z].s,"NULL");
                strcpy(a[z].num,"NULL");
                printf("RECORD DELETED\n");
                --i;
               }
               else
               printf("Person not found in the locality\n");
               break;

               case 2:flag=0;
                printf("Enter the house number\n");
                scanf("%s",keyhousenum);
                for(z=0;z<i;z++)
                {
                    if(!strcmp(a[z].houseno,keyhousenum))
                {
                flag=1;
                break;
                }
                }
                if(flag)
                {
                strcpy(a[z].s,"NULL");
                strcpy(a[z].num,"NULL");
                printf("RECORD DELETED\n");
                --i;
                }
                else
                printf("Entered house number doesn't exist in the locality\n");
                break;
                case 3:
                flag=0;
                printf("Enter the phone number\n");
                scanf("%s",keymobilenum);
                for(z=0;z<i;z++)
                {
                    if(!strcmp(a[z].num,keymobilenum))
                {
                flag=1;
                break;
                }
                }
                if(flag)
                {
                strcpy(a[z].s,"NULL");
                strcpy(a[z].num,"NULL");
                printf("RECORD DELETED\n");
                --i;
                }
                else
                printf("Entered mobile number doesn't exist in the locality\n");
                break;
                default:printf("Invalid Entry");
    }

}
void modify()
{
     int ch,y,z,flag=0;
    char keyname[50],keymobilenum[12],keyhousenum[5];
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:

               printf("Enter the old name of owner\n");
               scanf("%s",keyname);
               for(z=0;z<i;z++)
               {
                if(!strcmp(a[z].s,keyname))
                {
               flag=1;
               break;
                }
               }
               if(flag)
               {
                printf("Enter the new name of owner\n");
                scanf("%s",a[z].s);
                printf("RECORD SUCCESSFULLY CHANGED\n");
               }
               else
               printf("Person not found in the locality\n");
               break;
               case 2:
                printf("Enter the old house number\n");
                scanf("%s",keyhousenum);
                for(z=0;z<i;z++)
                {
                    if(!strcmp(a[z].houseno,keyhousenum))
                {
                flag=1;
                break;
                }
                }
                if(flag)
                {
                printf("Enter the new house number\n");
                scanf("%s",a[z].houseno);
                printf("RECORD SUCCESSFULLY CHANGED\n");
                }
                else
                printf("Entered house number doesn't exist in the locality\n");
                break;
                case 3:
                printf("Enter the old phone number\n");
                scanf("%s",keymobilenum);
                for(z=0;z<i;z++)
                {
                    if(!strcmp(a[z].num,keymobilenum))
                {
                flag=1;
                break;
                }

                }
                if(flag)
                {
                     printf("Enter the new mobile number\n");
                scanf("%s",a[z].num);
                printf("RECORD SUCCESSFULLY CHANGED\n");
                }
                else
                printf("Entered mobile number doesn't exist in the locality\n");
                break;
                default:printf("Invalid Entry");
    }
}
void search1()
{
    int y,z,flag=0;
    char keyname[50];
    printf("Enter the full name of resident\n");
               scanf("%s",keyname);
               for(z=0;z<i;z++)
               {

                if(!strcmp(a[z].s,keyname))
                {
                    flag=1;
                    break;
                }

               }
               if(flag)
               printf("%s\t%s\t%s\t\n",a[z].houseno,a[z].s,a[z].num);
               else
               printf("Person not found in the locality\n");
}
void search2()
{
    int y,z,c,d,flag=0;
    char keyhousenum[5];
    printf("Enter the house number\n");
                scanf("%s",keyhousenum);
                for(z=0;z<i;z++)
                {
                    if(!strcmp(a[z].houseno,keyhousenum))
                {
                    flag=1;
                    break;
                }
                }
                if(flag)
                {
                     printf("Entered House number exists in the locality\nThe details of the house are\n");
                    for(c=z;c<=z;c++)
                    {
                     printf("    %s     \t     %s  \t\t          %s\n",a[c].houseno,a[c].s,a[c].num);
                    }
                }
                else
                printf("Entered house number doesn't exist in the locality\n");
}
void search3()
{
    int y,z,flag=0;
    char keymobilenum[10];
    printf("Enter the phone number\n");
                scanf("%s",keymobilenum);
                for(z=0;z<i;z++)
                {
                    if(!strcmp(a[z].num,keymobilenum))
                {
                    flag=1;
                    break;
                }

                }
                if(flag)
                {
                    printf("Entered mobile number exists in the locality\nThe details are:\n");
                    printf("%s\t%s\t%s\t\n",a[z].houseno,a[z].s,a[z].num);
                }
                else
                printf("Entered mobile number doesn't exist in the locality\n");
}
void main()
{
    int ch,choice;
printf("WELCOME TO TELEPHONE DIRECTORY\n");
do
{
printf("Menu\n1.Add a new entry\n2.Delete any old entry\n3.Modify any old entry\n4.Search any old entry\n5.Display entire Telephone Directory\n6.Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
    case 1:add();break;
    case 2:printf("1.Delete by name\n2.Delete by house number\n3.Delete by mobile number\n");
           printf("Enter your choice\n");
           Delete();break;
    case 3:printf("1.Modify name\n2.Modify house number\n3.Modify mobile number\n");
           printf("Enter your choice\n");
           modify();break;
    case 4:printf("1.Search by name\n2.Search by house number\n3.Search by mobile number\n");
           printf("Enter your choice");
           scanf("%d",&choice);
           if(choice==1)
           {search1();break;}
           else if(choice==2)
           {search2();break;}
           else if(choice==3)
           {search3();break;}
           else
           printf("Invalid input");
           break;
    case 5:display();break;
    case 6:exit(0);
}
}while(ch!=6);
}
/*.............................................*/

