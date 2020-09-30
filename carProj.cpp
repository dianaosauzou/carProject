/**************************************************************/
/*                                                            */
/*   Program to demonstrate the implmentation of a simple     */
/*   linked list of numbers with a delete.								  */
/*                                                            */
/**************************************************************/

#define _CRT_SECURE_NO_WARNINGS 1
#define bool int
#define false 0
#define true (!false)

//Libraries
#include <stdio.h>
#include <stdlib.h>

//Preprocessor Variable
#define SIZE 5

//Stucture template for data part of the linked list
struct data {
	
	char reg[7];
	char makeNmodel[20];
	char colour[10];
	int noPrevOwns;
	bool reserved;
	int reserveAmt;

};

//Stucture template for one node
struct LinearNode {
	struct data *element;
	struct LinearNode *next;
};


// Function prototypes
void addNodes();  //adding nodes to front of the list
void deleteNode(int); // delete a specific node
void viewAllNodes();
bool isEmpty();



// Global Variables
struct LinearNode *list = NULL; //front of list

struct LinearNode *last = NULL; //pointer to last node in list



/**************MAIN FUNCTION*******************/
int main() {
	  //local variable to hold the number in the node which is to
	//be deleted
	char reg0[7];
	
	addNodes();
	viewAllNodes();

	printf("Please eneter the registration number of the car being sold : ");
	scanf("%d", &reg0);
	if (reg0.reservoIS = true) deleteNode(reg0);

	viewAllNodes();

	getchar();
	getchar();
}

/*******************************************/


/**********ADD THREE NODES TO THE LIST******************/
// Each new node is added to the front of the list

void addNodes() {
	int i;
	int aNumber;
	char aReg[7];
	char aMake[10];
	char aColour[10];
	int noOwners;
	char reso[];
	bool reservoIS;
	int reservedAm;

	struct LinearNode *aNode;
	struct data *anElement;

	// add SIZE nodes to the list
	for (i = 0; i < SIZE; i++) {
		printf("Enter the car registartion r %d: ", aReg);
		scanf("%d", &aReg);
		printf("Enter the car make %d: ", aMake);
		scanf("%d", &aMake);
		printf("Enter the car model %d: ", aModel);
		scanf("%d", &aModel);
		printf("Enter the car colour %d: ", aColour);
		scanf("%d", &aColourr);
		printf("Enter the number of previous owners %d: ", noOwners);
		scanf("%d", &noOwners);
		printf("Has the car been reserved yes or no? %d: ", reso);
		scanf("%d", &reso);
		if (reso == yes) 
			reservoIS = true;
		else {
			if (reso == no) reservoIS = false;
			 }
		printf("What is the reservation amount, (0 if unreserved) %d: ", reservedAm);
		scanf("%d", &reservedAm);
		//create space for new data element
		anElement = (struct data *)malloc(sizeof(struct data));

		// create space for new node
		aNode = (struct LinearNode *)malloc(sizeof(struct LinearNode));

		//add aNumber to data node
		anElement->num = aNumber;
		anElement->reg = aReg;
		anElement->makeNmodel = aMake;
		anElement->colour = aColour;
		anElement->noPrevOwns = noOwners;
		anElement->reserved = reservoIS
		anElement->reserveAmt = reservedAm;
		

		if (aNode == NULL)
			printf("Error - no space for the new node\n");
		else { // add data part to the node
			aNode->next = NULL;
			aNode->element = anElement;

			//add node to end of the list
			if (isEmpty())
			{
				list = aNode;
				last = aNode;
			}
			else {
				last->next = aNode;
				last = aNode;
			} //end else
		}//end else
	}//end for
} //end addNodes


void viewAllNodes() {
	struct LinearNode *current;

	if (isEmpty())
		printf("Error - there are no nodes in the list\n");
	else {
		current = list;
		while (current != NULL) {
			printf("Node value is %d\n", current->element->num);
			current = current->next;
		} //end while
	}//end else
} //end viewAllNodes


void deleteNode(char aReg) {
	struct LinearNode *current, *previous;
	bool notFound = true;
	if (aReg.reservoIS=true)deleteNode(char aReg)

	if (isEmpty())
		printf("Error - there are no nodes in the list\n");
	else {
		current = previous = list;

		while (notFound && current != NULL) {
			if (aNumber == current->element->num)
				notFound = false;
			else {
				previous = current;
				current = current->next;
			}//end else
		} //end while

		if (notFound)
			printf("Error - there is not such node with value %d\n", aReg);
		else {
			if (current == list) {
				list = list->next;
				free(current);
			} //end else
			else {
				previous->next = current->next;
				free(current);
			} //end else
			printf("Node with value %d has been deleted\n", aReg);
		}//end else
	}//end else
}// end deleteNode


bool isEmpty() {
	if (list == NULL)
		return true;
	else
		return false;
}
