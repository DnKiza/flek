#include "flek.h"

//3PF
void NOM3PF(char nomCor[100])
{
    int i=1;
    char nom[100];
    const char* classe3PF=NULL;
    if(classe2==1)
    {
        classe3PF="3PF\\3PF_Langue\\3PF_Langue_nom.txt";
    }
    else if(classe2==2)
    {
        classe3PF="3PF\\3PF_Economique\\3PF_Economique_nom.txt";
    }
    else if(classe2==3)
    {
        classe3PF="3PF\\3PF_MPT\\3PF_MPT_nom.txt";
    }
    else if(classe2==4)
    {
        classe3PF="3PF\\3PF_BCST 1\\3PF_BCST 1_nom.txt";
    }
    else if(classe2==5)
    {
        classe3PF="3PF\\3PF_BCST 2\\3PF_BCST 2_nom.txt";
    }
    FILE* fich=fopen(classe3PF,"r");
    if (fich!=NULL)
    {
        while(fgets(nom,100,fich)!=NULL)
        {
            nom[strlen(nom)-1]=' ';      //pour qu'il y est un blanc souligne apres la saisie du nom
            if(i==num)
                strcpy(nomCor,nom);
            i++;
        }
    }
    fclose(fich);
}
void note3PF(char nomCor[100])
{
    int acc=0,i=1,ligne=1,acc2=0;
    int note[100];
    const char* classe3PF=NULL;
    if(classe2==1)
    {
        classe3PF="3PF\\3PF_Langue\\3PF_Langue_note.txt";
    }
    else if(classe2==2)
    {
        classe3PF="3PF\\3PF_Economique\\3PF_Economique_note.txt";
    }
    else if(classe2==3)
    {
        classe3PF="3PF\\3PF_MPT\\3PF_MPT_note.txt";
    }
    else if(classe2==4)
    {
        classe3PF="3PF\\3PF_BCST 1\\3PF_BCST 1_note.txt";
    }
    else if(classe2==5)
    {
        classe3PF="3PF\\3PF_BCST 2\\3PF_BCST 2_note.txt";
    }
    FILE* fichier=fopen(classe3PF,"r");
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
        fichier=fopen(classe3PF,"r");

        if(fichier!=NULL)
        {
            while(fscanf(fichier,"%d",&acc)!=EOF&&ligne<=num)      //tant que la ligne a laquelle nous sommes n'est pas celle du numero de l'eleve
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
    fichier=fopen(classe3PF,"w");
    if(fichier!=NULL)
    {
        int el;
        for(el=1; el<i; el++)
        {
            fprintf(fichier,"%d\n",note[el]);

        }
    }
    fclose(fichier);
    NOM3PF(nomCor);
    system("tableau.exe");
    motif3PF();
}

void motif3PF()
{
    int i;
    char date[30];
    char dateActu[30];
    DateCourante(dateActu);

    char *cara[2]= {0};
    const char* date3PF=NULL;
    const char* classe3PF=NULL;
    if(classe2==1)
    {
        classe3PF="3PF\\3PF_Langue\\3PF_Langue_motif.txt";
        date3PF="3PF\\3PF_Langue\\date.txt";
    }
    else if(classe2==2)
    {
        classe3PF="3PF\\3PF_Economique\\3PF_Economique_motif.txt";
        date3PF="3PF\\3PF_Economique\\date.txt";
    }
    else if(classe2==3)
    {
        classe3PF="3PF\\3PF_MPT\\3PF_MPT_motif.txt";
        date3PF="3PF\\3PF_MPT\\date.txt";
    }
    else if(classe2==4)
    {
        classe3PF="3PF\\3PF_BCST 1\\3PF_BCST 1_motif.txt";
        date3PF="3PF\\3PF_BCST 1\\date.txt";
    }
    else if(classe2==5)
    {
        classe3PF="3PF\\3PF_BCST 2\\3PF_BCST 2_motif.txt";
        date3PF="3PF\\3PF_BCST 2\\date.txt";
    }
    printf("\t³\n\t³DONNER LE MOTIF:");
    fflush(stdin);
    gets(motif);
    FILE* fichDate=fopen(date3PF,"r");
    if(fichDate)
    {
        fscanf(fichDate,"%s",date);
        fclose(fichDate);
    }
    if(date!=dateActu)
    {
        fichDate=fopen(date3PF,"w");
        if(fichDate)
        {
            fprintf(fichDate,"%s",dateActu);
            fclose(fichDate);
        }
    }

    FILE* fichier=fopen(classe3PF,"a");
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
