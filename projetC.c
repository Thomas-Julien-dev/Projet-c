#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)

{    //je créer 3 tableaux contenant chacun 3 éléments
    string filmCategorieEnfants [3] = {"myckey", "la reine des neiges", "cars"};
    string filmCategorieAdos [3] = {" Naruto" , "chair de poule", "jumanji"};
    string filmCategorieAdultes [3] ={ "The Shining", "La Nonne" , "Conjuring"};

   int age = get_int ("quel est ton âge ?");

   if (age<11)//conditions
   {
       printf("Films Catégorie Enfants\n");
      for(int i = 0; i < 3 ; i++)// boucle 
      {
       printf ("%s\n",filmCategorieEnfants[i] );
       string voirfilm = get_string ("Veux-tu voir ce film ?");
       if (strcmp(voirfilm, "oui") == 0)
       {
           return 0;// Retour à l'état initial
       }
      }
   }
   if (age>11 && age<17)//conditions
   {
       printf("Films Catégorie Ados\n");
        for(int i = 0; i < 3 ; i++)//boucle
      {
       printf ("%s\n",filmCategorieAdos[i] );
        string voirfilm = get_string ("Veux-tu voir ce film ?");
       if (strcmp(voirfilm, "oui") == 0)
       {
           return 0;// Retour à l'état initial
       }
      }
   }
   if (age >18)//conditions
    {
        printf("Films Catégorie Adultes\n");
         for(int i = 0; i < 3 ; i++)//boucle
       {
       printf ("%s\n",filmCategorieAdultes[i]);
        string voirfilm = get_string ("Veux-tu voir ce film ?");
       if (strcmp(voirfilm, "oui") == 0)
       {
           return 0;// Retour à l'état initial
       }
      }
    }
