//X41D

#include <iostream>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

int main() {
    srand(time(NULL));
    char palavras[10][10] = {"Alana", "Lucas", "Amadeu", "Joany", "Barbara", "Perci", "Marcus", "Gabriel", "Matheus", "Arthur"};
    char palavraResposta[8] = "______", letra;
    int word = rand () % 10, aux = strlen (palavras[word]), tentativas=6, cont=0;
	strupr(palavras[word]);
	do {
		cout << "Escreva uma letra: ";
		//setbuf(stdin, NULL);
		cin >> letra;
		letra = toupper(letra);
		for (int i=0;i<strlen(palavras[word]);i++) {
			if (palavras[word][i] == letra) {
			    if (palavraResposta[i] != letra) {
			    	palavraResposta[i] = letra;
			    	aux--;
			    	cont++;
			    }
			}
		}
		if (cont==0) {
			tentativas--;
			cout << "\nVoce errou, restam " << tentativas << " tentativas.\n";
		} else {
			cout << "\nResposta atual: " << palavraResposta << "\n\n";
		}
		if (tentativas == 0) {
			aux = 0;
		}
		cont = 0;
	} while (aux!=0);
	if (tentativas == 0) {
		cout << "Voce perdeu.";
	} else {
		cout << "Voce ganhou!";
	}
    return 0;
}
