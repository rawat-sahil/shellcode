all:shellcode test modified_shellcode payload_generator

shellcode:shellcode.c
	gcc -g -no-pie -fno-stack-protector -z execstack -z norelro -o $@ $<

test:test.c
	gcc -g -no-pie -fno-stack-protector -z execstack -z norelro -o $@ $<

modified_shellcode:modified_shellcode.c
	gcc -g -no-pie -fno-stack-protector -z execstack -z norelro -o $@ $<

payload_generator: payload_generator.c
	gcc -g -o $@ $<

clean:
	rm shellcode test modified_shellcode payload_generator