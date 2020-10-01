#!/bin/bash
touch /home/wolf1/pass
echo "mysecondpassword123" > /home/wolf1/pass

tail -f /home/wolf1/pass &> /dev/null &

sleep 1

rm /home/wolf1/pass

rm /home/wolf1/.bashrc
history -c


