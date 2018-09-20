PROJECT_ROOT = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

.PHONY:		clean


#OBJS = CompileProc.o
FILES = /cygdrive/c/workspace_cplus/CompileProc/CompileProc.cpp

#需要编译哪些东西
#all:	CompileProc CompileProcII

all:	CompileProc

CompileProc:	$(FILES)
    # cpp文件一次性编译链接并生产可执行程序，--save-temps可以保留4个阶段生成的文件(预编译、编译、汇编、链接)
    # CompileProc.ii是预编译后生成的; (g++ -std=c++11 -E CompileProc.cpp)
    # CompileProc.s是编译后生成的汇编文件;(g++ -std=c++11 -S CompileProc.ii)
    # CompileProc.o是汇编之后生成的; (g++ -std=c++11 -c CompileProc.s)
    # CompileProc.exe是链接后生成的二进制文件;(g++ -std=c++11 -o CompileProc CompileProc.o)
	$(CXX) --save-temps -o $@ $^

#CompileProcII: CompileProc.ii

#%.o:	$(PROJECT_ROOT)%.cpp
    #g++ -c    -o CompileProc.o /cygdrive/c/workspace_cplus/CompileProc/CompileProc.cpp
#	$(CXX) -c $(CFLAGS) $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

#%.ii:	$(PROJECT_ROOT)%.cpp
    #g++ -E    -o CompileProc.ii /cygdrive/c/workspace_cplus/CompileProc/CompileProc.cpp
#	$(CXX) -E $(CFLAGS) $(CXXFLAGS) $(CPPFLAGS) -o $@ $<


clean:
	rm -fr CompileProc $(OBJS) $(OBJS1)

