#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string filmCategorieEnfant[3];
    filmCategorieEnfant[0] = "Shrek";
    filmCategorieEnfant[1] = "RoiLion";
    filmCategorieEnfant[2] = "Nemo";

    string filmCategorieAdos[3];
    filmCategorieAdos[0] = "IronMan";
    filmCategorieAdos[1] = "Avengers";
    filmCategorieAdos[2] = "DoctorStrange";

    string filmCategorieAdulte[3];
    filmCategorieAdulte[0] = "ShutterIsland";
    filmCategorieAdulte[1] = "Inception";
    filmCategorieAdulte[2] = "Interstellar";

    int n = 0;
    int age = get_int("Quel age avez vous ?");

    if(age < 11){
        printf("Vous nous vous conseillons les films de la catégorie enfant\n ");
        for(int i=0; i<3; i++){
            char f = get_char("voulez vous regardez le film %s ?(n/y)\n", filmCategorieEnfant[i]);
            if(f == 'n'){
                n = n+1;
            }else if(f == 'y'){
                i=i+3;
                printf("Très bon choix ! votre film est salle numéro 7");
            }else{
                printf("erreur\n");
            }
        }

    }
    if(n >= 3){
        age = 12;
    }

    if(age>=11 && age<18){
        n=0;
        printf("Vous nous vous conseillons les films de la catégorie ados\n ");
        for(int i=0; i<3; i++){
            char f = get_char("voulez vous regardez le film %s ?(n/y)\n", filmCategorieAdos[i]);
            if(f == 'n'){
                n = n+1;
            }else if(f == 'y'){
                i=i+3;
                printf("Très bon choix ! votre film est salle numéro 8");
            }else{
                printf("erreur \n");

            }
        }

    }
    if(n >= 3){
        age = 19;
    }
    if(age>=18){
        n =0;
        printf("Vous nous vous conseillons les films de la catégorie adulte\n ");
        for(int i=0; i<3; i++){
            char f = get_char("voulez vous regardez le film %s ?(n/y)\n", filmCategorieAdulte[i]);
            if(f == 'n'){
                n = n+1;
            }else if(f == 'y'){
                i=i+3;
                printf("Très bon choix ! votre film est salle numéro 9");
            }else{
                printf("erreur\n");
            }
        }

    }
    if(n >= 3){
        printf("aucun des films que nous proposons en ce moment est a votre goût ! désolé..");
    }


}