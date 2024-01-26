//ex n°5 :
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
    //comptage des lignes et longueur de fichier:
    char ch[1000];int nm=0,nl=0;
    FILE* file=fopen(noun,"r");
    if(file!=NULL){
        while(fgets(ch,100,file)!=NULL){
        //comptage des lignes :
        nl++;
        //comptage de longueur :
        nm=strlen(ch);}
        fclose(file);
        printf("le nombre de ligne est : %d\n",nl);
        printf("le longueur du fichier est  : %d\n",nm);
    }else{printf("error!!!");}
}
