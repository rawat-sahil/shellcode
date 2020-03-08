all:shellcode test modified_shellcode

shellcode:shellcode.c
	gcc -g -no-pie -fno-stack-protector -z execstack -z norelro -o $@ $<

test:test.c
	gcc -g -no-pie -fno-stack-protector -z execstack -z norelro -o $@ $<

modified_shellcode:modified_shellcode.c
	gcc -g -no-pie -fno-stack-protector -z execstack -z norelro -o $@ $<


clean:
	rm shellcode test modified_shellcode