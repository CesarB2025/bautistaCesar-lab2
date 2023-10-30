
time:  main.o ipc.o time.o
	$(CC) -o $@ $?
ipc: ipc.c ipc.h
	$(CC) -c $?
lab2: lab2.h
	$(CC) -c $?

main: main.c lab2.h ipc.c time.c
	$(CC) -c $?
clean:
	-rm -f *.o
