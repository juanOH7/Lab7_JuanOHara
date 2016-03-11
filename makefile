Ra.exe: Ra.o Rc.o
	g++ Ra.o Rc.o -o Rc.exe 
	
Ra.o:	Ra.cpp Rc.h
	g++ -c Ra.cpp 

Rc.o:	Rc.cpp Rc.h
	g++ -c Rc.cpp 
