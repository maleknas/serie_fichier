//ex n°4 :
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
    //affichage de fichier sans repet d'espace :
    char ch[1000];
    FILE* file=fopen(noun,"r");
    if(file!=NULL){
        while(fgets(ch,100,file)!=NULL){
                for(int i=0;i<strlen(ch);i++){
                    if(ch[i]==' ' && ch[i+1]==' ')
                    {continue;}
                    else{printf("%c",ch[i]);}}
        }
        fclose(file);
    }else{printf("error!!!");}
}
