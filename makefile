dependency:
	mkdir temp
	g++ -c src/uitls/log/logger.cpp -o temp/logger.o
	ar rcs build/utils/liblogger.a temp/logger.o
run:
	
	g++ src/velo.cpp -I build/utils/logger/logger.h -lSDL3  -llogger   -o build/velo
	build/velo