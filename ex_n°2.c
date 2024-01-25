//ex n°2 : affiche fichier :
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    //initialisation du nom de fichier :
    char noun[100];
    printf("donner le nom du fichier 'file.txt' : ");
    gets(noun);
    printf("le noun du fichier est : %s\n",noun);
    strcat(noun,".txt");
    printf("le noun du fichier  est (apres mod): %s\n",noun);
    //affichage du contenue du fichier :
    FILE* file=fopen(noun,"r");
    if(file!=NULL){
        char ch[100];
        while(fgets(ch,100,file)!=NULL){
            printf("%s",ch);
        }
        fclose(file);
    }else{printf("error!!!");}
}
