#include <stdio.h>
#include <stdlib.h>
#include <dir.h>
#include <unistd.h>

int main()
{
    int repertoire_valide;
    repertoire_valide=access("7EME\\7EME_A\\7EME_A_nom.txt",0);
    if(repertoire_valide==-1)
    {
    mkdir("7EME");
    mkdir("7EME\\7EME_A");
    mkdir("7EME\\7EME_B");
    mkdir("7EME\\7EME_C");
    mkdir("8EME");
    mkdir("8EME\\8EME_A");
    mkdir("8EME\\8EME_B");
    mkdir("8EME\\8EME_C");
    mkdir("8EME\\8EME_C");
    mkdir("9EME");
    mkdir("9EME\\9EME_B");
    mkdir("9EME\\9EME_C");
    mkdir("9EME\\9EME_A");
    mkdir("1PF");
    mkdir("1PF\\1PF_Langue");
    mkdir("1PF\\1PF_Economique");
    mkdir("1PF\\1PF_Science 1");
    mkdir("1PF\\1PF_Science 2");
    mkdir("1PF\\1PF_Science 3");
    mkdir("2PF");
    mkdir("2PF\\2PF_Langue");
    mkdir("2PF\\2PF_Economique");
    mkdir("2PF\\2PF_MPT");
    mkdir("2PF\\2PF_BCST 1");
    mkdir("2PF\\2PF_BCST 2");
    mkdir("3PF");
    mkdir("3PF\\3PF_Langue");
    mkdir("3PF\\3PF_Economique");
    mkdir("3PF\\3PF_MPT");
    mkdir("3PF\\3PF_BCST 1");
    mkdir("3PF\\3PF_BCST 2");
    FILE* fichier=fopen("7EME\\7EME_A\\7EME_A_nom.txt","w");
    fichier=fopen("7EME\\7EME_B\\7EME_B_nom.txt","w");
    fichier=fopen("7EME\\7EME_C\\7EME_C_nom.txt","w");

    fichier=fopen("7EME\\7EME_A\\7EME_A_note.txt","w");
    fichier=fopen("7EME\\7EME_B\\7EME_B_note.txt","w");
    fichier=fopen("7EME\\7EME_C\\7EME_C_note.txt","w");

    fichier=fopen("7EME\\7EME_A\\7EME_A.txt","w");
    fichier=fopen("7EME\\7EME_B\\7EME_B.txt","w");
    fichier=fopen("7EME\\7EME_C\\7EME_C.txt","w");

    fichier=fopen("8EME\\8EME_A\\8EME_A_nom.txt","w");
    fichier=fopen("8EME\\8EME_B\\8EME_B_nom.txt","w");
    fichier=fopen("8EME\\8EME_C\\8EME_C_nom.txt","w");

    fichier=fopen("8EME\\8EME_A\\8EME_A_note.txt","w");
    fichier=fopen("8EME\\8EME_B\\8EME_B_note.txt","w");
    fichier=fopen("8EME\\8EME_C\\8EME_C_note.txt","w");

    fichier=fopen("8EME\\8EME_A\\8EME_A.txt","w");
    fichier=fopen("8EME\\8EME_B\\8EME_B.txt","w");
    fichier=fopen("8EME\\8EME_C\\8EME_C.txt","w");

    fichier=fopen("9EME\\9EME_A\\9EME_A_nom.txt","w");
    fichier=fopen("9EME\\9EME_B\\9EME_B_nom.txt","w");
    fichier=fopen("9EME\\9EME_C\\9EME_C_nom.txt","w");

    fichier=fopen("9EME\\9EME_A\\9EME_A_note.txt","w");
    fichier=fopen("9EME\\9EME_B\\9EME_B_note.txt","w");
    fichier=fopen("9EME\\9EME_C\\9EME_C_note.txt","w");

    fichier=fopen("9EME\\9EME_A\\9EME_A.txt","w");
    fichier=fopen("9EME\\9EME_B\\9EME_B.txt","w");
    fichier=fopen("9EME\\9EME_C\\9EME_C.txt","w");


    fichier=fopen("1PF\\1PF_Langue\\1PF_Langue_nom.txt","w");
    fichier=fopen("1PF\\1PF_Economique\\1PF_Economique_nom.txt","w");
    fichier=fopen("1PF\\1PF_Science 1\\1PF_Science 1_nom.txt","w");
    fichier=fopen("1PF\\1PF_Science 2\\1PF_Science 2_nom.txt","w");
    fichier=fopen("1PF\\1PF_Science 3\\1PF_Science 3_nom.txt","w");

    fichier=fopen("1PF\\1PF_Langue\\1PF_Langue_note.txt","w");
    fichier=fopen("1PF\\1PF_Economique\\1PF_Economique_note.txt","w");
    fichier=fopen("1PF\\1PF_Science 1\\1PF_Science 1_note.txt","w");
    fichier=fopen("1PF\\1PF_Science 2\\1PF_Science 2_note.txt","w");
    fichier=fopen("1PF\\1PF_Science 3\\1PF_Science 3_note.txt","w");

    fichier=fopen("1PF\\1PF_Langue\\1PF_Langue.txt","w");
    fichier=fopen("1PF\\1PF_Economique\\1PF_Economique.txt","w");
    fichier=fopen("1PF\\1PF_Science 1\\1PF_Science 1.txt","w");
    fichier=fopen("1PF\\1PF_Science 2\\1PF_Science 2.txt","w");
    fichier=fopen("1PF\\1PF_Science 3\\1PF_Science 3.txt","w");

    fichier=fopen("2PF\\2PF_Langue\\2PF_Langue_nom.txt","w");
    fichier=fopen("2PF\\2PF_Economique\\2PF_Economique_nom.txt","w");
    fichier=fopen("2PF\\2PF_MPT\\2PF_MPT_nom.txt","w");
    fichier=fopen("2PF\\2PF_BCST 1\\2PF_BCST 1_nom.txt","w");
    fichier=fopen("2PF\\2PF_BCST 2\\2PF_BCST 2_nom.txt","w");

    fichier=fopen("2PF\\2PF_Langue\\2PF_Langue_note.txt","w");
    fichier=fopen("2PF\\2PF_Economique\\2PF_Economique_note.txt","w");
    fichier=fopen("2PF\\2PF_MPT\\2PF_MPT_note.txt","w");
    fichier=fopen("2PF\\2PF_BCST 1\\2PF_BCST 1_note.txt","w");
    fichier=fopen("2PF\\2PF_BCST 2\\2PF_BCST 2_note.txt","w");

    fichier=fopen("2PF\\2PF_Langue\\2PF_Langue.txt","w");
    fichier=fopen("2PF\\2PF_Economique\\2PF_Economique.txt","w");
    fichier=fopen("2PF\\2PF_MPT\\2PF_MPT.txt","w");
    fichier=fopen("2PF\\2PF_BCST 1\\2PF_BCST 1.txt","w");
    fichier=fopen("2PF\\2PF_BCST 2\\2PF_BCST 2.txt","w");

    fichier=fopen("3PF\\3PF_Langue\\3PF_Langue_nom.txt","w");
    fichier=fopen("3PF\\3PF_Economique\\3PF_Economique_nom.txt","w");
    fichier=fopen("3PF\\3PF_MPT\\3PF_MPT_nom.txt","w");
    fichier=fopen("3PF\\3PF_BCST 1\\3PF_BCST 1_nom.txt","w");
    fichier=fopen("3PF\\3PF_BCST 2\\3PF_BCST 2_nom.txt","w");

    fichier=fopen("3PF\\3PF_Langue\\3PF_Langue_note.txt","w");
    fichier=fopen("3PF\\3PF_Economique\\3PF_Economique_note.txt","w");
    fichier=fopen("3PF\\3PF_MPT\\3PF_MPT_note.txt","w");
    fichier=fopen("3PF\\3PF_BCST 1\\3PF_BCST 1_note.txt","w");
    fichier=fopen("3PF\\3PF_BCST 2\\3PF_BCST 2_note.txt","w");

    fichier=fopen("3PF\\3PF_Langue\\3PF_Langue.txt","w");
    fichier=fopen("3PF\\3PF_Economique\\3PF_Economique.txt","w");
    fichier=fopen("3PF\\3PF_MPT\\3PF_MPT.txt","w");
    fichier=fopen("3PF\\3PF_BCST 1\\3PF_BCST 1.txt","w");
    fichier=fopen("3PF\\3PF_BCST 2\\3PF_BCST 2.txt","w");

    fichier=fopen("7EME\\7EME_A\\7EME_A_motif.txt","w");
    fichier=fopen("7EME\\7EME_B\\7EME_B_motif.txt","w");
    fichier=fopen("7EME\\7EME_C\\7EME_C_motif.txt","w");

    fichier=fopen("7EME\\7EME_A\\date.txt","w");
    fichier=fopen("7EME\\7EME_B\\date.txt","w");
    fichier=fopen("7EME\\7EME_C\\date.txt","w");

    fichier=fopen("8EME\\8EME_A\\8EME_A_motif.txt","w");
    fichier=fopen("8EME\\8EME_B\\8EME_B_motif.txt","w");
    fichier=fopen("8EME\\8EME_C\\8EME_C_motif.txt","w");

    fichier=fopen("8EME\\8EME_A\\date.txt","w");
    fichier=fopen("8EME\\8EME_B\\date.txt","w");
    fichier=fopen("8EME\\8EME_C\\date.txt","w");

    fichier=fopen("9EME\\9EME_A\\9EME_A_motif.txt","w");
    fichier=fopen("9EME\\9EME_B\\9EME_B_motif.txt","w");
    fichier=fopen("9EME\\9EME_C\\9EME_C_motif.txt","w");

    fichier=fopen("9EME\\9EME_A\\date.txt","w");
    fichier=fopen("9EME\\9EME_B\\date.txt","w");
    fichier=fopen("9EME\\9EME_C\\date.txt","w");

    fichier=fopen("1PF\\1PF_Langue\\1PF_Langue_motif.txt","w");
    fichier=fopen("1PF\\1PF_Economique\\1PF_Economique_motif.txt","w");
    fichier=fopen("1PF\\1PF_Science 1\\1PF_Science 1_motif.txt","w");
    fichier=fopen("1PF\\1PF_Science 2\\1PF_Science 2_motif.txt","w");
    fichier=fopen("1PF\\1PF_Science 3\\1PF_Science 3_motif.txt","w");

    fichier=fopen("1PF\\1PF_Langue\\date.txt","w");
    fichier=fopen("1PF\\1PF_Economique\\date.txt","w");
    fichier=fopen("1PF\\1PF_Science 1\\date.txt","w");
    fichier=fopen("1PF\\1PF_Science 2\\date.txt","w");
    fichier=fopen("1PF\\1PF_Science 3\\date.txt","w");

    fichier=fopen("2PF\\2PF_Langue\\2PF_Langue_motif.txt","w");
    fichier=fopen("2PF\\2PF_Economique\\2PF_Economique_motif.txt","w");
    fichier=fopen("2PF\\2PF_MPT\\2PF_MPT_motif.txt","w");
    fichier=fopen("2PF\\2PF_BCST 1\\2PF_BCST 1_motif.txt","w");
    fichier=fopen("2PF\\2PF_BCST 2\\2PF_BCST 2_motif.txt","w");

    fichier=fopen("2PF\\2PF_Langue\\date.txt","w");
    fichier=fopen("2PF\\2PF_Economique\\date.txt","w");
    fichier=fopen("2PF\\2PF_MPT\\date.txt","w");
    fichier=fopen("2PF\\2PF_BCST 1\\date.txt","w");
    fichier=fopen("2PF\\2PF_BCST 2\\date.txt","w");

    fichier=fopen("3PF\\3PF_Langue\\3PF_Langue_motif.txt","w");
    fichier=fopen("3PF\\3PF_Economique\\3PF_Economique_motif.txt","w");
    fichier=fopen("3PF\\3PF_MPT\\3PF_MPT_motif.txt","w");
    fichier=fopen("3PF\\3PF_BCST 1\\3PF_BCST 1_motif.txt","w");
    fichier=fopen("3PF\\3PF_BCST 2\\3PF_BCST 2_motif.txt","w");

    fichier=fopen("3PF\\3PF_Langue\\date.txt","w");
    fichier=fopen("3PF\\3PF_Economique\\date.txt","w");
    fichier=fopen("3PF\\3PF_MPT\\date.txt","w");
    fichier=fopen("3PF\\3PF_BCST 1\\date.txt","w");
    fichier=fopen("3PF\\3PF_BCST 2\\date.txt","w");

    fichier=fopen("correspondance.txt","w");
    fichier=fopen("mot de passe.txt","w");
    fclose(fichier);
    }
    printf("\n\n\t\t\t");
    system("pause");
    sleep(2);
    return 0;
}
