#include <stdio.h>
#include <stdlib.h>

struct node {
    long id;                //id
    char name[256];         //назва книги
    long price;             //ціна
    long pagecount;         //к-сть сторінок
    char language[256];     //мова
    long weight;            //вага
    long year;              //рік
    struct node* nextnode;  //посилання на наступну ноду
};
struct node* firstnode = NULL;
struct node* lastnode = NULL;
long gid = 0;

void display() {
    
    for (struct node* locnode = firstnode;;) {
        printf("%s\n", locnode->name);
        printf("%d\n", locnode->price);
        printf("%d\n", locnode->pagecount);
        printf("%s\n", locnode->language);
        printf("%d\n", locnode->weight);
        printf("%d\n\n", locnode->year);
        if (locnode->nextnode == NULL) {
            break;
        }
        locnode = locnode->nextnode;
    }
}

void writenode(char name[256], long price, long pagecount, char language[255], long weight, long year) {
    lastnode->id = gid++;
    strncpy(lastnode->name, name, sizeof(lastnode->name) - 1);
    lastnode->price = price;
    lastnode->pagecount = pagecount;
    strncpy(lastnode->language, language, sizeof(lastnode->language) - 1);
    lastnode->weight = weight;
    lastnode->year = year;
}

void insert(char name[256], long price, long pagecount, char language[255], long weight, long year) {
    if (firstnode == NULL) {
        firstnode = (struct node*)malloc(sizeof(struct node));
        if (firstnode == NULL) {
            return 0;
        }
        lastnode = firstnode;
        lastnode->nextnode = NULL;
        writenode(name, price, pagecount, language, weight, year);
    }else {
        lastnode->nextnode = (struct node*)malloc(sizeof(struct node));
        lastnode = lastnode->nextnode;
        lastnode->nextnode = NULL;
        writenode(name, price, pagecount, language, weight, year);
    }
   
}


