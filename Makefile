all:shellcode test

shellcode:shellcode.c
	gcc -g -no-pie -fno-stack-protector -z execstack -z norelro -o $@ $<

test:test.c
	gcc -g -no-pie -fno-stack-protector -z execstack -z norelro -o $@ $<

clean:
	rm shellcode test