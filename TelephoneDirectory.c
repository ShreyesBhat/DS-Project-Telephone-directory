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
