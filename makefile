dependency:
	mkdir -p temp

	mkdir -p build/utils
	
	g++ -c src/utils/log/logger.cpp -o temp/logger.o
	cp src/utils/log/*.h build/utils/
	ar rcs build/utils/liblogger.a temp/logger.o

clean:
	rm -rf build
run:
	g++ src/velo.cpp -I build/utils -L build/utils -L /usr/local/lib -lSDL3  -llogger   -o build/velo
	build/velo