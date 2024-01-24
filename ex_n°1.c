//ex n°1 : affiche fichier :
#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE* file=fopen("file.txt","r");
    if(file!=NULL){
        char ch[100];
        if(fgets(ch,100,file)!=NULL){
            printf("%s",ch);
        }
        fclose(file);
    }else{printf("error!!!");}
}
