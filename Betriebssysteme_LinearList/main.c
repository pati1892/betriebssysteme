#include <stdio.h>
#include <stdlib.h>

struct element{
    int value;
	struct element *next;
}typedef Element;

struct list{
	Element *element;
}typedef List;

void printElement(Element *head){
    while(head != NULL){
        printf("%d\n", head->value);
        head = head->next;
    }
}

void printList(List *list){
	Element *head = list->element;
	    while(head != NULL){
        printf("%d\n", head->value);
        head = head->next;
    }
}

Element *add(Element *head, int value){
    while((head->next) != NULL){
        head = head->next;
    }
    Element *element = (Element*)malloc(sizeof(Element));
    element->value = value;
    head->next = element;
    element->next = NULL;
    return element;

}

void insert(List *list, int value){
	Element *save = list->element;
	list->element = (Element *)malloc(sizeof(Element));
	list->element->value = value;
	list->element->next = save;

}

void insertTail(List *list, int value){
	Element *head = list->element;
	while(head->next != NULL){
		head = head->next;
	}
	head->next = (Element *)malloc(sizeof(Element));
	head->next->next = NULL;
	head->next->value = value;
	
}

void insertAscending(List *list, int value){
	Element *head = list->element;
	Element *element = (Element *)malloc(sizeof(Element));
	element->value = value;
	if(head->value > value){
		list->element = element;
		element->next = head;	
	}
	else{
		while(head != NULL){
		if(head->next == NULL || head->next->value > value){
			Element *next = head->next;
			head->next = element;
			element->next = next;
			break;
		}
		head = head->next;
	}
}
}

int listSize(const List *list){
		int i = 0;
		Element *head = list->element;
	    while(head != NULL){
		++i;
       
        head = head->next;
    }
	return i;
}

int contains(const List *list, int value){
	Element *head = list->element;
	int returnValue = 0;
	while(head != NULL){
		if(head->value == value){
			returnValue = 1;
			break;
		}
		head = head->next;
	}
	return returnValue;
}

void freeList(List *list){
	Element *head;
	Element *next = list->element;
	while(next != NULL){
		head = next;
		next = head->next;
		printf("%p\n", head);
		free(head);
	}

}

int main(){

   /*Element *head = (Element*)malloc(sizeof(Element));
    head->value = 1;

    Element *second = (Element*)malloc(sizeof(Element));
    second->value = 2;
    head->next = second;
    second->next = NULL;

    add(head, 3);
    add(head, 4);
    add(head, 5);
    add(head, 6);
    add(head, 7);
    printElement(head);*/
	List list;
	list.element=(Element*)malloc(sizeof(Element));
	list.element->value=1000;
	list.element->next = NULL;
	
	insertAscending(&list, 3);
	insertAscending(&list, 2);
	insertAscending(&list, 6);
	insertAscending(&list, 4);
	insertAscending(&list, 6);
insertAscending(&list, 10);
insertAscending(&list, 100);
insertAscending(&list, 10);
		insertAscending(&list, 0);
	printList(&list);
	printf("Listsize: %d\n", listSize(&list));
	printf("Contains 6: %d\n", contains(&list, 6));
	printf("Contains 10: %d\n", contains(&list, 10));
	freeList(&list);

}

