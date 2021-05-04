<h1 align="center">🧰 best-libft 📚</h1>

<p align="center">
  <a href="https://fr.wikipedia.org/wiki/MacOS_Mojave" target="_blank">
    <img alt="platform: osx 10.14.x" src="https://img.shields.io/badge/platform-osx%20v10.14.x-red?style=flat-square"/>
  </a>
  <a href="https://fr.wikipedia.org/wiki/C_(langage)" target="_blank">
    <img alt="language: c" src="https://img.shields.io/badge/language-C-purple?style=flat-square"/>
  </a>
  <a href="https://profile.intra.42.fr/users/lduplain" target="_blank">
    <img alt="42 login: lduplain" src="https://img.shields.io/badge/42%20login-lduplain-2DD57B?style=flat-square"/>
  </a>
</p>

best-libft is a sorted libft (containing recreated libc functions) used for 42 projects.
Easy to use, created by Loïs Duplain (42login: lduplain, 42mail: lduplain@student.42lyon.fr)

## Installation

Clone it in your project like this:

```bash
.
└── my_project/
    ├── best-libft/
    └── sources/
        ├── another_file.c
        ├── again.c
        └── main.c  
```

How to clone best-libft ?

```bash
git clone https://github.com/LoisDuplain/best-libft.git
```

The lib is sorted in multi folders. If you wan't to get it in one folder called "libft" execute that command in best-libft folder:

```bash
make export
```

You now have a libft folder with all headers, source files and a valid Makefile directly in your project folder.

If you wan't to modify the target folder for export, let modify the TARGET variable in "best-libft/scripts/export.sh".

## Usage

You can now include "libft.h" in your C files like this:

```c
#include "libft.h"

int     main(void)
{
    return (0);
}
```

You can find description usage for every functions in the headers.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to execute "make end" command and verify everything is ok before push. 

## License
[MIT](https://choosealicense.com/licenses/mit/)

## Copyright
Loïs Duplain (lduplain) © 2020
