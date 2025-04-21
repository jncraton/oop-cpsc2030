all:

%: %.cc
	/opt/gcc-latest/bin/g++ -Wall -Werror -O0 -static -std=c++23 -fmodules -fsearch-include-path bits/std.cc $< -o $@

clean:
	rm -rf gcm.cache
	rm -f input hello vars 
	rm -f conditional while for
	rm -f add fact greetfn 
	rm -f point rect private-bank constructor
	rm -f circle list
	rm -f hammer
