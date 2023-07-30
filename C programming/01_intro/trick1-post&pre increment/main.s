	.file	"main.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "v:%d , z:%d\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$1, 28(%esp)
	movl	$2, 24(%esp)
	movl	28(%esp), %eax
	leal	1(%eax), %edx
	movl	%edx, 28(%esp)
	movl	24(%esp), %edx
	addl	%edx, %eax
	movl	%eax, 20(%esp)
	movl	28(%esp), %eax
	leal	1(%eax), %edx
	movl	%edx, 28(%esp)
	addl	$1, 28(%esp)
	movl	28(%esp), %edx
	addl	%edx, %eax
	movl	%eax, 16(%esp)
	movl	16(%esp), %eax
	movl	%eax, 8(%esp)
	movl	20(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.ident	"GCC: (i686-posix-dwarf-rev1, Built by MinGW-W64 project) 6.2.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
