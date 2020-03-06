obj:=$(wildcard *.c)
oto=$(subst .c,.o,$(obj))
all:$(oto)
$(oto):%.o:%.c
	-gcc -c $< -o $@
clean:
	echo $(obj) $(oto)
