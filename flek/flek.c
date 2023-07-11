#include "flek.h"

void ecriture(int motdepasse)          //Declaration de la fonction qui va ecrire le mot de passe dans un fichier
{
    FILE* fichier=NULL;              //Declaration d'un pointeur sur le fichier
    fichier = fopen("mot de passe.txt","w"); //Ouverture en ecriture du fichier
    if(fichier!=NULL)               //Verification de l'ouverture du fichier
    {
        fprintf(fichier,"%d",motdepasse);//Ecriture dans le fichier

        fclose(fichier);                //Fermeture du fichier
    }

    else
        printf("Errata");
}

void mot_de_passe()
{
    system("color bc");
    int validation=access("7EME\\7EME_A\\7EME_A_nom.txt",0);
    if(validation==-1)
    {
        printf("\n\t\tVeillez consulter d'abord le Guide d'utilisation");
        printf("\a");
        logo();
        exit(0);
    }
    int motDePasse=rand()%100000;
    int motDePasseUt=0,comp=1; //Declaretion des variables
    ecriture(motDePasse);         //Appel de la foction ecriture
fonc:
    printf("\n\tEntrer le mot de passe:");
    scanf("%d",&motDePasseUt);              //Champ pour que le End-User puisse entrer le mot de passe
    while(motDePasse!=motDePasseUt)          //Debut de la boucle de verification
    {
        if (comp==3)
            goto out;  //Sortie de la boucle quand il a rate 3 fois le mot de passe
        printf("\a");   //signal d'alerte
        printf("\n\tMot de passe incorrect.......................");
        printf("\n\n\tReentrer le mot de passe:");
        scanf("%d",&motDePasseUt);
        comp++;
    }

    if(motDePasse==motDePasseUt)
        goto deh;
out:
    printf("\a");
    system ("cls");//Effacement de l'ecran pour qu'il puisse recommencer
    motDePasse=rand ()%100000;   //Reinitialisation de la variable pour le choix
    ecriture(motDePasse);
    comp=1;  //reinitialisation du compteur
    goto fonc;  //Recyclage du programme a partir de la ligne 25
deh:
    ;
}

void identification()
{
    printf("\t³\n\t³ENTRER LE NUMERO DE L'ELEVE:");
    scanf("%d",&num);
    printf("\t³\n\t³POINTS DE RETRAIT:");
    scanf("%d",&retr);
    if(retr==0)
    {
        printf("\n\t\tVous avez saisi un 0.");
        printf("\a");
        logo();
        exit(0);
    }
}

void principale()
{
    system("cls");
    system("color 0a");
    printf("\t\t                            ..........\n");
    printf("\t\tBIENVENU DANS L'APPLICATION :# flek #:\n");
    printf("\t\t                            :........:\n\n");
commence:
    ;
    char choix;
    char nomCor[100];
    int aFaire;
    printf("\t\t\t===========  MENU  ===========\n");
    printf("\t\t\t\t1. Historique\n\t\t\t\t2. Action\n\n");
    printf("\t---------------------Entrez votre choix : ");
    fflush(stdin);
    scanf("%d",&aFaire);
    switch(aFaire)
    {
    case 1:
        Historique();
        break;
    case 2:
    {
        printf("\n\t\t\t\t\t§\n\t\t\t\t\t§\n\t\t\t\t\t§\n\t\t\t\t\t§\n\t\t\t\t\t§\n");
        printf("\n\t³²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n\t³");
        printf("\n\t³\t°1--> 7eme\n\t³\t°2--> 8eme\n\t³\t°3--> 9eme\n\t³\t°4--> 1 PF\n\t³\t°5--> 2 PF\n\t³\t°6--> 3 PF\n\t³");
        printf("\n\t³ENTRER LE NUMERO DE LA CLASSE: ");
        fflush(stdin);
        scanf("%d",&classeCor);
        switch(classeCor)
        {
        case 1:
        {
            printf("\t³\n\t³Choisissez entre A°B°C:");
            fflush(stdin);
            scanf("%c",&ch);
            Correspondance();
            if(ch=='A'||ch=='a')
            {
                identification();
                note7(nomCor);
            }
            else if(ch=='B'||ch=='b')
            {
                identification();
                note7(nomCor);
            }
            else if(ch=='C'||ch=='c')
            {
                identification();
                note7(nomCor);
            }
            else //if(ch!='A'||ch!='a'&&ch!='B'||ch!='b'&&ch!='C'||ch!='c')
            {
                printf("\n\tSaisie incorrecte!!.....................\n");
                printf("\a");
                return;
            }
            break;
        }
        case 2:
        {
            printf("\t³\n\t³Choisissez entre A°B°C:");
            fflush(stdin);
            scanf("%c",&ch);
            Correspondance();
            if(ch=='A'||ch=='a')
            {
                identification();
                note8(nomCor);
            }
            else if(ch=='B'||ch=='b')
            {
                identification();
                note8(nomCor);
            }
            else if(ch=='C'||ch=='c')
            {
                identification();
                note8(nomCor);
            }
            else
            {
                printf("\n\tSaisie incorrecte!!.....................\n");
                printf("\a");
                return;
            }
            break;
        }
        case 3:
        {
            printf("\t³\n\t³Choisissez entre A°B°C:");
            fflush(stdin);
            scanf("%c",&ch);
            Correspondance();
            if(ch=='A'||ch=='a')
            {
                identification();
                note9(nomCor);
            }
            else if(ch=='B'||ch=='b')
            {
                identification();
                note9(nomCor);
            }
            else if(ch=='C'||ch=='c')
            {
                identification();
                note9(nomCor);
            }
            else
            {
                printf("\n\tSaisie incorrecte!!.....................\n");
                printf("\a");
                return;
            }
            break;
        }
        case 4:
        {
            printf("\t³\n\t³Entrer le numero de la classe correspondante:\n\t³\n\t³\t°1-->Langues\n\t³\t°2-->Economique\n\t³\t°3-->Science 1\n\t³\t°4-->Science 2\n\t³\t°5-->Science 3\n");
            printf("\t³\n\t³Entrer: ");
            scanf("%i",&classe2);
            Correspondance();   //cette fonction va nous aider a bien connaitre la classe dans laquelle nous travaillons
            if(classe2==1)
            {
                identification();
                note1PF(nomCor);
            }
            else if(classe2==2)
            {
                identification();
                note1PF(nomCor);
            }
            else if(classe2==3)
            {
                identification();
                note1PF(nomCor);
            }
            else if(classe2==4)
            {
                identification();
                note1PF(nomCor);
            }
            else if(classe2==5)
            {
                identification();
                note1PF(nomCor);
            }
            else
            {
                printf("\n\tSaisie incorrecte!!.....................\n");
                printf("\a");
                return;
            }
            break;
        }
        case 5:
        {
            printf("\t³\n\t³Entrer le numero de la classe correspondante:\n\t³\n\t³\t°1-->Langues\n\t³\t°2-->Economique\n\t³\t°3-->MPT\n\t³\t°4-->BCST 1\n\t³\t°5-->BCST 2\n");
            printf("\t³\n\t³Entrer: ");
            scanf("%i",&classe2);
            Correspondance();
            if(classe2==1)
            {
                identification();
                note2PF(nomCor);
            }
            else if(classe2==2)
            {
                identification();
                note2PF(nomCor);
            }
            else if(classe2==3)
            {
                identification();
                note2PF(nomCor);
            }
            else if(classe2==4)
            {
                identification();
                note2PF(nomCor);
            }
            else if(classe2==5)
            {
                identification();
                note2PF(nomCor);
            }
            else
            {
                printf("\n\tSaisie incorrecte!!.....................\n");
                printf("\a");
                return;
            }

            break;
        }
        case 6:
        {
            printf("\t³\n\t³Entrer le numero de la classe correspondante:\n\t³\n\t³\t°1-->Langues\n\t³\t°2-->Economique\n\t³\t°3-->MPT\n\t³\t°4-->BCST 1\n\t³\t°5-->BCST 2\n");
            printf("\t³\n\t³Entrer: ");
            scanf("%i",&classe2);
            Correspondance();
            if(classe2==1)
            {
                identification();
                note3PF(nomCor);
            }
            else if(classe2==2)
            {
                identification();
                note3PF(nomCor);
            }
            else if(classe2==3)
            {
                identification();
                note3PF(nomCor);
            }
            else if(classe2==4)
            {
                identification();
                note3PF(nomCor);
            }
            else if(classe2==5)
            {
                identification();
                note3PF(nomCor);
            }
            else
            {
                printf("\n\tSaisie incorrecte!!.....................\n");
                printf("\a");
                return;
            }

            break;
        }
        default:
        {
            printf("Error");
            printf("\a");
            return;
        }

        }
        printf("\t³\n\t³²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n\n");
        sleep(2);
        system("cls");
        printf("\n\t.......   ==> Vous avez retranche les points a * %s * %d points. <==   .......",nomCor,retr);
        break;
    }
    default:
    {
        printf("\n\tErreur fatale\n");
        printf("\a");
        return;
    }
    }
choice:
    printf("\n\n\tVoulez-vous continuer?(O/N)...................................");
    fflush(stdin);
    scanf("%c",&choix);
    if(choix=='O'||choix=='o'||choix=='0')
    {
        system("cls");
        goto commence;
    }
    else if(choix=='n'||choix=='N')
        return;
    else
    {
        printf("\n\tSaisie incorrecte!!.....................\n");
        printf("\a");
        goto choice;
    }
    system("pause");
}

void logo()
{
    printf("\n\t\t                     ..........\n");
    printf("\t\tFIN DE L'APPLICATION :# flek #:\n");
    printf("\t\t                     :........:\n\n");
    printf("\t\t\t\t\t  ² ²\t\t² ²\n\t\t\t\t\t ²\t       ²\n\t\t\t\t\t²\t      ²\n\t\t\t\t\t²     ² ²     ²\n\t\t\t\t\t²    ²  ²     ²\n\t\t\t\t    ² ² ² ² ²  ²  ²²  ² ² ²\n\t\t\t\t   ²    ²   ²²  ²    ²²²   ²\n\t\t\t\t\t²   ²   ²²²²²²²  ² ²\n\t\t\t\t\t²   ²   ²     ²   ²\n\t\t\t\t       ²     ²   ²   ²     ²\n\t\t\t\t    ² ²        ²²  ²²       ² ²");
    printf("\n");
    printf("\n\n\t\t\t\t");
    system("pause");
    sleep(2);
}

void acceuil()
{
    int i=0;
    printf("\n\t\tNOUS VOUS ACCEUILLONS CHEZ \n\n");
    printf("\t\t\t\t\t  ² ²\t\t² ²\n\t\t\t\t\t ²\t       ²\n\t\t\t\t\t²\t      ²\n\t\t\t\t\t²     ² ²     ²\n\t\t\t\t\t²    ²  ²     ²\n\t\t\t\t    ² ² ² ² ²  ²  ²²  ² ² ²\n\t\t\t\t   ²    ²   ²²  ²    ²²²   ²\n\t\t\t\t\t²   ²   ²²²²²²²  ² ²\n\t\t\t\t\t²   ²   ²     ²   ²\n\t\t\t\t       ²     ²   ²   ²     ²\n\t\t\t\t    ² ²        ²²  ²²       ² ²");
    while(i<10)
    {
        if (i==0)
            system("color 06");
        if(i==1)
            system("color 07");
        if(i==2)
            system("color 08");
        if(i==3)
            system("color 09");
        if(i==4)
            system("color 0f");
        if(i==5)
            system("color 0b");
        if(i==6)
            system("color 0d");
        if(i==7)
            system("color 0c");
        if(i==8)
            system("color 0a");
        if(i==9)
            system("color 0e");
        i++;
        sleep(1);
    }
    system("cls");
}

void DateCourante(char *date)
{
    time_t dateCour=time(NULL);
    strftime(date,30,"%d/%b/%Y",localtime(&dateCour));
}

void Correspondance()
{
    char* note;
    char* nom;
    char* finale;
    short numClasse=classeCor;
    if(numClasse==1)
    {
        if(ch=='A'||ch=='a')
        {
            note="7EME\\\\7EME_A\\\\7EME_A_note.txt";
            finale="7EME\\\\7EME_A\\\\7EME_A.txt";
            nom="7EME\\\\7EME_A\\\\7EME_A_nom.txt";
        }
        else if(ch=='B'||ch=='b')
        {
            note="7EME\\\\7EME_B\\\\7EME_B_note.txt";
            finale="7EME\\\\7EME_B\\\\7EME_B.txt";
            nom="7EME\\\\7EME_B\\\\7EME_B_nom.txt";
        }
        else if(ch=='C'||ch=='c')
        {
            note="7EME\\\\7EME_C\\\\7EME_C_note.txt";
            finale="7EME\\\\7EME_C\\\\7EME_C.txt";
            nom="7EME\\\\7EME_C\\\\7EME_C_nom.txt";
        }
        else
        {
            return;
        }

    }
    else if(numClasse==2)
    {
        if(ch=='A'||ch=='a')
        {
            note="8EME\\\\8EME_A\\\\8EME_A_note.txt";
            finale="8EME\\\\8EME_A\\\\8EME_A.txt";
            nom="8EME\\\\8EME_A\\\\8EME_A_nom.txt";
        }
        else if(ch=='B'||ch=='b')
        {
            note="8EME\\\\8EME_B\\\\8EME_B_note.txt";
            finale="8EME\\\\8EME_B\\\\8EME_B.txt";
            nom="8EME\\\\8EME_B\\\\8EME_B_nom.txt";
        }
        else if(ch=='C'||ch=='c')
        {
            note="8EME\\\\8EME_C\\\\8EME_C_note.txt";
            finale="8EME\\\\8EME_C\\\\8EME_C.txt";
            nom="8EME\\\\8EME_C\\\\8EME_C_nom.txt";
        }
        else
        {
            return;
        }

    }
    else if (numClasse==3)
    {
        if(ch=='A'||ch=='a')
        {
            note="9EME\\\\9EME_A\\\\9EME_A_note.txt";
            finale="9EME\\\\9EME_A\\\\9EME_A.txt";
            nom="9EME\\\\9EME_A\\\\9EME_A_nom.txt";
        }
        else if(ch=='B'||ch=='b')
        {
            note="9EME\\\\9EME_B\\\\9EME_B_note.txt";
            finale="9EME\\\\9EME_B\\\\9EME_B.txt";
            nom="9EME\\\\9EME_B\\\\9EME_B_nom.txt";
        }
        else if(ch=='C'||ch=='c')
        {
            note="9EME\\\\9EME_C\\\\9EME_C_note.txt";
            finale="9EME\\\\9EME_C\\\\9EME_C.txt";
            nom="9EME\\\\9EME_C\\\\9EME_C_nom.txt";
        }
        else
        {
            return;
        }

    }
    else if(numClasse==4)
    {
        if(classe2==1)
        {
            note="1PF\\\\1PF_Langue\\\\1PF_Langue_note.txt";
            finale="1PF\\\\1PF_Langue\\\\1PF_Langue.txt";
            nom="1PF\\\\1PF_Langue\\\\1PF_Langue_nom.txt";
        }
        else if(classe2==2)
        {
            note="1PF\\\\1PF_Economique\\\\1PF_Economique_note.txt";
            finale="1PF\\\\1PF_Economique\\\\1PF_Economique.txt";
            nom="1PF\\\\1PF_Economique\\\\1PF_Economique_nom.txt";
        }
        else if(classe2==3)
        {
            note="1PF\\\\1PF_Science 1\\\\1PF_Science 1_note.txt";
            finale="1PF\\\\1PF_Science 1\\\\1PF_Science 1.txt";
            nom="1PF\\\\1PF_Science 1\\\\1PF_Science 1_nom.txt";
        }
        else if(classe2==4)
        {
            note="1PF\\\\1PF_Science 2\\\\1PF_Science 2_note.txt";
            finale="1PF\\\\1PF_Science 2\\\\1PF_Science 2.txt";
            nom="1PF\\\\1PF_Science 2\\\\1PF_Science 2_nom.txt";
        }
        else if(classe2==5)
        {
            note="1PF\\\\1PF_Science 3\\\\1PF_Science 3_note.txt";
            finale="1PF\\\\1PF_Science 3\\\\1PF_Science 3.txt";
            nom="1PF\\\\1PF_Science 3\\\\1PF_Science 3_nom.txt";
        }
        else
        {
            return;
        }

    }
    else if(numClasse==5)
    {
        if(classe2==1)
        {
            note="2PF\\\\2PF_Langue\\\\2PF_Langue_note.txt";
            finale="2PF\\\\2PF_Langue\\\\2PF_Langue.txt";
            nom="2PF\\\\2PF_Langue\\\\2PF_Langue_nom.txt";
        }
        else if(classe2==2)
        {
            note="2PF\\\\2PF_Economique\\\\2PF_Economique_note.txt";
            finale="2PF\\\\2PF_Economique\\\\2PF_Economique.txt";
            nom="2PF\\\\2PF_Economique\\\\2PF_Economique_nom.txt";
        }
        else if(classe2==3)
        {
            note="2PF\\\\2PF_MPT\\\\2PF_MPT_note.txt";
            finale="2PF\\2PF_MPT\\\\2PF_MPT.txt";
            nom="2PF\\\\2PF_MPT\\\\2PF_MPT_nom.txt";
        }
        else if(classe2==4)
        {
            note="2PF\\\\2PF_BCST 1\\\\2PF_BCST 1_note.txt";
            finale="2PF\\\\2PF_BCST 1\\\\2PF_BCST 1.txt";
            nom="2PF\\\\2PF_BCST 1\\\\2PF_BCST 1_nom.txt";
        }
        else if(classe2==5)
        {
            note="2PF\\\\2PF_BCST 2\\\\2PF_BCST 2_note.txt";
            finale="2PF\\\\2PF_BCST 2\\\\2PF_BCST 2.txt";
            nom="2PF\\\\2PF_BCST 2\\\\2PF_BCST 2_nom.txt";
        }
        else
        {
            return;
        }

    }
    else if(numClasse==6)
    {
        if(classe2==1)
        {
            note="3PF\\\\3PF_Langue\\\\3PF_Langue_note.txt";
            finale="3PF\\\\3PF_Langue\\\\3PF_Langue.txt";
            nom="3PF\\\\3PF_Langue\\\\3PF_Langue_nom.txt";
        }
        else if(classe2==2)
        {
            note="3PF\\\\3PF_Economique\\\\3PF_Economique_note.txt";
            finale="3PF\\\\3PF_Economique\\\\3PF_Economique.txt";
            nom="3PF\\\\3PF_Economique\\\\3PF_Economique_nom.txt";
        }
        else if(classe2==3)
        {
            note="3PF\\\\3PF_MPT\\\\3PF_MPT_note.txt";
            finale="3PF\\3PF_MPT\\\\3PF_MPT.txt";
            nom="3PF\\\\3PF_MPT\\\\3PF_MPT_nom.txt";
        }
        else if(classe2==4)
        {
            note="3PF\\\\3PF_BCST 1\\\\3PF_BCST 1_note.txt";
            finale="3PF\\\\3PF_BCST 1\\\\3PF_BCST 1.txt";
            nom="3PF\\\\3PF_BCST 1\\\\3PF_BCST 1_nom.txt";
        }
        else if(classe2==5)
        {
            note="3PF\\\\3PF_BCST 2\\\\3PF_BCST 2_note.txt";
            finale="3PF\\\\3PF_BCST 2\\\\3PF_BCST 2.txt";
            nom="3PF\\\\3PF_BCST 2\\\\3PF_BCST 2_nom.txt";
        }
        else
        {
            return;
        }

    }
    FILE* fichier=fopen("correspondance.txt","w");
    if(fichier)
    {
        fprintf(fichier,"%s\n%s\n%s",nom,note,finale);
        fclose(fichier);
    }
}

void Historique()
{
    int classe_cor_hist,classe2_hist;
    char ch_hist;
    const char* hist;
    char vrai_hist[200];
    printf("\n\t\t\t\t\t§\n\t\t\t\t\t§\n\t\t\t\t\t§\n\t\t\t\t\t§\n\t\t\t\t\t§\n");
    printf("\n\t³²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n\t³");
    printf("\n\t³\t°1--> 7eme\n\t³\t°2--> 8eme\n\t³\t°3--> 9eme\n\t³\t°4--> 1 PF\n\t³\t°5--> 2 PF\n\t³\t°6--> 3 PF\n\t³");
    printf("\n\t³ENTRER LE NUMERO DE LA CLASSE: ");
    fflush(stdin);
    scanf("%d",&classe_cor_hist);
    switch(classe_cor_hist)
    {
    case 1:
    {
        printf("\t³\n\t³Choisissez entre A°B°C:");
        fflush(stdin);
        scanf("%c",&ch_hist);
        if(ch_hist=='A'||ch_hist=='a')
        {
            hist="7EME\\7EME_A\\7EME_A_motif.txt";
        }
        else if(ch_hist=='B'||ch_hist=='b')
        {
            hist="7EME\\7EME_B\\7EME_B_motif.txt";
        }
        else if(ch_hist=='C'||ch_hist=='c')
        {
            hist="7EME\\7EME_C\\7EME_C_motif.txt";
        }
        else
        {
            printf("\n\tSaisie incorrecte!!.....................\n");
            printf("\a");
            logo();
            exit(0);
        }
        break;
    }
    case 2:
    {
        printf("\t³\n\t³Choisissez entre A°B°C:");
        fflush(stdin);
        scanf("%c",&ch_hist);
        if(ch_hist=='A'||ch_hist=='a')
        {
            hist="8EME\\8EME_A\\8EME_A_motif.txt";
        }
        else if(ch_hist=='B'||ch_hist=='b')
        {
            hist="8EME\\8EME_B\\8EME_B_motif.txt";
        }
        else if(ch_hist=='C'||ch_hist=='c')
        {
            hist="8EME\\8EME_C\\8EME_C_motif.txt";
        }
        else
        {
            printf("\n\tSaisie incorrecte!!.....................\n");
            printf("\a");
            logo();
            exit(0);
        }
        break;
    }
    case 3:
    {
        printf("\t³\n\t³Choisissez entre A°B°C:");
        fflush(stdin);
        scanf("%c",&ch_hist);
        if(ch_hist=='A'||ch_hist=='a')
        {
            hist="9EME\\9EME_A\\9EME_A_motif.txt";
        }
        else if(ch_hist=='B'||ch_hist=='b')
        {
            hist="9EME\\9EME_B\\9EME_B_motif.txt";
        }
        else if(ch_hist=='C'||ch_hist=='c')
        {
            hist="9EME\\9EME_C\\9EME_C_motif.txt";
        }
        else
        {
            printf("\n\tSaisie incorrecte!!.....................\n");
            printf("\a");
            logo();
            exit(0);
        }
        break;
    }
    case 4:
    {
        printf("\t³\n\t³Entrer le numero de la classe correspondante:\n\t³\n\t³\t°1-->Langues\n\t³\t°2-->Economique\n\t³\t°3-->Science 1\n\t³\t°4-->Science 2\n\t³\t°5-->Science 3\n");
        printf("\t³\n\t³Entrer: ");
        scanf("%i",&classe2_hist);
        if(classe2_hist==1)
        {
            hist="1PF\\1PF_Langue\\1PF_Langue_motif.txt";

        }
        else if(classe2_hist==2)
        {
            hist="1PF\\1PF_Economique\\1PF_Economique_motif.txt";
        }
        else if(classe2_hist==3)
        {
            hist="1PF\\1PF_Science 1\\1PF_Science 1_motif.txt";
        }
        else if(classe2_hist==4)
        {
            hist="1PF\\1PF_Science 2\\1PF_Science 2_motif.txt";
        }
        else if(classe2_hist==5)
        {
            hist="1PF\\1PF_Science 3\\1PF_Science 3_motif.txt";
        }
        else
        {
            printf("\n\tSaisie incorrecte!!.....................\n");
            printf("\a");
            logo();
            exit(0);
        }
        break;
    }
    case 5:
    {
        printf("\t³\n\t³Entrer le numero de la classe correspondante:\n\t³\n\t³\t°1-->Langues\n\t³\t°2-->Economique\n\t³\t°3-->MPT\n\t³\t°4-->BCST 1\n\t³\t°5-->BCST 2\n");
        printf("\t³\n\t³Entrer: ");
        scanf("%i",&classe2_hist);
        if(classe2_hist==1)
        {
            hist= "2PF\\2PF_Langue\\2PF_Langue_motif.txt";
        }
        else if(classe2_hist==2)
        {
            hist="2PF\\2PF_Economique\\2PF_Economique_motif.txt";
        }
        else if(classe2_hist==3)
        {
            hist="2PF\\2PF_MPT\\2PF_MPT_motif.txt";
        }
        else if(classe2_hist==4)
        {
            hist="2PF\\2PF_BCST 1\\2PF_BCST 1_motif.txt";
        }
        else if(classe2_hist==5)
        {
            hist="2PF\\2PF_BCST 2\\2PF_BCST 2_motif.txt";
        }
        else
        {
            printf("\n\tSaisie incorrecte!!.....................\n");
            printf("\a");
            logo();
            exit(0);
        }

        break;
    }
    case 6:
    {
        printf("\t³\n\t³Entrer le numero de la classe correspondante:\n\t³\n\t³\t°1-->Langues\n\t³\t°2-->Economique\n\t³\t°3-->MPT\n\t³\t°4-->BCST 1\n\t³\t°5-->BCST 2\n");
        printf("\t³\n\t³Entrer: ");
        scanf("%i",&classe2_hist);
        if(classe2_hist==1)
        {
            hist="3PF\\3PF_Langue\\3PF_Langue_motif.txt";
        }
        else if(classe2_hist==2)
        {
            hist="3PF\\3PF_Economique\\3PF_Economique_motif.txt";
        }
        else if(classe2_hist==3)
        {
            hist="3PF\\3PF_MPT\\3PF_MPT_motif.txt";
        }
        else if(classe2_hist==4)
        {
            hist="3PF\\3PF_BCST 1\\3PF_BCST 1_motif.txt";
        }
        else if(classe2_hist==5)
        {
            hist="3PF\\3PF_BCST 2\\3PF_BCST 2_motif.txt";
        }
        else
        {
            printf("\n\tSaisie incorrecte!!.....................\n");
            printf("\a");
            logo();
            exit(0);
        }
        break;
    }
    default:
    {
        printf("\n\t\tError");
        printf("\a");
        logo();
        exit(0);
    }
    }
    FILE* fichier=fopen(hist,"r");
    if(fichier)
    {
        printf("\t³\n\t³²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²\n\n");
        printf("\t\t\t\tVOICI L'HISTORIQUE DE CETTE CLASSE\n\t\t\t\t__________________________________\n\n");
        while(fgets(vrai_hist,sizeof(vrai_hist),fichier)!=NULL)
        {
            printf("\t%s",vrai_hist);
        }
        fclose(fichier);
    }
    else
        printf("\n\n\tFichier introuvable!!");
}
