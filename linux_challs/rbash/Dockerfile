FROM ubuntu:16.04

RUN apt-get update && apt-get install -y openssh-server
RUN mkdir /var/run/sshd

RUN sed 's@session\s*required\s*pam_loginuid.so@session optional pam_loginuid.so@g' -i /etc/pam.d/sshd
RUN sed -i 's/#PasswordAuthentication yes/PasswordAuthentication yes/' /etc/ssh/sshd_config
RUN sed -i 's/ChallengeResponseAuthentication no/ChallengeResponseAuthentication yes/' /etc/ssh/sshd_config

RUN chmod go-rx /usr/bin/passwd 

RUN useradd -m wolfie -s /bin/rbash
RUN echo 'wolfie:wolfie' | chpasswd

RUN mkdir /home/wolfie/imp

COPY motd /etc/motd
COPY flag.txt /home/wolfie/imp/flag.txt


RUN mkdir /home/wolfie/bin 
RUN chmod 755 /home/wolfie/bin

RUN echo "PATH=$HOME/bin" >> /home/wolfie/.bashrc
RUN echo "export PATH" >> /home/wolfie/.bashrc

RUN ln -s /bin/cat /home/wolfie/bin/

EXPOSE 22
CMD ["/usr/sbin/sshd", "-D"]
