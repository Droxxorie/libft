# Libft

Libft est une bibliothéque standard C personnalisée, dévelopée dans le cadre du cursus de l'**École 42**. Elle offre un ensemble de fonctions fondamentales pour la gestion de la mémoire, les chaînes de caractères, les listes chaînées, les fonctions mathématiques, l'affichage formaté, ainsi que fiverse fonctions utilitaires.

---

## Structure

```
libft/
│
├── include/
│   └── libft.h              # Header principal
│
├── sources/
│   ├── ft_is/               # Fonctions de test de caractères (isalnum, isalpha, etc.)
│   ├── ft_lst/              # Fonctions de gestion de listes chaînées
│   ├── ft_mem/              # Fonctions de gestion de la mémoire
│   ├── ft_put/              # Fonctions d'écriture sur file descriptor
│   ├── ft_str/              # Fonctions de manipulation de chaînes
│   ├── gnl/                 # get_next_line (lecture de fichier ligne par ligne)
│   ├── maths/               # Fonctions mathématiques (abs, pow, min, etc.)
│   ├── printf/              # Implémentation de ft_printf
│   └── utils/               # Fonctions utilitaires (itoa, split, etc.)
│
└── Makefile                 # Compilation
```

---

## Compilation

Pour compiler la bibliothèque :

```sh
make
```

Cela génére un fichier `libft.a`.

Netoyer les fichier objets :

```sh
make clean
```

Supprimer tous les fichier compilés :

```sh
make fclean
```

Recompiler à partir de zéro :

```sh
make re
```

## Utilisation :

Inclure le header dans un projet :

```sh
#include "libft.h"
```

Et lier l'exécutable avec `libft.a` :

```sh
cc main.c libft.a
```

---

## Fonctions disponibles :

### Fonctions de test sur caractères
- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_iswhitespace`

### Géstion de la mémoire :
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`, `ft_realloc`

### Géstion des chaînes de caractères :
- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_strjoin`, `ft_strtrim`, `ft_substr`, `ft_strmapi`, `ft_striteri`

### Conversion
- `ft_atoi`, `ft_itoa`, `ft_tolower`, `ft_toupper`, `ft_atodbl`, `ft_dbltoa`

### Affichage
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Listes chaînées
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

### Mathématiques
- `ft_abs`, `ft_fabs`, `ft_min`, `ft_max`, `ft_argmin`, `ft_argmax`, `ft_pow`

### Utilitaire
- `ft_split`, `ft_count_words`, `ft_intlen`, `ft_free_str_array`, `ft_free_2d_str_array`

### get_next_line
- `get_next_line`

### ft_printf (printf custom)
- `ft_printf`, `ft_printchar_fd`, `ft_printstr_fd`, `ft_printnbr_fd`, `ft_printunbr_fd`, `ft_printhex_fd`, `ft_printaddr_fd`, `ft_printdbl`

---

Projet réalisé par **[@eraad](https://profile.intra.42.fr/users/eraad)** dans le cadre du cursus de l'**École 42**.
