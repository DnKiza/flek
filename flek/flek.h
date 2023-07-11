#ifndef FLEK_H_INCLUDED
#define FLEK_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

void ecriture(int);
void mot_de_passe();
void identification();
void principale();
void logo();
void acceuil();

void NOM7(char nomCor[100]);
void NOM8(char nomCor[100]);
void NOM9(char nomCor[100]);
void NOM1PF(char nomCor[100]);
void NOM2PF(char nomCor[100]);
void NOM3PF(char nomCor[100]);

void note7(char nomCor[100]);
void note8(char nomCor[100]);
void note9(char nomCor[100]);
void note1PF(char nomCor[100]);
void note2PF(char nomCor[100]);
void note3PF(char nomCor[100]);

void motif7();
void motif8();
void motif9();
void motif1PF();
void motif2PF();
void motif3PF();

void DateCourante(char* date);
void Correspondance();
void Historique();

int classeCor;
int num,retr,classe2;
char motif[100];
char ch;

#endif // FLEK_H_INCLUDED
