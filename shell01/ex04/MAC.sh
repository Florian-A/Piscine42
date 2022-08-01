#!/bin/sh
ifconfig -a link | awk '/ether/ {print $3}'
