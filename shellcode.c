void main(){
	asm("\
	needle0: jmp there\n\
	here:	pop %rsi\n\
			mov $0x1, %rax\n\
			mov $0x1, %rdi\n\
			mov $0xd, %rdx\n\
			syscall\n\
			mov $0x3c, %rax\n\
			mov $0x0, %rdi\n\
			syscall\n\
	there:	call here\n\
	.string \"hello world!\"\n\
	needle1: .octa 0xdeadbeef\n\
	");	

}