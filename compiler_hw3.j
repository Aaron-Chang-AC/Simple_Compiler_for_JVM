.class public compiler_hw3
.super java/lang/Object
.method public static main([Ljava/lang/String;)V
.limit stack 50
.limit locals 50
	ldc 0
	istore 0
	ldc 3
	istore 1
START0:
	iload 0
	i2f
	ldc 20
	i2f
	fsub
	f2i
	ifeq LABEL0
	goto START1
LABEL0:
	ldc "a is equal to 20"
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	goto EXIT0
START1:
	iload 1
	i2f
	ldc 3
	i2f
	fsub
	f2i
	ifeq LABEL1
	goto START2
LABEL1:
	ldc "B is: "
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	iload 1
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(I)V
	iload 1
	i2f
	ldc 1.000000
	fsub
	f2i
	istore 1
	goto EXIT0
START2:
EXIT0:
	iload 1
	i2f
	ldc 3.000000
	fmul
	ldc 4.000000
	fadd
	f2i
	istore 1
	iload 1
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(I)V
	return
.end method
