# include <stdio.h>
# include <stdlib.h>
# include "definitions.h"

# include "balanced_parentheses.h"
# include "depth_first_unary_degree_sequence.h"
# include "LOUDS.h"

int number_of_nodes;

// for inserting the tree from user
void addNode(tree ** k)
{
    *k = (tree *)malloc(sizeof(tree));
    int d,t;

    printf("Enter data of Node : ");
    scanf("%d",&d);
    (*k)->data=d;
    number_of_nodes++;

    printf("Enter number of children : ");
    scanf("%d",&t);

    if(t>0)
    {
        (*k)->children = (tree**)malloc(t*(sizeof(tree*)));
    }
    (*k)->number_of_children=t;

    for(int i=0;i<t;i++)
    {
        printf("\nAdd child %d of Node %d:\n",i+1,(*k)->data);
        addNode(&((*k)->children[i]));
    }
}


int main()
{
    number_of_nodes = 0;
    tree * root = NULL;
    printf("\nTree starting with Root Node.\n");
    addNode(&root);

    printf("\n--------------------------------------------------\n\n");
    printf("NAME : VIKALP DHALWAL\nENTRY NUMBER : 2021CSB1140\n\n");
    Balanced_Parentheses(&root, number_of_nodes);

    printf("\n--------------------------------------------------\n\n");
    printf("NAME : SHOBHIT JUGLAN\nENTRY NUMBER : 2021CSB1133\n\n");
    DFUDS(&root, number_of_nodes);

    printf("\n--------------------------------------------------\n\n");
    printf("NAME : NAKUL ALAWADHI\nENTRY NUMBER : 2021CSB1111\n\n");
    LOUDS_print(root, number_of_nodes);

    printf("\n--------------------------------------------------\n");

    return 0;
}
