.class public compiler_hw3
.super java/lang/Object
.method public static main([Ljava/lang/String;)V
.limit stack 50
.limit locals 50
	ldc 1
	istore 0
LABEL_BEGIN0:
	iload 0
	i2f
	ldc 6
	i2f
	fsub
	f2i
	iflt LABEL0
	goto LABEL_FALSE0
LABEL0:
	iload 0
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(I)V
	iload 0
	ldc 1
	iadd
	istore 0
	goto LABEL_BEGIN0
LABEL_FALSE0:
	return
.end method
