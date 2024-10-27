	.file	"main.cpp"
	.text
	.section	.text$_ZSt23__is_constant_evaluatedv,"x"
	.linkonce discard
	.globl	_ZSt23__is_constant_evaluatedv
	.def	_ZSt23__is_constant_evaluatedv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZSt23__is_constant_evaluatedv
_ZSt23__is_constant_evaluatedv:
.LFB1:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movl	$0, %eax
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt11char_traitsIcE6lengthEPKc,"x"
	.linkonce discard
	.globl	_ZNSt11char_traitsIcE6lengthEPKc
	.def	_ZNSt11char_traitsIcE6lengthEPKc;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt11char_traitsIcE6lengthEPKc
_ZNSt11char_traitsIcE6lengthEPKc:
.LFB245:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	call	_ZSt23__is_constant_evaluatedv
	testb	%al, %al
	je	.L4
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
	jmp	.L5
.L4:
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	strlen
	nop
.L5:
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN4ItemD2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN4ItemD2Ev
	.def	_ZN4ItemD2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN4ItemD2Ev
_ZN4ItemD2Ev:
.LFB2227:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	.refptr._ZTV4Item(%rip), %rax
	leaq	16(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	subq	$-128, %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	16(%rbp), %rax
	addq	$80, %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	16(%rbp), %rax
	addq	$8, %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5MovieD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5MovieD1Ev
	.def	_ZN5MovieD1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5MovieD1Ev
_ZN5MovieD1Ev:
.LFB2231:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	.refptr._ZTV5Movie(%rip), %rax
	leaq	16(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	addq	$160, %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN4ItemD2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN4GameD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN4GameD1Ev
	.def	_ZN4GameD1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN4GameD1Ev
_ZN4GameD1Ev:
.LFB2235:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	.refptr._ZTV4Game(%rip), %rax
	leaq	16(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	addq	$192, %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	16(%rbp), %rax
	addq	$160, %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN4ItemD2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZN5MusicD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZN5MusicD1Ev
	.def	_ZN5MusicD1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN5MusicD1Ev
_ZN5MusicD1Ev:
.LFB2239:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	.refptr._ZTV5Music(%rip), %rax
	leaq	16(%rax), %rdx
	movq	16(%rbp), %rax
	movq	%rdx, (%rax)
	movq	16(%rbp), %rax
	addq	$160, %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN4ItemD2Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "PG-13\0"
.LC1:
	.ascii "The Matrix\0"
.LC2:
	.ascii "DVD\0"
.LC3:
	.ascii "Movie\0"
.LC5:
	.ascii "CD Projekt\0"
.LC6:
	.ascii "Hard\0"
.LC7:
	.ascii "Cyberpunk 2077\0"
.LC8:
	.ascii "Blu-ray\0"
.LC9:
	.ascii "Game\0"
.LC11:
	.ascii "Queen\0"
.LC12:
	.ascii "Greatest Hits\0"
.LC13:
	.ascii "CD\0"
.LC14:
	.ascii "Music\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB2224:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$1512, %rsp
	.seh_stackalloc	1512
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	call	__main
	pxor	%xmm0, %xmm0
	movups	%xmm0, 608(%rbp)
	movups	%xmm0, 624(%rbp)
	movd	%xmm0, 640(%rbp)
	movl	$123, 628(%rbp)
	movl	$9, 624(%rbp)
	movl	$27, 620(%rbp)
	leaq	703(%rbp), %rax
	movq	%rax, 1368(%rbp)
	nop
	nop
	leaq	703(%rbp), %rdx
	leaq	656(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC0(%rip), %rdx
	movq	%rax, %rcx
.LEHB0:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
.LEHE0:
	leaq	751(%rbp), %rax
	movq	%rax, 1360(%rbp)
	nop
	nop
	leaq	751(%rbp), %rdx
	leaq	704(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC1(%rip), %rdx
	movq	%rax, %rcx
.LEHB1:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
.LEHE1:
	leaq	799(%rbp), %rax
	movq	%rax, 1352(%rbp)
	nop
	nop
	leaq	799(%rbp), %rdx
	leaq	752(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC2(%rip), %rdx
	movq	%rax, %rcx
.LEHB2:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
.LEHE2:
	leaq	847(%rbp), %rax
	movq	%rax, 1344(%rbp)
	nop
	nop
	leaq	847(%rbp), %rdx
	leaq	800(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC3(%rip), %rdx
	movq	%rax, %rcx
.LEHB3:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
.LEHE3:
	movq	608(%rbp), %rax
	movq	616(%rbp), %rdx
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movq	624(%rbp), %rax
	movq	632(%rbp), %rdx
	movq	%rax, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movl	640(%rbp), %eax
	movl	%eax, -16(%rbp)
	leaq	-48(%rbp), %r8
	leaq	800(%rbp), %rdx
	leaq	416(%rbp), %rax
	leaq	656(%rbp), %rcx
	movq	%rcx, 64(%rsp)
	leaq	704(%rbp), %rcx
	movq	%rcx, 56(%rsp)
	movsd	.LC4(%rip), %xmm0
	movsd	%xmm0, 48(%rsp)
	movl	$1, 40(%rsp)
	leaq	752(%rbp), %rcx
	movq	%rcx, 32(%rsp)
	movl	$101, %r9d
	movq	%rax, %rcx
.LEHB4:
	call	_ZN5MovieC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE2tmiS5_idS5_S5_
.LEHE4:
	leaq	800(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	847(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	752(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	799(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	704(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	751(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	656(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	703(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	416(%rbp), %rax
	movq	%rax, %rcx
.LEHB5:
	call	_ZNK5Movie8toStringEv
	leaq	416(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK5Movie9playOnDVDEv
	leaq	416(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK5Movie11playOnVideoEv
.LEHE5:
	leaq	895(%rbp), %rax
	movq	%rax, 1336(%rbp)
	nop
	nop
	leaq	895(%rbp), %rdx
	leaq	848(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC5(%rip), %rdx
	movq	%rax, %rcx
.LEHB6:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
.LEHE6:
	leaq	943(%rbp), %rax
	movq	%rax, 1328(%rbp)
	nop
	nop
	leaq	943(%rbp), %rdx
	leaq	896(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC6(%rip), %rdx
	movq	%rax, %rcx
.LEHB7:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
.LEHE7:
	leaq	991(%rbp), %rax
	movq	%rax, 1320(%rbp)
	nop
	nop
	leaq	991(%rbp), %rdx
	leaq	944(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC7(%rip), %rdx
	movq	%rax, %rcx
.LEHB8:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
.LEHE8:
	leaq	1039(%rbp), %rax
	movq	%rax, 1312(%rbp)
	nop
	nop
	leaq	1039(%rbp), %rdx
	leaq	992(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC8(%rip), %rdx
	movq	%rax, %rcx
.LEHB9:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
.LEHE9:
	leaq	1087(%rbp), %rax
	movq	%rax, 1304(%rbp)
	nop
	nop
	leaq	1087(%rbp), %rdx
	leaq	1040(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC9(%rip), %rdx
	movq	%rax, %rcx
.LEHB10:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
.LEHE10:
	movq	608(%rbp), %rax
	movq	616(%rbp), %rdx
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movq	624(%rbp), %rax
	movq	632(%rbp), %rdx
	movq	%rax, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movl	640(%rbp), %eax
	movl	%eax, -16(%rbp)
	leaq	-48(%rbp), %r8
	leaq	1040(%rbp), %rdx
	leaq	192(%rbp), %rax
	leaq	848(%rbp), %rcx
	movq	%rcx, 72(%rsp)
	leaq	896(%rbp), %rcx
	movq	%rcx, 64(%rsp)
	leaq	944(%rbp), %rcx
	movq	%rcx, 56(%rsp)
	movsd	.LC10(%rip), %xmm0
	movsd	%xmm0, 48(%rsp)
	movl	$1, 40(%rsp)
	leaq	992(%rbp), %rcx
	movq	%rcx, 32(%rsp)
	movl	$102, %r9d
	movq	%rax, %rcx
.LEHB11:
	call	_ZN4GameC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE2tmiS5_idS5_S5_S5_
.LEHE11:
	leaq	1040(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	1087(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	992(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	1039(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	944(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	991(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	896(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	943(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	848(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	895(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	192(%rbp), %rax
	movq	%rax, %rcx
.LEHB12:
	call	_ZNK4Game8toStringEv
	leaq	192(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK4Game8playOnCDEv
	leaq	192(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK4Game11playOnVideoEv
.LEHE12:
	leaq	1135(%rbp), %rax
	movq	%rax, 1296(%rbp)
	nop
	nop
	leaq	1135(%rbp), %rdx
	leaq	1088(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC11(%rip), %rdx
	movq	%rax, %rcx
.LEHB13:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
.LEHE13:
	leaq	1183(%rbp), %rax
	movq	%rax, 1288(%rbp)
	nop
	nop
	leaq	1183(%rbp), %rdx
	leaq	1136(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC12(%rip), %rdx
	movq	%rax, %rcx
.LEHB14:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
.LEHE14:
	leaq	1231(%rbp), %rax
	movq	%rax, 1280(%rbp)
	nop
	nop
	leaq	1231(%rbp), %rdx
	leaq	1184(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC13(%rip), %rdx
	movq	%rax, %rcx
.LEHB15:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
.LEHE15:
	leaq	1271(%rbp), %rax
	movq	%rax, 1272(%rbp)
	nop
	nop
	leaq	1271(%rbp), %rdx
	leaq	1232(%rbp), %rax
	movq	%rdx, %r8
	leaq	.LC14(%rip), %rdx
	movq	%rax, %rcx
.LEHB16:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
.LEHE16:
	movq	608(%rbp), %rax
	movq	616(%rbp), %rdx
	movq	%rax, -48(%rbp)
	movq	%rdx, -40(%rbp)
	movq	624(%rbp), %rax
	movq	632(%rbp), %rdx
	movq	%rax, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movl	640(%rbp), %eax
	movl	%eax, -16(%rbp)
	leaq	-48(%rbp), %r8
	leaq	1232(%rbp), %rdx
	movq	%rbp, %rax
	leaq	1088(%rbp), %rcx
	movq	%rcx, 64(%rsp)
	leaq	1136(%rbp), %rcx
	movq	%rcx, 56(%rsp)
	movsd	.LC15(%rip), %xmm0
	movsd	%xmm0, 48(%rsp)
	movl	$1, 40(%rsp)
	leaq	1184(%rbp), %rcx
	movq	%rcx, 32(%rsp)
	movl	$103, %r9d
	movq	%rax, %rcx
.LEHB17:
	call	_ZN5MusicC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE2tmiS5_idS5_S5_
.LEHE17:
	leaq	1232(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	1271(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	1184(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	1231(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	1136(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	1183(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	1088(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	1135(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	movq	%rbp, %rax
	movq	%rax, %rcx
.LEHB18:
	call	_ZNK5Music8toStringEv
	movq	%rbp, %rax
	movq	%rax, %rcx
	call	_ZNK5Music8playOnCDEv
.LEHE18:
	movl	$0, %ebx
	movq	%rbp, %rax
	movq	%rax, %rcx
	call	_ZN5MusicD1Ev
	leaq	192(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN4GameD1Ev
	leaq	416(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5MovieD1Ev
	movl	%ebx, %eax
	jmp	.L50
.L35:
	movq	%rax, %rbx
	leaq	800(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L13
.L34:
	movq	%rax, %rbx
.L13:
	leaq	847(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	752(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L14
.L33:
	movq	%rax, %rbx
.L14:
	leaq	799(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	704(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L15
.L32:
	movq	%rax, %rbx
.L15:
	leaq	751(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	656(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L16
.L31:
	movq	%rax, %rbx
.L16:
	leaq	703(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB19:
	call	_Unwind_Resume
.L42:
	movq	%rax, %rbx
	leaq	1040(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L18
.L41:
	movq	%rax, %rbx
.L18:
	leaq	1087(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	992(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L19
.L40:
	movq	%rax, %rbx
.L19:
	leaq	1039(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	944(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L20
.L39:
	movq	%rax, %rbx
.L20:
	leaq	991(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	896(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L21
.L38:
	movq	%rax, %rbx
.L21:
	leaq	943(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	848(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L22
.L37:
	movq	%rax, %rbx
.L22:
	leaq	895(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	jmp	.L23
.L48:
	movq	%rax, %rbx
	leaq	1232(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L25
.L47:
	movq	%rax, %rbx
.L25:
	leaq	1271(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	1184(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L26
.L46:
	movq	%rax, %rbx
.L26:
	leaq	1231(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	1136(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L27
.L45:
	movq	%rax, %rbx
.L27:
	leaq	1183(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	leaq	1088(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L28
.L44:
	movq	%rax, %rbx
.L28:
	leaq	1135(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	jmp	.L29
.L49:
	movq	%rax, %rbx
	movq	%rbp, %rax
	movq	%rax, %rcx
	call	_ZN5MusicD1Ev
	jmp	.L29
.L43:
	movq	%rax, %rbx
.L29:
	leaq	192(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN4GameD1Ev
	jmp	.L23
.L36:
	movq	%rax, %rbx
.L23:
	leaq	416(%rbp), %rax
	movq	%rax, %rcx
	call	_ZN5MovieD1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
	call	_Unwind_Resume
.LEHE19:
.L50:
	addq	$1512, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.def	__gxx_personality_seh0;	.scl	2;	.type	32;	.endef
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2224:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2224-.LLSDACSB2224
.LLSDACSB2224:
	.uleb128 .LEHB0-.LFB2224
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L31-.LFB2224
	.uleb128 0
	.uleb128 .LEHB1-.LFB2224
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L32-.LFB2224
	.uleb128 0
	.uleb128 .LEHB2-.LFB2224
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L33-.LFB2224
	.uleb128 0
	.uleb128 .LEHB3-.LFB2224
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L34-.LFB2224
	.uleb128 0
	.uleb128 .LEHB4-.LFB2224
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L35-.LFB2224
	.uleb128 0
	.uleb128 .LEHB5-.LFB2224
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L36-.LFB2224
	.uleb128 0
	.uleb128 .LEHB6-.LFB2224
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L37-.LFB2224
	.uleb128 0
	.uleb128 .LEHB7-.LFB2224
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L38-.LFB2224
	.uleb128 0
	.uleb128 .LEHB8-.LFB2224
	.uleb128 .LEHE8-.LEHB8
	.uleb128 .L39-.LFB2224
	.uleb128 0
	.uleb128 .LEHB9-.LFB2224
	.uleb128 .LEHE9-.LEHB9
	.uleb128 .L40-.LFB2224
	.uleb128 0
	.uleb128 .LEHB10-.LFB2224
	.uleb128 .LEHE10-.LEHB10
	.uleb128 .L41-.LFB2224
	.uleb128 0
	.uleb128 .LEHB11-.LFB2224
	.uleb128 .LEHE11-.LEHB11
	.uleb128 .L42-.LFB2224
	.uleb128 0
	.uleb128 .LEHB12-.LFB2224
	.uleb128 .LEHE12-.LEHB12
	.uleb128 .L43-.LFB2224
	.uleb128 0
	.uleb128 .LEHB13-.LFB2224
	.uleb128 .LEHE13-.LEHB13
	.uleb128 .L44-.LFB2224
	.uleb128 0
	.uleb128 .LEHB14-.LFB2224
	.uleb128 .LEHE14-.LEHB14
	.uleb128 .L45-.LFB2224
	.uleb128 0
	.uleb128 .LEHB15-.LFB2224
	.uleb128 .LEHE15-.LEHB15
	.uleb128 .L46-.LFB2224
	.uleb128 0
	.uleb128 .LEHB16-.LFB2224
	.uleb128 .LEHE16-.LEHB16
	.uleb128 .L47-.LFB2224
	.uleb128 0
	.uleb128 .LEHB17-.LFB2224
	.uleb128 .LEHE17-.LEHB17
	.uleb128 .L48-.LFB2224
	.uleb128 0
	.uleb128 .LEHB18-.LFB2224
	.uleb128 .LEHE18-.LEHB18
	.uleb128 .L49-.LFB2224
	.uleb128 0
	.uleb128 .LEHB19-.LFB2224
	.uleb128 .LEHE19-.LEHB19
	.uleb128 0
	.uleb128 0
.LLSDACSE2224:
	.text
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc,"x"
	.linkonce discard
	.align 2
	.globl	_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
	.def	_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc
_ZN9__gnu_cxx11char_traitsIcE6lengthEPKc:
.LFB2241:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	$0, -8(%rbp)
	jmp	.L52
.L53:
	addq	$1, -8(%rbp)
.L52:
	movb	$0, -9(%rbp)
	movq	16(%rbp), %rdx
	movq	-8(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	leaq	-9(%rbp), %rax
	movq	%rax, %rdx
	call	_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
	xorl	$1, %eax
	testb	%al, %al
	jne	.L53
	movq	-8(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD1Ev
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD1Ev
_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD1Ev:
.LFB2351:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt15__new_allocatorIcED2Ev
	nop
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC16:
	.ascii "basic_string: construction from null is not valid\0"
	.section	.text$_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_
_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_:
.LFB2498:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$48, %rsp
	.seh_stackalloc	48
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	32(%rbp), %rbx
	movq	32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
	movq	48(%rbp), %rdx
	movq	%rdx, %r8
	movq	%rax, %rdx
	movq	%rbx, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC1EPcRKS3_
	cmpq	$0, 40(%rbp)
	jne	.L57
	leaq	.LC16(%rip), %rax
	movq	%rax, %rcx
.LEHB20:
	call	_ZSt19__throw_logic_errorPKc
.L57:
	movq	40(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt11char_traitsIcE6lengthEPKc
	movq	40(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rcx
	movq	40(%rbp), %rdx
	movq	32(%rbp), %rax
	movl	%esi, %r9d
	movq	%rcx, %r8
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
.LEHE20:
	jmp	.L60
.L59:
	movq	%rax, %rbx
	movq	32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderD1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB21:
	call	_Unwind_Resume
	nop
.LEHE21:
.L60:
	addq	$48, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2498:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2498-.LLSDACSB2498
.LLSDACSB2498:
	.uleb128 .LEHB20-.LFB2498
	.uleb128 .LEHE20-.LEHB20
	.uleb128 .L59-.LFB2498
	.uleb128 0
	.uleb128 .LEHB21-.LFB2498
	.uleb128 .LEHE21-.LEHB21
	.uleb128 0
	.uleb128 0
.LLSDACSE2498:
	.section	.text$_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1IS3_EEPKcRKS3_,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_,"x"
	.linkonce discard
	.globl	_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
	.def	_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_
_ZN9__gnu_cxx11char_traitsIcE2eqERKcS3_:
.LFB2499:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movzbl	(%rax), %edx
	movq	24(%rbp), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	sete	%al
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZNSt15__new_allocatorIcED2Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt15__new_allocatorIcED2Ev
	.def	_ZNSt15__new_allocatorIcED2Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt15__new_allocatorIcED2Ev
_ZNSt15__new_allocatorIcED2Ev:
.LFB2507:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC1EPS4_,"x"
	.linkonce discard
	.align 2
	.globl	_ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC1EPS4_
	.def	_ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC1EPS4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC1EPS4_
_ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC1EPS4_:
.LFB2536:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movq	24(%rbp), %rdx
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	ret
	.seh_endproc
	.section	.text$_ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD1Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD1Ev
	.def	_ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD1Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD1Ev
_ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD1Ev:
.LFB2539:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L67
	movq	16(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv
.L67:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA2539:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2539-.LLSDACSB2539
.LLSDACSB2539:
.LLSDACSE2539:
	.section	.text$_ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD1Ev,"x"
	.linkonce discard
	.seh_endproc
	.section	.text$_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag,"x"
	.linkonce discard
	.align 2
	.globl	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag
_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tag:
.LFB2533:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$96, %rsp
	.seh_stackalloc	96
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	%r8, 32(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, -56(%rbp)
	movq	32(%rbp), %rax
	movq	%rax, -8(%rbp)
	nop
	movq	-56(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	subq	-16(%rbp), %rax
	nop
	movq	%rax, -40(%rbp)
	movq	-40(%rbp), %rax
	cmpq	$15, %rax
	jbe	.L72
	leaq	-40(%rbp), %rdx
	movq	16(%rbp), %rax
	movl	$0, %r8d
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERyy
	movq	%rax, %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc
	movq	-40(%rbp), %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEy
	jmp	.L73
.L72:
	movq	16(%rbp), %rax
	movq	%rax, -32(%rbp)
	movq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv
	nop
.L73:
	movq	16(%rbp), %rdx
	leaq	-48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardC1EPS4_
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv
	movq	%rax, %rcx
	movq	32(%rbp), %rdx
	movq	24(%rbp), %rax
	movq	%rdx, %r8
	movq	%rax, %rdx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsEPcPKcS7_
	movq	$0, -48(%rbp)
	movq	-40(%rbp), %rdx
	movq	16(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEy
	leaq	-48(%rbp), %rax
	movq	%rax, %rcx
	call	_ZZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_M_constructIPKcEEvT_S8_St20forward_iterator_tagEN6_GuardD1Ev
	nop
	addq	$96, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
_ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
	.align 8
.LC4:
	.long	-1546188227
	.long	1077149040
	.align 8
.LC10:
	.long	1374389535
	.long	1078853304
	.align 8
.LC15:
	.long	1202590843
	.long	1076755169
	.ident	"GCC: (Rev3, Built by MSYS2 project) 13.2.0"
	.def	strlen;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZN5MovieC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE2tmiS5_idS5_S5_;	.scl	2;	.type	32;	.endef
	.def	_ZNK5Movie8toStringEv;	.scl	2;	.type	32;	.endef
	.def	_ZNK5Movie9playOnDVDEv;	.scl	2;	.type	32;	.endef
	.def	_ZNK5Movie11playOnVideoEv;	.scl	2;	.type	32;	.endef
	.def	_ZN4GameC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE2tmiS5_idS5_S5_S5_;	.scl	2;	.type	32;	.endef
	.def	_ZNK4Game8toStringEv;	.scl	2;	.type	32;	.endef
	.def	_ZNK4Game8playOnCDEv;	.scl	2;	.type	32;	.endef
	.def	_ZNK4Game11playOnVideoEv;	.scl	2;	.type	32;	.endef
	.def	_ZN5MusicC1ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE2tmiS5_idS5_S5_;	.scl	2;	.type	32;	.endef
	.def	_ZNK5Music8toStringEv;	.scl	2;	.type	32;	.endef
	.def	_ZNK5Music8playOnCDEv;	.scl	2;	.type	32;	.endef
	.def	_Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_local_dataEv;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE12_Alloc_hiderC1EPcRKS3_;	.scl	2;	.type	32;	.endef
	.def	_ZSt19__throw_logic_errorPKc;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE10_M_disposeEv;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERyy;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEPc;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE11_M_capacityEy;	.scl	2;	.type	32;	.endef
	.def	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE7_M_dataEv;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_S_copy_charsEPcPKcS7_;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE13_M_set_lengthEy;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZTV5Music, "dr"
	.globl	.refptr._ZTV5Music
	.linkonce	discard
.refptr._ZTV5Music:
	.quad	_ZTV5Music
	.section	.rdata$.refptr._ZTV4Game, "dr"
	.globl	.refptr._ZTV4Game
	.linkonce	discard
.refptr._ZTV4Game:
	.quad	_ZTV4Game
	.section	.rdata$.refptr._ZTV5Movie, "dr"
	.globl	.refptr._ZTV5Movie
	.linkonce	discard
.refptr._ZTV5Movie:
	.quad	_ZTV5Movie
	.section	.rdata$.refptr._ZTV4Item, "dr"
	.globl	.refptr._ZTV4Item
	.linkonce	discard
.refptr._ZTV4Item:
	.quad	_ZTV4Item
