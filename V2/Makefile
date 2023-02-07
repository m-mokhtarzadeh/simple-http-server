all: server

clean:
	@rm -rf *.o
	@rm -rf server

server: main.o httpd.o
	gcc -static -o server $^

main.o: main.c httpd.h
	gcc -static -c -o main.o main.c

httpd.o: httpd.c httpd.h
	gcc -static -c -o httpd.o httpd.c

