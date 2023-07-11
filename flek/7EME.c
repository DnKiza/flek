#include "flek.h"

//7EME
void NOM7(char nomCor[100])
{
    int i=1;
    char nom[100];
    const char* classe7=NULL;
    if(ch=='A'||ch=='a')
    {
        classe7="7EME\\7EME_A\\7EME_A_nom.txt";
    }
    else if(ch=='B'||ch=='b')
    {
        classe7="7EME\\7EME_B\\7EME_B_nom.txt";
    }
    else if(ch=='C'||ch=='c')
    {
        classe7="7EME\\7EME_C\\7EME_C_nom.txt";
    }
    FILE* fich=fopen(classe7,"r");
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
void note7(char nomCor[100])
{
    const char* classe7=NULL;
    if(ch=='A'||ch=='a')
    {
        classe7="7EME\\7EME_A\\7EME_A_note.txt";
    }
    else if(ch=='B'||ch=='b')
    {
        classe7="7EME\\7EME_B\\7EME_B_note.txt";
    }
    else if(ch=='C'||ch=='c')
    {
        classe7="7EME\\7EME_C\\7EME_C_note.txt";
    }
    int acc=0,i=1,ligne=1,acc2=0;
    int note[100];
    FILE* fichier=fopen(classe7,"r");
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
        fichier=fopen(classe7,"r");

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
    fichier=fopen(classe7,"w");
    if(fichier!=NULL)
    {
        int el;
        for(el=1; el<i; el++)
        {
            fprintf(fichier,"%d\n",note[el]);
        }
    }
    fclose(fichier);
    NOM7(nomCor);
    system("tableau.exe");
    motif7();
}

void motif7()
{
    int i;
    char date[30];
    char dateActu[30];
    DateCourante(dateActu);

    char *cara[2]= {0};
    const char* classe7=NULL;
    const char* date7=NULL;
    if(ch=='A'||ch=='a')
    {
        classe7="7EME\\7EME_A\\7EME_A_motif.txt";
        date7="7EME\\7EME_A\\date.txt";
    }
    else if(ch=='B'||ch=='b')
    {
        classe7="7EME\\7EME_B\\7EME_B_motif.txt";
        date7="7EME\\7EME_B\\date.txt";
    }
    else if(ch=='C'||ch=='c')
    {
        classe7="7EME\\7EME_C\\7EME_C_motif.txt";
        date7="7EME\\7EME_C\\date.txt";
    }
    printf("\t³\n\t³DONNER LE MOTIF:");
    fflush(stdin);
    gets(motif);
    FILE* fichDate=fopen(date7,"r");
    if(fichDate)
    {
        fscanf(fichDate,"%s",date);
        fclose(fichDate);
    }
    if(date!=dateActu)
    {
        fichDate=fopen(date7,"w");
        if(fichDate)
        {
            fprintf(fichDate,"%s",dateActu);
            fclose(fichDate);
        }
    }
    FILE* fichier=fopen(classe7,"a");
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
