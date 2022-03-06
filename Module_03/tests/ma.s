	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 14	sdk_version 10, 14
	.intel_syntax noprefix
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
xor eax, eax
	mov	rbp, rsp
	mov	dword ptr [rbp - 4], 0
	mov	byte ptr [rbp - 6], 100
	mov	rax, qword ptr [rbp - 16]
	mov	dword ptr [rax], 2147483647
	## InlineAsm Start
	mov	r10, 45
	## InlineAsm End
	movsx	eax, byte ptr [rbp - 6]
	pop	rbp
	ret
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
