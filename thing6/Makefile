CC = g++

foobar: foo.o bar.o foobar.o
	@$(CC) foobar.o foo.o bar.o -o foobar
	@mkdir lib
	@mv foobar.o lib/foobar.o
	@mv foo.o lib/foo.o
	@mv bar.o lib/bar.o

foobar.o:
	@$(CC) -c foobar.cpp -o foobar.o

foo.o: foo.cpp foo.h
	@$(CC) -c foo.cpp -o foo.o

bar.o: bar.cpp bar.h
	@$(CC) -c bar.cpp -o bar.o

clean:
	@rm foobar
	@rm -rf lib