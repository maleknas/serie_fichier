//ex n°6 :
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int find(char ch[]);
void main(){
    //demande du nom de ficher :
    char noun[100];
    printf("donneer le nom du fichier ");
    scanf("%s",&noun);
    //ajout de '.txt':
    strcat(noun,".txt");
    printf("le nom apres mod est %s",noun);
    //creation du fichier et ecriture :
    FILE *file=fopen(noun,'w');{
    if(file==NULL){printf("error!!!");}
    char ch[1000];
    printf("donner une chaine ");
    gets(ch);
    while(1){
        fprintf(file,ch);
    }}
    fclose(file);
}
int find(char ch[])
{
    for(int i=0;i<strlen(ch);i++){
        if(ch[i]=='#'){
            return 1 ;
        }else{return 0;}
    }
}
