PROJECT_ROOT = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

.PHONY:		clean

OBJS = Utils.o Proc.o
OBJS1 = Utils.o Proc1.o 

ifeq ($(BUILD_MODE),debug)
	CFLAGS += -g
else ifeq ($(BUILD_MODE),run)
	CFLAGS += -O2
else
	$(error Build mode $(BUILD_MODE) not supported by this Makefile)
endif

all:	Proc Proc1

Proc:	$(OBJS)
	$(CXX) -o $@ $^

Proc1:	$(OBJS1)
	$(CXX) -o $@ $^

%.o:	$(PROJECT_ROOT)%.cpp
	$(CXX) -c $(CFLAGS) $(CXXFLAGS) $(CPPFLAGS) -o $@ $<


clean:
	rm -fr Proc Proc1 $(OBJS) $(OBJS1)
