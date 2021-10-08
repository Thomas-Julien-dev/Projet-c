#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)

{
    string filmCategorieEnfants [3] = {"myckey", "la reine des neiges", "cars"};
    string filmCategorieAdos [3] = {" Naruto" , "chair de poule", "jumanji"};
    string filmCategorieAdultes [3] ={ "The Shining", "La Nonne" , "Conjuring"};

   int age = get_int ("quel est ton âge ?");

   if (age<11)
   {
       printf("Films Catégorie Enfants\n");
      for(int i = 0; i < 3 ; i++)
      {
       printf ("%s\n",filmCategorieEnfants[i] );
       string voirfilm = get_string ("Veux-tu voir ce film ?");
       if (strcmp(voirfilm, "oui") == 0)
       {
           return 0;
       }
      }
   }
   if (age>11 && age<17)
   {
       printf("Films Catégorie Ados\n");
        for(int i = 0; i < 3 ; i++)
      {
       printf ("%s\n",filmCategorieAdos[i] );
        string voirfilm = get_string ("Veux-tu voir ce film ?");
       if (strcmp(voirfilm, "oui") == 0)
       {
           return 0;
       }
      }
   }
   if (age >18)
    {
        printf("Films Catégorie Adultes\n");
         for(int i = 0; i < 3 ; i++)
       {
       printf ("%s\n",filmCategorieAdultes[i]);
        string voirfilm = get_string ("Veux-tu voir ce film ?");
       if (strcmp(voirfilm, "oui") == 0)
       {
           return 0;
       }
      }
    }




}
