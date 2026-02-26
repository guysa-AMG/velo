dependency:
	mkdir -p temp

	mkdir -p build/utils/lib
	mkdir -p build/utils/include
	mkdir -p build/lib 
	mkdir -p build/include

	g++ -c src/utils/log/logger.cpp -o temp/logger.o
	cp src/utils/log/*.h build/utils/include
	
	g++ -c src/velo.cpp -I build/utils/include -L build/utils/lib -L /usr/local/lib -lSDL3  -llogger   -o temp/velo.o
	
	cp src/*.h build/include
	ar rcs build/lib/libvelo.a temp/velo.o
	ar rcs build/utils/lib/liblogger.a temp/logger.o

clean:
	rm -rf build temp build

run:
	
	g++ main.cpp -Ibuild/include -Ibuild/utils/include -Lbuild/lib -lvelo   -o build/game
	build/game