#include<stdio.h>
void add(){
    static int c=0;
    c++;
    printf("%d\n",c);
}
int main(){
    add();
    add();
}