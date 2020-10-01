FROM ubuntu:latest
RUN apt-get upgrade
RUN apt-get update

RUN useradd -d /home/dark/ -m -p darkCTF -s /bin/bash dark
RUN echo "dark:darkCTF" | chpasswd
RUN mkdir /home/.secretdoor
COPY vault /home/.secretdoor
WORKDIR /home/dark
RUN rm $(which base64)
RUN rm $(which strings)



USER dark

CMD /bin/bash

