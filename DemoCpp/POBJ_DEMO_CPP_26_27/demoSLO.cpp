/*----------------------------------------------------------------------------------
// Projet Name 			: POBJ_DemoCPP_25_26
// File Name 			: demoSLO.cpp
// Creation Date 		: 19.09.2024
// Modification Date	: 18.11.2025
//
// Author 				: Philou (Ph. Bovey)
//
// Version				: 1.4
//
// Description          : demo for SLO2's team  
//						 
// Remarks				: 
//----------------------------------------------------------------------------------*/

//-- standart libraries --// 
			// equivalent at the <stdio.h> in C
			// for the objects linked to the string 
			// to use a C library -> here the normalised type 

//-- personnal libraries -> class --//


//-- main programme -> entry point of the programm --//
void main()
{
	//--- variable's declaration ---//
	//-- static memory -> "ROM" 
	//-- primitive type  --// 
	//-- integer --//
						//-> 1 octet			//-> true ou false 
						//-> 1 octet
						//-> 2 octet
						//-> 4 octet 
						//-> 4 octet 
						//-> 8 octet
	
	//-- example with normalized type --// 

	//

	//-- real --//
						//-> 4 octet 
						//-> 8 octet 

	bool A = true;		//-> not linked to a numeric value




	//-- declaration of table (static memory) --// 
 

	//-- pointer declaration --// 
						//-> primitive type 

	//-- using the dynamique memories with a primitive variable --//
	

	//-- 


	ptdemo = new std::string; 

	std::string* ptdemo;			//-> object type 


	//-- value assignment on a variable -> static memory --// 
	valI = 10;

	//-- object--// 
	//description : -> class -> objet -> () <- constructor calling 
	std::string chaine("hello"), chaine2;

	//-- déclaration d'objet type 
	Personnage slo2Student(50);		//object statique 
	Personnage *slo2Etudiant;		//object dynamique 

	couteau couteauSuisse("couteau suisse", 1);  

	slo2Student.taille = 160; 


	//-- démo statique --// 
	user demoStatique(0,0);
	user* demo2; 

	demo2 = new user(10, 100); 

	demo2->LIM_MAX = 10; 
	
	demoStatique.FctDemoStatique(0, 0); 

	user::FctDemoStatique(1, 10); 

	//user::AfficherMsgUser(demo2); 

	demoStatique.LIM_MAX = 0; 

	 

	//user::AfficherMsgUser(demoStatique);
	demoStatique.AfficherMsgUser(user::msg1); 
	
	


	//-- object instantiation --// 
	chaine = "HELLO"; 
	chaine2 = "SLO"; 

	//-- instancier un objet dynamique --// 
	slo2Etudiant = new Personnage(); 

	//-- afficher vie sur objet statique 
	slo2Student.AfficherVie(); 

	//-- affficher vie sur objet dynamique
	slo2Etudiant->AfficherVie(); 

	//-- tester une exception --// 
	try 
	{
		slo2Etudiant->Attaquer(); 
	}
	catch (std::exception &erreur)
	{
		//-- affichage exception --// 
		std::cerr << "cause de l'exception : " << erreur.what() << std::endl; 
		std::cerr << "type d'erreur : " << typeid(erreur).name() << std::endl; 
	}

	slo2Etudiant->ChoisirArme(); 
	slo2Etudiant->SupprimerArme(); 


	//-- destruction de l'objet dynamique
	delete slo2Etudiant; 

	slo2Etudiant->AfficherVie(); 

	//-- use of an object -> methode utilisation 
	//-> lenth of character string 
	valI = chaine.length(); 

	//-> search the occurence number, here in a string with find methode 
	valI = chaine.find("on");

	//-- msg user --// 
	std::cout << chaine << " " << chaine2 << std::endl;
	std::cout << "HELLO SLO !! \n" << std::endl;

	//-- function calling --// 
	Diviser(10, 5, valF); 
	Diviser(valI, 5.5); 

	//-- example to take a keyboard value --//
	std::cin >> valI;		// integer value pour valeur entière 
	std::cin >> valF;		// real value   
	std::cin >> chaine;		// string with an object 
	std::cin >> valC; 		// character value

	//-- object copies --// 
	chaine2 = chaine;			

	// REMARQUE : static en C : garder la valeur d'une variable dans une fct 
	//            static en C++ : pas besoin d'objet pour utiliser des méthodes ou attributs static 

	//-- dynamique

	system("pause"); 
}




