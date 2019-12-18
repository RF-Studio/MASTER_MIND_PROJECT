#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

int check_ordre(char *NbM, char *Nb, int len); //recherche si les caractères sont dans l'ordre


int check_existe(char *NbM, char *Nb, int len); //recherche si les carcactères de Nb sont dans NbM


int in_buffer(int *buffer, int c); //recherche si c est dans le buffer, si oui renvoie -1

#endif // FUNCTIONS_H_INCLUDED
