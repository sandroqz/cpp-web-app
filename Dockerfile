FROM httpd:2.4.29

COPY httpd.conf ./conf/httpd.conf
COPY hello.cpp Makefile ./cgi-bin/

RUN apt-get update && apt-get install -y build-essential
RUN make -C ./cgi-bin

EXPOSE 80
