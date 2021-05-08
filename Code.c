#include <stdio.h>

int avl(int h){
    if(!h)                     // check whether input is correct?
        return 0;
    else if(h==1)              // base condition
        return 2;
    else if(h==2)              // base condition
        return 4;
    else 
        return 1+avl(h-1)+avl(h-2);     // Recursion
}

int main() {
  
    int h;
    
    printf("Enter height of AVL : ");
    scanf("%d",&h);                                                            // Input taken from user
    printf("Minimum number of nodes in AVL of height=%d is %d.",h,avl(h));     // Output number
    
    return 0;
}
