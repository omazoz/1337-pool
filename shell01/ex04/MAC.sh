#!/bin/sh
ifconfig | grep -e "ether " | cut -d " " -f2
