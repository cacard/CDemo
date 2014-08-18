	.file	"93.compile_reorder.c"
	.text
	.p2align 4,,15
.globl m
	.type	m, @function
m:
	pushl	%ebp
	movl	%esp, %ebp
	movl	8(%ebp), %eax
	movl	%eax, value
	popl	%ebp
	movl	$1, isValueUpdated
	ret
	.size	m, .-m
	.p2align 4,,15
.globl main
	.type	main, @function
main:
	leal	4(%esp), %ecx
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%ecx
	subl	$4, %esp
	movl	$1, (%esp)
	call	m
	addl	$4, %esp
	popl	%ecx
	popl	%ebp
	leal	-4(%ecx), %esp
	ret
	.size	main, .-main
.globl value
	.bss
	.align 4
	.type	value, @object
	.size	value, 4
value:
	.zero	4
.globl isValueUpdated
	.align 4
	.type	isValueUpdated, @object
	.size	isValueUpdated, 4
isValueUpdated:
	.zero	4
	.ident	"GCC: (GNU) 4.1.2 20080704 (Red Hat 4.1.2-54)"
	.section	.note.GNU-stack,"",@progbits
