#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char fich_ext[50];
   char fich_int[3][50];
   char nom2[50];
   char nom[100][50];
   int i=0,j,nb=0,nb_fich=0;
   int note2;
   int note[100];
   char* cara;
   char* caractere;
   FILE* fichier=fopen("correspondance.txt","r");
   if (fichier)
   {
       while(fgets(fich_ext,sizeof(fich_ext),fichier)!=NULL)
       {
           caractere=strchr(fich_ext,'\n');
           if(caractere!=NULL)
                *caractere=' ';
           strcpy(fich_int[nb_fich],fich_ext);
           nb_fich++;
       }
       fclose(fichier);
   }
   FILE* fichier1=fopen(fich_int[0],"r");
   if (fichier1)
   {
       while(fgets(nom2,50,fichier1)!=NULL)
       {
           cara=strchr(nom2,'\n');
           if(cara!=NULL)
                *cara=' ';
           strcpy(nom[nb],nom2);
           nb++;
       }
       fclose(fichier1);
   }
   FILE* fichier3=fopen(fich_int[1],"r");
   if(fichier3)
   {
       while(fscanf(fichier3,"%d",&note2)!=EOF)
       {
           note[i]=note2;
           i++;
       }
       fclose(fichier3);
   }
   FILE* fichier4=fopen(fich_int[2],"w");
   if(fichier4)
   {
       for(i=0;i<64;i++)
            fprintf(fichier4,"_");
        fprintf(fichier4,"\n▓NUM  │        NOM ET PRENOM                             │PTS  ▓");
        fprintf(fichier4,"\n▓_____│__________________________________________________│_____▓");
        for(j=1;j<=nb;j++)
        {
            fprintf(fichier4,"\n▓%d",j);
            if(j<10)
                fprintf(fichier4,"    │");
            else if(j>=10&&j<100)
                fprintf(fichier4,"   │");
            else
                fprintf(fichier4,"  │");
            fprintf(fichier4,"%s",nom[j-1]);
            for(i=0;i<50-strlen(nom[j-1]);i++)
                fprintf(fichier4," ");
            fprintf(fichier4,"│");
            fprintf(fichier4,"%d",note[j-1]);
            if(note[j-1]<10)
                fprintf(fichier4,"    ▓\n");
            else
                fprintf(fichier4,"   ▓\n");
            fprintf(fichier4,"▓_____│__________________________________________________│_____▓");
        }
   }
   return 0;
}
