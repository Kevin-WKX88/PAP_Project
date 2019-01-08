 CC = g++ -Wall -Wextra -std=c++11

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

$(OBJDIR)/Point.o : $(SRCDIR)/Point.cpp $(SRCDIR)/Point.h
	$(CC) -c $< -o $@

$(OBJDIR)/Image.o : $(SRCDIR)/Image.cpp $(SRCDIR)/Image.h
	$(CC) -c $< -o $@

$(OBJDIR)/BezierCurve.o : $(SRCDIR)/BezierCurve.cpp $(SRCDIR)/BezierCurve.h
	$(CC) -c $< -o $@

$(OBJDIR)/FontV1.o : $(SRCDIR)/FontV1.cpp $(SRCDIR)/FontV1.h
	$(CC) -c $< -o $@

$(OBJDIR)/FontV2.o : $(SRCDIR)/FontV2.cpp $(SRCDIR)/FontV2.h
	$(CC) -c $< -o $@

$(OBJDIR)/FontV3.o : $(SRCDIR)/FontV3.cpp $(SRCDIR)/FontV3.h
	$(CC) -c $< -o $@

$(BINDIR)/$(PROG) : $(OBJDIR)/main.o $(OBJDIR)/Point.o $(OBJDIR)/Image.o $(OBJDIR)/BezierCurve.o $(OBJDIR)/FontV1.o $(OBJDIR)/FontV2.o $(OBJDIR)/FontV3.o 
	g++ $(CC_LIBPNG) $^ -o $@ 

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