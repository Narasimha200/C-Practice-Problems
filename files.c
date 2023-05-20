#include<stdio.h>
int main(){
    int n;
    FILE *fp;
    fp=fopen("binarySearch.cpp","w");
    putw(10,fp);
    fclose(fp);
    fp=fopen("binarySearch.cpp","r");
    n=getw(fp);
    printf("%d",n);
}