# Programme cinéma
cahier des charges :
Vous allez au cinéma, trois catégories de films sont proposés à l'affiche en fonction de votre âge. 

Vous réaliserez un code permettant d'afficher automatiquement à une personne quel film elle peut aller voir en fonction de son âge.

Niveau 1 : 
Chaque catégorie (filmCategorieEnfant, filmCategorieAdos, filmCategorieAdulte) de film correspond à un tableau de données (trois films par catégorie). 

- Si elle a moins de 11 ans, elle peut aller voir Films Categorie Enfant
- Si elle a entre 11 et 17, elle peut aller voir Films Categorie Ados
- Si elle a plus de 18 ans, elle peut aller voir Films Categorie Adulte

Niveau 2 : 
L'utilisateur peut dire si oui ou non il souhaite aller voir le film proposé. 
Par exemple : 
Film catégorie adulte contient "The Shining", "La Nonne" et "Conjuring". On propose à une personne ayant 20 ans d'aller voir The Shining, si elle dit oui, on s'arrête dans les propositions, sinon, on lui propose La Nonne. Idem pour le dernier élément du tableau. Si elle ne veut voir aucun de ces trois films. 

Niveau 3 (optionnel) : 
Si aucun des films de la catégorie adulte ne lui convient, on lui propose de choisir une autre catégorie (une catégorie enfant ou ados), en lui proposant à nouveau les choix respectifs de ces catégories.