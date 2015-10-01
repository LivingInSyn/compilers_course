	.text
	.file	"binSearch.llvm.bc"
	.globl	binSearch
	.align	16, 0x90
	.type	binSearch,@function
binSearch:                              # @binSearch
	.cfi_startproc
# BB#0:                                 # %entry
	pushq	%rbp
.Ltmp0:
	.cfi_def_cfa_offset 16
.Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp2:
	.cfi_def_cfa_register %rbp
	pushq	%rbx
	pushq	%rax
.Ltmp3:
	.cfi_offset %rbx, -24
	cmpl	$1, %esi
	jne	.LBB0_3
# BB#1:                                 # %Check_Value
	movl	(%rdi), %eax
	cmpl	%eax, %edx
	je	.LBB0_9
# BB#2:                                 # %Return_not_present
	movl	$-1, %eax
	jmp	.LBB0_9
.LBB0_3:                                # %Check_Middle
	movq	%rsp, %r9
	leaq	-16(%r9), %rax
	movq	%rax, %rsp
                                        # kill: RAX<def> RSP<kill>
	leaq	-16(%rax), %rcx
	movq	%rcx, %rsp
	movq	%rsp, %r10
	leaq	-16(%r10), %rcx
	movq	%rcx, %rsp
	movq	%rsp, %r11
	leaq	-16(%r11), %r8
	movq	%r8, %rsp
	movq	%rsp, %rcx
	leaq	-16(%rcx), %rbx
	movq	%rbx, %rsp
	movq	%rdi, -16(%r9)
	movl	%esi, -16(%rax)
	movl	%edx, -16(%r10)
	movl	-16(%rax), %ebx
	movl	%ebx, %eax
	shrl	$31, %eax
	addl	%ebx, %eax
	sarl	%eax
	movl	%eax, -16(%r11)
	movq	-16(%r9), %rbx
	addl	(%rbx), %eax
	movl	%eax, -16(%rcx)
	cmpl	%edx, %eax
	je	.LBB0_9
# BB#4:                                 # %Recursive_Call
	jge	.LBB0_6
# BB#5:                                 # %Upper_Half
	movl	%esi, %eax
	shrl	%eax
	incl	%eax
	subl	%eax, %esi
	movq	%r8, %rdi
	jmp	.LBB0_8
.LBB0_6:                                # %Lower_Half
	movl	%esi, %eax
	shrl	%eax
	testb	$1, %sil
	je	.LBB0_7
# BB#10:                                # %Lower_Odd
	incl	%eax
.LBB0_7:                                # %Lower_Even
	subl	%eax, %esi
.LBB0_8:                                # %Lower_Even
	callq	binSearch
.LBB0_9:                                # %Return_This_Pointer
	leaq	-8(%rbp), %rsp
	popq	%rbx
	popq	%rbp
	retq
.Ltmp4:
	.size	binSearch, .Ltmp4-binSearch
	.cfi_endproc

	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:
	pushq	%rbx
.Ltmp5:
	.cfi_def_cfa_offset 16
.Ltmp6:
	.cfi_offset %rbx, -16
	movl	$data, %edi
	movl	$10, %esi
	movl	$12, %edx
	callq	binSearch
	movl	%eax, %ebx
	movl	$msg, %edi
	xorl	%eax, %eax
	movl	%ebx, %esi
	callq	printf
	movl	%ebx, %eax
	popq	%rbx
	retq
.Ltmp7:
	.size	main, .Ltmp7-main
	.cfi_endproc

	.type	msg,@object             # @msg
	.section	.rodata,"a",@progbits
	.globl	msg
msg:
	.asciz	"got: %d\n"
	.size	msg, 9

	.type	data,@object            # @data
	.globl	data
	.align	16
data:
	.long	10                      # 0xa
	.long	11                      # 0xb
	.long	12                      # 0xc
	.long	13                      # 0xd
	.long	14                      # 0xe
	.long	15                      # 0xf
	.long	16                      # 0x10
	.long	17                      # 0x11
	.long	18                      # 0x12
	.long	19                      # 0x13
	.size	data, 40


	.section	".note.GNU-stack","",@progbits
