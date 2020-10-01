FROM ubuntu:19.10
RUN apt-get upgrade
RUN apt-get update
RUN apt-get install sudo -y
RUN useradd -d /home/wolf/ -m -p wolfie -s /bin/bash wolf
RUN echo "wolf:wolfie" | chpasswd

RUN chown wolf /home/wolf

WORKDIR /home/wolf1
COPY flag.txt /root/flag.txt
RUN rm -rf /opt
COPY opt/ /opt
COPY squid /opt/src/src/iamroot
RUN chmod u+s /opt/src/src/iamroot





USER wolf
CMD /bin/bash
