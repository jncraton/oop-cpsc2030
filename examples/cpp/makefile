all:

%: %.cc
	/opt/gcc-latest/bin/g++ -Wall -Werror -O0 -static -std=c++23 -fmodules -fsearch-include-path bits/std.cc $< -o $@

clean:
	rm -rf input hello vars conditional while for gcm.cache
