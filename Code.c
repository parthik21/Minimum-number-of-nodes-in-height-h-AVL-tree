#include <stdio.h>

int avl(int h){
    if(!h)
        return 0;
    else if(h==1)
        return 2;
    else if(h==2)
        return 4;
    else 
        return 1+avl(h-1)+avl(h-2);
}

int main() {
  
    int h;
    
    printf("Enter height of AVL : ");
    scanf("%d",&h);
    printf("Minimum number of nodes in AVL of height=%d is %d.",h,avl(h));
    
    return 0;
}
