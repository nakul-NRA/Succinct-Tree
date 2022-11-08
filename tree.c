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
