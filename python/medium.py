


# 0830 0950

# 0930 1030
# 1000 1210
# 1025 1135
# 1120 1310


[8.5, 9.83], [9.5, 10.5],  [10.0, 12.17], [10.42, 11.58], [11.33, 13.17]


def timetodecimal(time):
    t = time.split()
    f1 = t[0][0:2]
    l1 = t[0][2:4]
    f2 = t[1][0:2]
    l2 = t[1][2:4]
    st = float(f1)+round(float(l1)/60,2)
    ed = float(f2)+round(float(l2)/60,2)
    return [st,ed]


a = input("")
b = input("")
c = input("")
d = input("")
e = input("")





