## Question is Find the minimum number of nodes in heght of h AVL Tree.

### Approach : Recursive equation.
### Method : kind of Fibonacci Series.

Here, I  use recursion for solution and follow below procedure.

-> In order to find minimumm node at height h, First we have to consider structure of AVL Tree.

### for a particular node n in AVL tree,
### height of that node n is = 1 + max(height_of_left_child, height_of_right_child). 

base condition for this recurrence relation : (h = 1 -->  n = 2) || (h = 2 --> n = 4)
