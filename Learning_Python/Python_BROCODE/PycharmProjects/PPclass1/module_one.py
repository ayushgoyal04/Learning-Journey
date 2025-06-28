# __name__ == '__main__'
# 1. module can run as a standalone program
# 2. Module can be imported and shared by other modules
#
# print(__name__)
# import module_two
# print(module_two.__name__)

def hello():
    print("Hello")


if __name__ == '__main__':
    hello()
#     print("Running this module directly")
# else:
#     print("Running this module indirectly")
#

