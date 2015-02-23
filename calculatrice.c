#include <iostream>
	#include <stdint.h>
	#include <stdio.h>
	using namespace std;
	/// \brief fonction d'addition de deux nombres de type int32_t
	///
	/// La fonction d'addition est polymorphe. c'est à dire qu'elle dépend
	/// du type de paramètres fournis . celle-ci correspend au type int32_T
	///
	/// \param A est un entier 32 Bits
	/// \Param B est un entier 32 Bits
	/// \return la somme de deux entiers 32 bits fournis en paramètres.
	
	
	/// Addition avec des variables en entier 32 bit
	int32_t add( int32_t A , int32_t B)
	{
	int32_t Resultat;
	
	Resultat = A + B;
	return Resultat;
	}
	/// \brief fonction d'addition de deux nombres de type int32_t
	///
	\n/// La fonction d'addition est polymorphe. c'est à dire qu'elle dépend
	/// du type de paramètres fournis . celle-ci correspend au type int32_T
	///
	/// \param A est un entier 32 Bits
	/// \Param B est un entier 32 Bits
	/// \return la soustraction de deux entiers 32 bits fournis en paramètres.
	
	/// Soustraction avec des variables en entier 32 bit
	int32_t sub( int32_t A , int32_t B)
	{
	int32_t Resultat;
	
	Resultat = A - B;
	return Resultat;
	}
	/// \brief fonction d'addition de deux nombres de type int32_t
	///
	\n/// La fonction d'addition est polymorphe. c'est à dire qu'elle dépend
	/// du type de paramètres fournis . celle-ci correspend au type int32_T
	///
	/// \param A est un entier 32 Bits
	/// \Param B est un entier 32 Bits
	/// \return la somme de deux entiers 32 bits fournis en paramètres.
	
	/// Multiplication avec des variables en entier 32 bit
	int32_t mul( int32_t A , int32_t B)
	{
	int32_t Resultat;
	
	Resultat = A * B;
	return Resultat;
	}
	/// \brief fonction d'addition de deux nombres de type int32_t
	///
	\n/// La fonction d'addition est polymorphe. c'est à dire qu'elle dépend
	/// du type de paramètres fournis . celle-ci correspend au type int32_T
	///
	/// \param A est un entier 32 Bits
	/// \Param B est un entier 32 Bits
	/// \return la division de deux entiers 32 bits fournis en paramètres.
	
	/// Division avec des variables en entier 32 bit
	int32_t divi( int32_t A , int32_t B)
	{
	int32_t Resultat;
	
	Resultat = A / B;
	return Resultat;
	}
	/// \brief fonction d'addition de deux nombres de type int32_t
	///
	\n/// La fonction d'addition est polymorphe. c'est à dire qu'elle dépend
	/// du type de paramètres fournis . celle-ci correspend au type int32_T
	///
	/// \param A est un entier 32 Bits
	/// \Param B est un entier 32 Bits
	/// \return le reste de deux entiers 32 bits fournis en paramètres.
	
	/// Modulo avec des variables en entier 32 bit
	
	int32_t mod( int32_t A , int32_t B)
	{
	int32_t Resultat;
	
	Resultat = A % B;
	return Resultat;
	}
	
	
	using namespace std;
	
	int main()
	{ /// on déclare les variables , ici ce sont des entiers.
	int a, b, resultat;
	int choix;
	
	
	/// Choix du type de calculs (Addition,Soustraction,Multiplication,Division et modulo).
	cout <<"saisissez le chiffre corréspondant à l'operation désirée.\n"<< endl;
	
	cout <<"1 Addition"<< endl;
	cout <<"2 Soustraction"<< endl;
	cout <<"3 Multiplication"<< endl;
	cout <<"4 Division"<< endl;
	cout <<"5 Modulo"<< endl;
	cin >>choix;
	
	/// Le choix saisi par l'utilisateur est récupéré et renvoi au calcul correspondant
	switch (choix)
	{
	
	/// Addition
	case 1:
	printf("saisissez le premier nombre : ");
	scanf("%d", &a);
	printf("saisissez le deuxième nombre : ");
	scanf("%d", &b);
	
	resultat = add( a , b);
	cout<<"le resultat de l'addition "<<a<<" + "<<b<<" = "<<resultat<<endl;
	break;
	
	/// Soustraction
	case 2:
	printf("Entrer le premier nombre : ");
	scanf("%d", &a);
	printf("Entrer le second nombre : ");
	scanf("%d", &b);
	
	resultat = sub( a , b);
	cout<<"le resultat de la soustraction "<<a<<" - "<<b<<" = "<<resultat<<endl;
	break;
	
	/// multiplication
	case 3:
	printf("Entrer le premier nombre : ");
	scanf("%d", &a);
	printf("Entrer le second nombre : ");
	scanf("%d", &b);
	
	resultat = mul( a , b);
	cout<<"le resultat de la multiplication "<<a<<" * "<<b<<" = "<<resultat<<endl;
	break;
	/// Division
	
	case 4:
	printf("Entrer le premier nombre : ");
	scanf("%d", &a);
	printf("Entrer le second nombre : ");
	scanf("%d", &b);
	
	resultat = divi( a , b);
	cout<<"le resultat de la division "<<a<<" / "<<b<<" = "<<resultat<<endl;
	break;
	
	/// Modulo
	case 5:
	printf("Entrer le premier nombre : ");
	scanf("%d", &a);
	printf("Entrer le second nombre : ");
	scanf("%d", &b);
