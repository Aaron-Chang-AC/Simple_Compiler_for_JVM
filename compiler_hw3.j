.class public compiler_hw3
.super java/lang/Object
.method public static main([Ljava/lang/String;)V
.limit stack 50
.limit locals 50
	ldc 20
	istore 0
	ldc 3
	istore 1
	ldc 0
	istore 2
LABEL_BEGIN10:
	iload 2
	i2f
	ldc 3
	i2f
	fsub
	f2i
	ifle LABEL10
	goto LABEL_FALSE10
LABEL10:
START20:
	iload 1
	i2f
	ldc 3
	i2f
	fsub
	f2i
	ifeq LABEL20
	goto START21
LABEL20:
	iload 1
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(I)V
	iload 1
	ldc 1
	iadd
	istore 1
	goto EXIT20
START21:
	ldc "AAA"
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
EXIT20:
	iload 2
	ldc 1
	iadd
	istore 2
	goto LABEL_BEGIN10
LABEL_FALSE10:
	ldc 0.000000
	f2i
	istore 2
	ldc 3.000000
	f2i
	istore 1
	ldc 0
	istore 3
LABEL_BEGIN11:
	iload 2
	i2f
	ldc 3
	i2f
	fsub
	f2i
	iflt LABEL11
	goto LABEL_FALSE11
LABEL11:
	iload 2
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(I)V
	ldc 0.000000
	f2i
	istore 3
LABEL_BEGIN20:
	iload 3
	i2f
	ldc 3
	i2f
	fsub
	f2i
	iflt LABEL21
	goto LABEL_FALSE20
LABEL21:
	iload 3
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(I)V
	iload 3
	ldc 1
	iadd
	istore 3
	goto LABEL_BEGIN20
LABEL_FALSE20:
	iload 2
	ldc 1
	iadd
	istore 2
	goto LABEL_BEGIN11
LABEL_FALSE11:
	return
.end method
