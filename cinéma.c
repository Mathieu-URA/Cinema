#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string filmCategorieEnfant[3]; //On déclare nos 3 films pour enfant dans un tableau
    filmCategorieEnfant[0] = "Shrek";
    filmCategorieEnfant[1] = "RoiLion";
    filmCategorieEnfant[2] = "Nemo";

    string filmCategorieAdos[3]; //On déclare nos 3 films pour ados dans un tableau
    filmCategorieAdos[0] = "IronMan";
    filmCategorieAdos[1] = "Avengers";
    filmCategorieAdos[2] = "DoctorStrange";

    string filmCategorieAdulte[3]; //On déclare nos 3 films pour adulte dans un tableau
    filmCategorieAdulte[0] = "ShutterIsland";
    filmCategorieAdulte[1] = "Inception";
    filmCategorieAdulte[2] = "Interstellar";

    int n = 0; // variable n permetant de reset la variable age a la tranche d'age suivante lorsque les 3 films pour de votre tranche d'age ne vous plaisent pas
    int age = get_int("Quel age avez vous ?"); // Variable age qui viens demander votre age

    if (age < 11) // si vous avez moins de 11 ans on vous propose des films pour enfant
    {
        printf("Vous nous vous conseillons les films de la catégorie enfant\n ");
        for (int i = 0; i < 3; i++) //une boucle qui boucle 3 fois pour proposer 3 films
        {
            char f = get_char("voulez vous regardez le film %s ?(n/y)\n", filmCategorieEnfant[i]);
            //est ce que le film vous plait ?f sera votre réponse
            if (f == 'n') 
            {
                n = n + 1; // si vous dite non alors la variable n s'incrémente de 1
            }
            else if (f == 'y') 
            {
                i = i + 3; // si vous choissisez un film alors la boucle s'arrete et on vous indique le numero de salle de cinéma
                printf("Très bon choix ! votre film est salle numéro 7");
            }
            else
            {
                printf("erreur\n"); // si vous ecrivez autre chose que (y ou n) une erreur est indiqué
            }
        }

    }
    if (n >= 3) 
    {
        age = 12; // si vous refusez 3 film de la catégorie précédente alors on passe la variable de tel sorte a ce qu'on vous propose les films de la categorie suivante
    }

    if (age >= 11 && age < 18) // si vous avez entre 11 et 18 ans on vous propose des films pour ados
    {
        n = 0;
        printf("Vous nous vous conseillons les films de la catégorie ados\n ");
        for (int i = 0; i < 3; i++) //une boucle qui boucle 3 fois pour proposer 3 films
        {
            char f = get_char("voulez vous regardez le film %s ?(n/y)\n", filmCategorieAdos[i]);
            //est ce que le film vous plait ?f sera votre réponse
            if (f == 'n')
            {
                n = n + 1; // si vous dite non alors la variable n s'incrémente de 1
            }
            else if
            (f == 'y')
            {
                i = i + 3;// si vous choissisez un film alors la boucle s'arrete et on vous indique le numero de salle de cinéma
                printf("Très bon choix ! votre film est salle numéro 8");
            }
            else
            {
                printf("erreur \n"); // si vous ecrivez autre chose que (y ou n) une erreur est indiqué

            }
        }

    }
    if (n >= 3)
    {
        age = 19;
    }
    if (age >= 18) // si vous avez plus de 18 ans on vous propose des films pour adulte
    {
        n = 0;
        printf("Vous nous vous conseillons les films de la catégorie adulte\n ");
        for (int i = 0; i < 3; i++) //une boucle qui boucle 3 fois pour proposer 3 films
        {
            char f = get_char("voulez vous regardez le film %s ?(n/y)\n", filmCategorieAdulte[i]);
            //est ce que le film vous plait ?f sera votre réponse
            if (f == 'n')
            {
                n = n + 1;// si vous dite non alors la variable n s'incrémente de 1
            }
            else if (f == 'y')
            {
                i = i + 3;// si vous choissisez un film alors la boucle s'arrete et on vous indique le numero de salle de cinéma
                printf("Très bon choix ! votre film est salle numéro 9");
            }
            else
            {
                printf("erreur\n"); // si vous ecrivez autre chose que (y ou n) une erreur est indiqué
            }
        }

    }
    if (n >= 3)
    {
        printf("aucun des films que nous proposons en ce moment est a votre goût ! désolé.."); // dans le dernier cas ou on vous a proposez tout les films à l'affiche en ce moment nous vous indiquons notre regret de pas pouvoir vous satisfaire
    }


}