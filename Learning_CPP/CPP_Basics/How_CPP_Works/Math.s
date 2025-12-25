	.file	"Math.cpp"
	.text
	.globl	_Z3LogPKc
	.def	_Z3LogPKc;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z3LogPKc
_Z3LogPKc:
.LFB0:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "Message\0"
	.text
	.globl	_Z8Multiplyii
	.def	_Z8Multiplyii;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z8Multiplyii
_Z8Multiplyii:
.LFB1:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	_Z3LogPKc
	movl	16(%rbp), %eax
	imull	24(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev8, Built by MSYS2 project) 15.2.0"
