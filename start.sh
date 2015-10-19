#!/bin/bash

sudo insmod task5.ko
sudo chmod a+r+w /sys/task5/task5
echo "7" > /sys/task5/task5