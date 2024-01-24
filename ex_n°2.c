//ex n°2 : affiche fichier :
#include<stdio.h>
#include<stdlib.h>
void main(){
    //initialisation du nom de fichier :
    char noun[100];
    printf("donner le nom du fichier 'file.txt' : ");
    gets(noun);
    //affichage du contenue du fichier :
    FILE* file=fopen(noun,"r");
    if(file!=NULL){
        char ch[100];
        if(fgets(ch,100,file)!=NULL){
            printf("%S",ch);
        }
        fclose(file);
    }else{printf("error!!!");}
}
