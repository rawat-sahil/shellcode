void main(){
	asm("\
	needle0: jmp there\n\
	here:	pop %rsi\n\
			push $0x1\n\
			pop %rax\n\
			push $0x1\n\
			pop %rdi\n\
			push $0xd\n\
			pop %rdx\n\
			syscall\n\
			push $0x3c\n\
			pop %rax\n\
			xor %rdi, %rdi\n\
			syscall\n\
	there:	call here\n\
	.string \"hello world!\"\n\
	needle1: .octa 0xdeadbeef\n\
	");	

}