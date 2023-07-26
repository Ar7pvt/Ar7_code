# the url from news.api  link-- https://newsapi.org/

import requests
import json

query=input("what type of news you want to see ")
url=f"https://newsapi.org/v2/everything?q={query}&from=2023-06-18&sortBy=publishedAt&apiKey=c9c82be98cc1455bb01d5f91fb46d7a7"
r=requests.get(url)
news=json.loads(r.text)
# print(news,type(news))

for article in news["articles"]:
    print(article["title"])
    print(article["description"])
    print( "-------------------------------------------------------------------------s") 
