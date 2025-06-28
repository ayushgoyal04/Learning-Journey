import time

# print(time.ctime(0))
# # epoch = when your computer thinks time began
#
# print(time.time()) # return current seconds since epoch
#
# print(time.ctime(time.time()))
#
#
# time_object = time.localtime()
# print(time_object)
# local_time = time.strftime("%B %D %Y %H:%M:%S", time_object)
# print(local_time)

# time_object = time.gmtime()

time_string = "4 March, 2024"
time_object = time.strptime(time_string, "%d %B, %Y")
print(time_object)

time_tuple = (2024, 3, 4, 5, 20, 0, 0, 0, 0)
time_string = time.asctime(time_tuple)
time_string = time.mktime(time_tuple)
print(time_string)