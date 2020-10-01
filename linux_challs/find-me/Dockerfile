FROM ubuntu:19.10
RUN apt-get upgrade
RUN apt-get update
RUN apt-get install lsof
RUN apt install python -y
RUN useradd -d /home/wolf1/ -m -p wolfie -s /bin/bash wolf1
RUN echo "wolf1:wolfie" | chpasswd
RUN useradd -d /home/wolf2/ -m -p mysecondpassword123 -s /bin/bash wolf2
RUN echo "wolf2:mysecondpassword123" | chpasswd

WORKDIR /home/wolf1
COPY wolf2 /home/wolf2


RUN chown -R root:wolf2 /home/wolf2
RUN chmod -R 750 /home/wolf2


RUN chown wolf1 /home/wolf1
COPY script.sh /usr/bin/service.sh   
RUN chmod +x /usr/bin/service.sh

#RUN echo "touch /home/wolf1/pass" >> /home/wolf1/.bashrc
#RUN echo "echo test > /home/wolf1/pass" >> /home/wolf1/.bashrc


RUN echo "/usr/bin/service.sh" >> /home/wolf1/.bashrc

USER wolf1
CMD /bin/bash
