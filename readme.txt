<----- CS201 Project: SuccinctDataStructures -----> 

<----- Team Members ----->
   ---->Nakul Alhawadhi - 2021CSB1111
   ---->Vikalp Dhalwal - 2021CSB1140
   ---->Shobit Juglan - 2021CSB1132

<----- Introduction ----->

<--- Succinct-Data-Structure --->A data structure is called succinct if it uses an amount of space that uses
nearly the theoretical lower wound of space with lower order additive terms, and still supports the desired
operations.
We have implemented three methods for succinct representation of tree :
   ---> Balanced parentheses (BP)
   ---> Depth first unary degree sequence (DFUDS)
   ---> Level-ordered unary degree sequence (LOUDS)

<----- Instructions ----->
   <--- How to run --->
      In the terminal, enter the following commands.
      1. Fistly, "gcc -c tree.c balanced_parentheses.c depth_first_unary_degree_sequence.c LOUDS.c"
      2. Then, "gcc -o run tree.o balanced_parentheses.o depth_first_unary_degree_sequence.o LOUDS.o"
      3. And finally, ".\run"
    
   <--- How to input tree --->
      After running the above commands, the program will start and ask you to enter data of node:
      To understand how to input tree, let's take an example:
      <p align="center">
        <img src="./tree_example.png" />
      </p>
      
      Enter data of node : ***1*** <br />
      Enter number of childrens : ***3***
      
      Add child 1 of node 1 : ***3***<br />
      Enter number of children : ***2***
      
      Add child 1 of node 3 : ***5***<br />
      Enter number of children : ***0***
      
      Add child 2 of node 3 : ***6***<br />
      Enter number of children : ***0***
      
      Add child 2 of node 1 : ***2***<br />
      Enter number of children : ***0***
      
      Add child 3 of node 1 : ***4***<br />
      Enter number of children : ***0***<br />
      
     - ## *Output*<br/>
       Three succinct representation of the tree and specific characterisic of each node like - parent, depth, degree, leftchild, rightchild etc. will be shown.