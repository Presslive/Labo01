// But: Écrire un pprogramme qui affiche un message à l'écran et apprendre à gérer les versions du code
// avec l'application git et de le publier dans le nuage avec GitHub
// L'auteur:  Diallo Abdoulaye
// Date: 2020-09-03


#include<iostream>                       //Intègre un coffre à outils(coutcin,...0) pour communiquer avec l'utilisateur


int main(/*liste des param;etes éventuels */)
{  //un bloc d'instruction
	//pour gérer efficacement la convertion des caractàres accentiées
	setlocale(LC_ALL,"");

     //afficher le message à l'écran
	std::cout << "Bienvenue à tous ! ";



	return 0;
}
