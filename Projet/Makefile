CC = g++ -Wall -Wextra 

CC_LIBPNG =  `libpng-config --cflags --ldflags`
SRCDIR = src
OBJDIR = obj
BINDIR = bin
TESTDIR = tests
DOCDIR = doc
PROG = exe

all : $(BINDIR)/$(PROG)

$(OBJDIR)/main.o : $(SRCDIR)/main.cpp
	$(CC) -c $< -o $@

#$(OBJDIR)/Tuiles.o : $(SRCDIR)/Tuiles.c $(SRCDIR)/Tuiles.h
#	$(CC) -c $< -o $@

$(BINDIR)/$(PROG) : $(OBJDIR)/main.o 
	$(CC) $(CC_LIBPNG) $^ -o $@ 

#TEST UNITAIRE
# $(OBJDIR)/test.o: $(TESTDIR)/test.c
# 	$(CC) -c $< -o $@
# $(TESTDIR)/test : $(OBJDIR)/test.o $(OBJDIR)/Tuiles.o $(OBJDIR)/Grille.o $(OBJDIR)/Jeu.o $(OBJDIR)/Affichage.o
# 	$(CC) -o $@ $^ -lcunit

#DOXYGEN
# $(DOCDIR)/doxy : $(DOCDIR)/Doxyfile
# 	doxygen $<

clean :
	rm -rf $(OBJDIR)/*.o
	rm -rf $(BINDIR)/$(PROG)
	# rm -rf $(TESTDIR)/test
	# rm -rf doc/html
	# rm -rf doc/latex