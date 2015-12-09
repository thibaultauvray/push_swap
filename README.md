# Push_swap

[Sujet push_swap] (https://github.com/thibaultauvray/push_swap/blob/master/subject-push_swap.pdf)

Vous devez faire un programme qui prend en paramètre la pile a sous la forme d’une liste de nombres. Le premier paramètre est au sommet de la pile.
Le but est de trier la pile avec le moins d’opérations possibles, avec comme opération :

* sa : swap a - intervertit les 2 premiers éléments au sommet de la pile a. (ne fait rien s’il n’y en a qu’un ou aucun).
* sb : swap b - intervertit les 2 premiers éléments au sommet de la pile b. (ne fait rien s’il n’y en a qu’un ou aucun).
* ss : sa et sb en même temps.
* pa : push a - prend le premier élément au sommet de b et le met sur a. (ne fait rien si b est vide).
* pb : push b - prend le premier élément au sommet de a et le met sur b. (ne fait rien si a est vide).
* ra : rotate a - décale d’une position tous les éléments de la pile a. (vers le haut, le premier élément devient le dernier).
* rb : rotate b - décale d’une position tous les éléments de la pile b. (vers le haut, le premier élément devient le dernier).
* rr : ra et rb en meme temps.
* rra : reverse rotate a (vers le bas, le dernier élément devient le premier).
* rrb : reverse rotate b (vers le bas, le dernier élément devient le premier).
* rrr : rra et rrb en même temps.

# Usages

```
./push_swap 2 1 3 6 5 8
sa pb pb pb sa pa pa pa
```
