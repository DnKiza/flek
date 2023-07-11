#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void remplissage(const char* classe,const char* note);
void NOM2PF();
void NOM1PF();
void NOM3PF();
void NOM7();
void NOM8();
void NOM9();
int main()
{
    char choix;
    printf("\t\t\tBIENVENU DANS LE PROGAMME DE REMPLISSAGE\n");
    printf("\n\t\tVOULEZ-VOUS LANCER LE PROGRAMME(O/N)?");
    fflush(stdin);
    scanf("%c",&choix);
    if(choix=='0'||choix=='o'||choix=='O')
    {
        choix=0;
        printf("\n\t\tCONFIRMEZ-VOUS L'OPERATION(O/N)?");
        fflush(stdin);
        scanf("%c",&choix);
        if(choix=='0'||choix=='o'||choix=='O')
        {
            NOM7();
            NOM8();
            NOM9();
            NOM1PF();
            NOM2PF();
            NOM3PF();
            printf("\n\t\tFIN DU PROGRAMME\n\n");
        }
        else if(choix=='n'||choix=='N')
        {
            printf("\t\tVOUS N'AVEZ PAS CONFIME.\n\t\tMERCI\n\n");
            choix=0;
        }
        else
        {
            printf("\t\tSaisie invalide............");
        }
    }
    else if(choix=='n'||choix=='N')
    {
        printf("\n\t\tVOUS NE L'AVEZ PAS LANCE.\n\n\t\tAU REVOIR!\n\n");
    }
    else
    {
        printf("\t\tSaisie invalide............");
    }
    printf("\n\n\t\t\t");
    system("pause");
    sleep(2);
    return 0;
}
void NOM2PF()
{
    int i=1;
    int acc;
    char nom[100];
    const char* note=NULL;
    const char* classe2PF=NULL;
    classe2PF="2PF\\2PF_Langue\\2PF_Langue_nom.txt";
    note="2PF\\2PF_Langue\\2PF_Langue_note.txt";
    remplissage(classe2PF,note);

    note=NULL;
    classe2PF=NULL;
    classe2PF="2PF\\2PF_Economique\\2PF_Economique_nom.txt";
    note="2PF\\2PF_Economique\\2PF_Economique_note.txt";
    remplissage(classe2PF,note);

    note=NULL;
    classe2PF=NULL;
    classe2PF="2PF\\2PF_MPT\\2PF_MPT_nom.txt";
    note="2PF\\2PF_MPT\\2PF_MPT_note.txt";
    remplissage(classe2PF,note);

    note=NULL;
    classe2PF=NULL;
    classe2PF="2PF\\2PF_BCST 1\\2PF_BCST 1_nom.txt";
    note="2PF\\2PF_BCST 1\\2PF_BCST 1_note.txt";
    remplissage(classe2PF,note);

    note=NULL;
    classe2PF=NULL;
    classe2PF="2PF\\2PF_BCST 2\\2PF_BCST 2_nom.txt";
    note="2PF\\2PF_BCST 2\\2PF_BCST 2_note.txt";
    remplissage(classe2PF,note);
}

void NOM1PF()
{
    int i=1;
    char nom[100];
    const char* note=NULL;
    const char* classe1PF=NULL;

    classe1PF="1PF\\1PF_Langue\\1PF_Langue_nom.txt";
    note="1PF\\1PF_Langue\\1PF_Langue_note.txt";
    remplissage(classe1PF,note);

    classe1PF=NULL;
    note=NULL;
    classe1PF="1PF\\1PF_Economique\\1PF_Economique_nom.txt";
    note="1PF\\1PF_Economique\\1PF_Economique_note.txt";
    remplissage(classe1PF,note);

    classe1PF=NULL;
    note=NULL;
    classe1PF="1PF\\1PF_Science 1\\1PF_Science 1_nom.txt";
    note="1PF\\1PF_Science 1\\1PF_Science 1_note.txt";
    remplissage(classe1PF,note);

    classe1PF=NULL;
    note=NULL;
    classe1PF="1PF\\1PF_Science 2\\1PF_Science 2_nom.txt";
    note="1PF\\1PF_Science 2\\1PF_Science 2_note.txt";
    remplissage(classe1PF,note);

    classe1PF=NULL;
    note=NULL;
    classe1PF="1PF\\1PF_Science 3\\1PF_Science 3_nom.txt";
    note="1PF\\\\1PF_Science 3\\\\1PF_Science 3_note.txt";
    remplissage(classe1PF,note);

}

void NOM3PF()
{
    int i=1;
    char nom[100];
    const char* note=NULL;
    const char* classe3PF=NULL;

    classe3PF="3PF\\3PF_Langue\\3PF_Langue_nom.txt";
    note="3PF\\3PF_Langue\\3PF_Langue_note.txt";
    remplissage(classe3PF,note);

    classe3PF=NULL;
    note=NULL;
    classe3PF="3PF\\3PF_Economique\\3PF_Economique_nom.txt";
    note="3PF\\\\3PF_Economique\\3PF_Economique_note.txt";
    remplissage(classe3PF,note);

    classe3PF=NULL;
    note=NULL;
    classe3PF="3PF\\3PF_MPT\\3PF_MPT_nom.txt";
    note="3PF\\3PF_MPT\\3PF_MPT_note.txt";
    remplissage(classe3PF,note);

    classe3PF=NULL;
    note=NULL;
    classe3PF="3PF\\3PF_BCST 1\\3PF_BCST 1_nom.txt";
    note="3PF\\3PF_BCST 1\\3PF_BCST 1_note.txt";
    remplissage(classe3PF,note);

    classe3PF=NULL;
    note=NULL;
    classe3PF="3PF\\3PF_BCST 2\\3PF_BCST 2_nom.txt";
    note="3PF\\3PF_BCST 2\\3PF_BCST 2_note.txt";
    remplissage(classe3PF,note);
}

void NOM7()
{
    int i=1;
    char nom[100];
    const char* note=NULL;
    const char* classe7=NULL;
    classe7="7EME\\7EME_A\\7EME_A_nom.txt";
    note="7EME\\7EME_A\\7EME_A_note.txt";
    remplissage(classe7,note);

    classe7=NULL;
    note=NULL;
    classe7="7EME\\7EME_B\\7EME_B_nom.txt";
    note="7EME\\7EME_B\\7EME_B_note.txt";
    remplissage(classe7,note);

    classe7=NULL;
    note=NULL;
    classe7="7EME\\7EME_C\\7EME_C_nom.txt";
    note="7EME\\7EME_C\\7EME_C_note.txt";
    remplissage(classe7,note);
}

void NOM8()
{
    int i=1;
    char nom[100];
    const char* note=NULL;
    const char* classe8=NULL;
    classe8="8EME\\8EME_A\\8EME_A_nom.txt";
    note="8EME\\8EME_A\\8EME_A_note.txt";
    remplissage(classe8,note);

    classe8=NULL;
    note=NULL;
    classe8="8EME\\8EME_B\\8EME_B_nom.txt";
    note="8EME\\8EME_B\\8EME_B_note.txt";
    remplissage(classe8,note);

    classe8=NULL;
    note=NULL;
    classe8="8EME\\8EME_C\\8EME_C_nom.txt";
    note="8EME\\8EME_C\\8EME_C_note.txt";
    remplissage(classe8,note);
}

void NOM9()
{
    int i=1;
    char nom[100];
    const char* note=NULL;
    const char* classe9=NULL;
    classe9="9EME\\9EME_A\\9EME_A_nom.txt";
    note="9EME\\9EME_A\\9EME_A_note.txt";
    remplissage(classe9,note);

    classe9=NULL;
    note=NULL;
    classe9="9EME\\9EME_B\\9EME_B_nom.txt";
    note="9EME\\9EME_B\\9EME_B_note.txt";
    remplissage(classe9,note);

    classe9=NULL;
    note=NULL;
    classe9="9EME\\9EME_C\\9EME_C_nom.txt";
    note="9EME\\9EME_C\\9EME_C_note.txt";
    remplissage(classe9,note);
}

void remplissage(const char* classe,const char* note)
{
    int i=0;
    int acc;
    char nom[100];
    FILE* fich=fopen(classe,"r");
    if (fich!=NULL)
    {
        while(fgets(nom,100,fich)!=NULL)
        {
            i++;
        }
    }
    fich=fopen(note,"w");
    if(fich)
        for(acc=0; acc<i; acc++)
            fprintf(fich,"60\n");
    fclose(fich);
}
