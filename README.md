PROJECT PAP

# Courbes de Bézier et police de caractères

# Info 
Le code devra être commenté en utilisant la syntaxe de **Doxygen**.
Le rapport sera écrit en LATEX et inclura les choix, les problèmes techniques qui se posent et les solutions trouvées (la conception (dont un diagramme UML complet) et réalisation).

# Instalation 
brew install libpng

OR

cp ./scripts/makefile.darwin makefile
make 
sudo make install
make clean

## Pas sûr
cd /usr/local/lib
sudo ln -s libpng15.dylib ./libpng15.15.dylib

# To compile 
g++ `libpng-config --cflags --ldflags` file.cpp

# Makefile
Depuis Eclipse : Problème ...
https://help.eclipse.org/neon/index.jsp?topic=%2Forg.eclipse.cdt.doc.user%2Fgetting_started%2Fcdt_w_import.htm
make DEPUIS terminal

# Language 
+ C++

# Authors
+ Kevin XU - ENSIIE Student
+ Ziheng LI - ENSIIE Student