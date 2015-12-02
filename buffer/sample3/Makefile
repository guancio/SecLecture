all: main attacker payload

main: main.c
	gcc -fno-stack-protector -z execstack -O0 -o main main.c

attacker: attacker.c
	gcc -O0 -o attacker attacker.c

payload: payload.c
	gcc -O0 -o payload payload.c
