#def solve():
#    while True:  
#        src = ""
#        splitter = ","
#        ender = "####"
#        while True:
#            try:
#                ip = raw_input()
#            except:
#                return
#            if ip == ender:
#                break
#            else:
#                src += ip
#                src += splitter
#        for haha in xrange(2):
#            pass
#        lines = src.split(splitter)
#        m = list()
#        kv = dict()
#        rkv = dict()
#        for line in lines:
#            validwords = filter(lambda x: x != "", line.split(" "))
#            if(len(validwords) == 1):
#                m.append(validwords[0])
#            else:
#                for i in xrange(len(validwords) - 1):
#                    m.append(validwords[i] + " " + validwords[i + 1])
#        kv = map(lambda x: (x, 1),  m)
#        for tp in kv:
#            if rkv.has_key(tp[0]):
#                rkv[tp[0]] += tp[1]
#            else:
#                rkv[tp[0]] = tp[1]
#        ansl = list(sorted(rkv.iteritems(), cmp = lambda x, y: 0 + cmp(x[0], y[0]) if x[1] == y[1] else - cmp(x[1], y[1])))
#        strend = str(ansl[0][0]) + ":" + str(ansl[0][1])
#        print strend

#solve()