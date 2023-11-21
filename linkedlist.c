#include <stdio.h> 
#include <stdlib.h>
typedef struct singly{
    int data;
    struct singly *next;
}sll;
sll *start, *neww, *link;
int main(){
    int ch;
    start = NULL;
    do{
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. count\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        
        switch(ch){
            case 1:
				        create();
                break;
            case 2:
				        display();
                break;
            case 3:
				        count();
                break;
            default:
				        count();
                break;
        }
    }while(1);
    void create(){
        char choice = 'y';
        while(choice == 'y' || choice == 'Y'){
            neww = (sll*)malloc(sizeof(sll));
            if(neww == NULL){
                printf("Memory not allocated\n");
                
            }
            printf("Enter data \n");
            scanf("%d", &neww -> data);
            neww -> next = NULL;
            if(start == NULL){
                start = neww;
                link = neww;
            }
            else{
                link -> next = neww;
                link = neww;
            }
            printf("Enter your choice \n");
            choice = getche();
        }
    }
    void display(){
        link = start;
        while(link != NULL){
            printf("%d", link -> data);
            link = link -> next;
        }
    }
    void count(){
        int count;
        link = start;
        while(link != NULL){
            count++;
            link = link -> next;
        }
        printf("Number of nodes are %d", count);
    }
    return 0;
}
