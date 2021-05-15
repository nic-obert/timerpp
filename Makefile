CC=g++

TARGET=target/timerpp.a
HEADER=src/timerpp.hh
OBJECT=target/timerpp.o
SOURCES=src/timer.cpp
INSTALL_HEADER=/usr/include/timerpp.hh
INSTALL_ARCHIVE=/usr/lib/libtimerpp.a


all: target $(TARGET)


$(OBJECT): $(SOURCES) $(HEADER)
	$(CC) -c $< -o $@


target:
	mkdir target


$(TARGET): $(OBJECT)
	ar rcs $@ $^


clean:
	rm -f target/*


install: $(TARGET)
	sudo cp -f $< $(INSTALL_ARCHIVE)
	sudo cp -f $(HEADER) $(INSTALL_HEADER)


uninstall:
	sudo rm -f $(INSTALL_ARCHIVE)
	sudo rm -f $(INSTALL_HEADER)
