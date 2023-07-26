import time 
import asyncio
import requests


async def function1():
    URL = "https://www.google.com/search?tbm=isch&q=4%20k%20image&tbs=imgo:1#imgrc=PO2VmiMk3OBXsM"
    response = requests.get(URL)
    open("62_download1.jpg", "wb").write(response.content)
    print("func1")
    return "Alok"

async def function2():
    URL = "https://www.google.com/search?tbm=isch&q=4%20k%20image&tbs=imgo:1#imgrc=13RSCkFS18sS5M"
    response = requests.get(URL)
    open("62_download2.jpg", "wb").write(response.content)
    print("func2")

async def function3():
    URL = "https://www.google.com/search?q=image+360+p&tbm=isch&ved=2ahUKEwiE09yg1Y2AAxWSl2MGHWekAA4Q2-cCegQIABAA&oq=image+360+p&gs_lcp=CgNpbWcQAzIGCAAQCBAeMgYIABAIEB4yBggAEAgQHjIGCAAQCBAeMgYIABAIEB4yBggAEAgQHjIGCAAQCBAeMgYIABAIEB4yBggAEAgQHjIHCAAQGBCABDoECCMQJzoICAAQgAQQsQM6CggAEIoFELEDEEM6BwgAEIoFEEM6BAgAEAM6BQgAEIAEOgQIABAeOgYIABAFEB5Q6RBYzDxg-EVoAHAAeACAAfQBiAHKC5IBBTAuNC4zmAEAoAEBqgELZ3dzLXdpei1pbWfAAQE&sclient=img&ei=_vewZITcHpKvjuMP58iCcA#imgrc=Q3pzilwxI31OvM"
    response = requests.get(URL)
    open("62_download3.jpg", "wb").write(response.content)
    print("func3")

async def main():
    # All are print at instance
    l=await asyncio.gather(   
        function1(),
        function2(),
        function3()
    )
    print(l)

# it print one by one
    # await function1()
    # await function2()
    # await function3()
asyncio.run(main())




# Python How to Download a File from a URL

# import requests

# URL = "https://instagram.com/favicon.ico"
# response = requests.get(URL)
# open("instagram.ico", "wb").write(response.content)