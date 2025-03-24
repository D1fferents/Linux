CC=gcc
CFLAGS=-Wall -Wextra -pedantic -std=c99

all: 01noerrmsg 02rtnval 03errno 04merrno 05strerr 06perror 07perror2

01noerrmsg: 01noerrmsg.c
	$(CC) $(CFLAGS) -o 01noerrmsg 01noerrmsg.c

02rtnval: 02rtnval.c
	$(CC) $(CFLAGS) -o 02rtnval 02rtnval.c

03errno: 03errno.c
	$(CC) $(CFLAGS) -o 03errno 03errno.c

04merrno: 04merrno.c
	$(CC) $(CFLAGS) -o 04merrno 04merrno.c

05strerr: 05strerr.c
	$(CC) $(CFLAGS) -o 05strerr 05strerr.c

06perror: 06perror.c
	$(CC) $(CFLAGS) -o 06perror 06perror.c

07perror2: 07perror2.c
	$(CC) $(CFLAGS) -o 07perror2 07perror2.c

clean:
	rm -f 01noerrmsg 02rtnval 03errno 04merrno 05strerr 06perror 07perror2

