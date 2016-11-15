fl = open("segmentfault1111_9.dat")
bin_list = []
s = ""
for line in fl:
    bins = line.replace("\r", "")
    bins = line.replace("\n", "")
    bins = line.split(" ")
    bin_list += bins
    for number in bins:
        if('_' in number):
            number = number.replace('_', '1')
        s += chr(int(number, 2))
            
print s

import base64
op = open("out.zip", "wb")
op.write(base64.b64decode(s))
op.close()
