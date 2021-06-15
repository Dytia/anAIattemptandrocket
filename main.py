from googlesearch import search
import asyncio
import datetime

async def Tsearch():
  a = datetime.datetime.now()
  print(a)

  query = 'replit'
  for i in search(query, tld="com", num=10, stop=10, pause=2):
    print(i)
  
  b = datetime.datetime.now()
  print(b)


asyncio.run(Tsearch())