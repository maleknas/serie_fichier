//ex n°3 :
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
        int i=0;
        while(fgets(ch,100,file)!=NULL){
                while(ch[i]==' '){i++;}
                if(ch[0]==' '){
                for(i;i<strlen(ch);i++){
                    printf("%c",ch[i]);
                }}else{
                if(ch[0]=='/' && ch[1]=='/'){continue;}
               printf("%s",ch);}
        }
        fclose(file);
    }else{printf("error!!!");}
}
