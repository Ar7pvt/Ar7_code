import requests

url="https://www.google.com/search?gs_ssp=eJzj4tTP1TewzEouK1ZgNGB0YPBir8wvLSlNSgUAUQAG7g&q=youtube&oq=&aqs=chrome.5.35i39i362l5j46i39i199i362i465j35i39i362l2.768317049j0j7&sourceid=chrome&ie=UTF-8"

# r=requests.get(url)
# print(r.text)    # it print complete html code of web page
# print(r.status_code)  # it print status eg 200 for complete running code ,401 unauthorised request



#post request it does not store data in browser 
data={
    "p1":4,
    "p2":8
}
r2=requests.post(url=url,data=data)
print(r2.text)
print(r2.status_code)