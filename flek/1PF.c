#include "flek.h"

//1PF
void NOM1PF(char nomCor[100])
{
    int i=1;
    char nom[100];
    const char* classe1PF=NULL;
    if(classe2==1)
    {
        classe1PF="1PF\\1PF_Langue\\1PF_Langue_nom.txt";
    }
    else if(classe2==2)
    {
        classe1PF="1PF\\1PF_Economique\\1PF_Economique_nom.txt";
    }
    else if(classe2==3)
    {
        classe1PF="1PF\\1PF_Science 1\\1PF_Science 1_nom.txt";
    }
    else if(classe2==4)
    {
        classe1PF="1PF\\1PF_Science 2\\1PF_Science 2_nom.txt";
    }
    else if(classe2==5)
    {
        classe1PF="1PF\\1PF_Science 3\\1PF_Science 3_nom.txt";
    }
    FILE* fich=fopen(classe1PF,"r");
    if (fich!=NULL)
    {
        while(fgets(nom,100,fich)!=NULL)
        {
            nom[strlen(nom)-1]=' ';
            if(i==num)
                strcpy(nomCor,nom);
            i++;
        }
    }
    fclose(fich);
}
void note1PF(char nomCor[100])
{
    int acc=0,i=1,ligne=1,acc2=0;
    int note[100];
    const char* classe1PF=NULL;
    if(classe2==1)
    {
        classe1PF="1PF\\1PF_Langue\\1PF_Langue_note.txt";
    }
    else if(classe2==2)
    {
        classe1PF="1PF\\1PF_Economique\\1PF_Economique_note.txt";
    }
    else if(classe2==3)
    {
        classe1PF="1PF\\1PF_Science 1\\1PF_Science 1_note.txt";
    }
    else if(classe2==4)
    {
        classe1PF="1PF\\1PF_Science 2\\1PF_Science 2_note.txt";
    }
    else if(classe2==5)
    {
        classe1PF="1PF\\1PF_Science 3\\1PF_Science 3_note.txt";
    }
    FILE* fichier=fopen(classe1PF,"r");
    if(fichier!=NULL)
    {
        while(fscanf(fichier,"%d",&acc)!=EOF)
        {

            note[i]=acc;
            i++;
        }
        acc=0;
         if(num>i-1||num<=0)
        {
            printf("\n\n\t\tVous avez entre un numero qui n'existe pas!.................");
            logo();
            exit(0);
        }
        fichier=fopen(classe1PF,"r");

        if(fichier!=NULL)
        {
            while(fscanf(fichier,"%d",&acc)!=EOF&&ligne<=num)
            {
                if(ligne==num)
                {

                    acc2=acc;
                }

                ligne++;
            }
        }
    }
    fclose(fichier);
    acc=acc2-retr;
    note[num]=acc;
    if(note[num]<0)
        note[num]=0;
    fichier=fopen(classe1PF,"w");
    if(fichier!=NULL)
    {
        int el;
        for(el=1; el<i; el++)
        {
            fprintf(fichier,"%d\n",note[el]);

        }
    }
    fclose(fichier);
    NOM1PF(nomCor);
    system("tableau.exe");
    motif1PF();
}

void motif1PF()
{
    int i;
    char date[30];
    char dateActu[30];
    DateCourante(dateActu);

    char *cara[2]= {0};
    const char* date1PF=NULL;
    const char* classe1PF=NULL;
    if(classe2==1)
    {
        classe1PF="1PF\\1PF_Langue\\1PF_Langue_motif.txt";
        date1PF="1PF\\1PF_Langue\\date.txt";
    }
    else if(classe2==2)
    {
        classe1PF="1PF\\1PF_Economique\\1PF_Economique_motif.txt";
        date1PF="1PF\\1PF_Economique\\date.txt";
    }
    else if(classe2==3)
    {
        classe1PF="1PF\\1PF_Science 1\\1PF_Science 1_motif.txt";
        date1PF="1PF\\1PF_Science 1\\date.txt";
    }
    else if(classe2==4)
    {
        classe1PF="1PF\\1PF_Science 2\\1PF_Science 2_motif.txt";
        date1PF="1PF\\1PF_Science 2\\date.txt";
    }
    else if(classe2==5)
    {
        classe1PF="1PF\\1PF_Science 3\\1PF_Science 3_motif.txt";
        date1PF="1PF\\1PF_Science 3\\date.txt";
    }
    printf("\t³\n\t³DONNER LE MOTIF:");
    fflush(stdin);
    gets(motif);
    FILE* fichDate=fopen(date1PF,"r");
    if(fichDate)
    {
        fscanf(fichDate,"%s",date);
        fclose(fichDate);
    }
    if(date!=dateActu)
    {
        fichDate=fopen(date1PF,"w");
        if(fichDate)
        {
            fprintf(fichDate,"%s",dateActu);
            fclose(fichDate);
        }
    }

    FILE* fichier=fopen(classe1PF,"a");
    if (fichier)
    {
        if(strcmp(date,dateActu)!=0)
            fprintf(fichier,"\n}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}|=~~>%s<~~=|{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{ \n\n",dateActu);
        cara[0]=strchr(motif,'\0');
        if(cara!=NULL)
        {
            *cara[0]='\n';
        }
        for(i=0; i<strlen(motif); i++)
        {
            cara[1]=&motif[i];
            if(*cara[1]=='/')
            {
                *cara[1]='\n';
            }
        }
        fprintf(fichier,"\t\t\t\t|-->****  N°%d  ****<--|\n",num);
        fprintf(fichier,"-------------------------------------------------------------------------------------\n");
        fputs(motif,fichier);
        fprintf(fichier,"=====================================================================================\n");
        fclose(fichier);
    }
}
