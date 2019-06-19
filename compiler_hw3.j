.class public compiler_hw3
.super java/lang/Object
.method public static main([Ljava/lang/String;)V
.limit stack 50
.limit locals 50
	ldc 20
	istore 0
	ldc 2
	istore 1
START10:
	iload 0
	i2f
	ldc 40
	i2f
	fsub
	f2i
	ifeq LABEL10
	goto START11
LABEL10:
	ldc "a is equal to 40"
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	goto EXIT10
START11:
	iload 0
	i2f
	ldc 40
	i2f
	fsub
	f2i
	ifgt LABEL11
	goto START12
LABEL11:
	ldc "a is larger than 40"
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
START20:
	iload 1
	i2f
	ldc 0
	i2f
	fsub
	f2i
	ifeq LABEL20
	goto START21
LABEL20:
	ldc "AAA"
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	goto EXIT20
START21:
	ldc "BBB"
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
EXIT20:
	goto EXIT10
START12:
	ldc 666
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(I)V
START22:
	iload 1
	i2f
	ldc 0
	i2f
	fsub
	f2i
	ifeq LABEL21
	goto START23
LABEL21:
	ldc "ggg"
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
	goto EXIT21
START23:
	ldc "hhh"
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
EXIT21:
EXIT10:
	ldc 3
	istore 2
START13:
	iload 2
	i2f
	ldc 3
	i2f
	fsub
	f2i
	ifeq LABEL12
	goto START14
LABEL12:
	iload 0
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(I)V
	goto EXIT11
START14:
EXIT11:
START15:
	iload 2
	i2f
	ldc 3
	i2f
	fsub
	f2i
	ifeq LABEL13
	goto START16
LABEL13:
	iload 0
	getstatic java/lang/System/out Ljava/io/PrintStream;
	swap
	invokevirtual java/io/PrintStream/println(I)V
	goto EXIT12
START16:
EXIT12:
	return
.end method
