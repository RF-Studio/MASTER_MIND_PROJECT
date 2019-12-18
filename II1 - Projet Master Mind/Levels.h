#ifndef LEVELS_H_INCLUDED
#define LEVELS_H_INCLUDED

void pvp(); //PVP unlimited char len


void IA(int debug, int cheatcode); //Menu of IA mode


void IA_1(int debug, int cheatcode); //random generation of 4 char code (0 to 5) without rep


void IA_2(int debug, int cheatcode); //random generation of 4 char code (0 to 5) with possible rep


void IA_3(int debug, int cheatcode); //random generation of a x char code with flexible interval without rep


void IA_4(int debug, int cheatcode); //random generation of a x char code with flexible interval with possible rep


void BOT(int debug); //Menu of BOT mode


void auto_decode_dichotomie(int debug); //dichotomy methode


void chain_bot(int debug); //brutforce by dictionnary methode


void legals(); //just for lol

#endif // LEVELS_H_INCLUDED
