
import concurrent.futures
import requests

def downloadfile(url,name):
    print(f"start downloading {name}")
    response = requests.get(url)
    open(f"641.1_{name+1}.jpg", "wb").write(response.content)   #"Folder name/file name
    print(f"finished downloading {name}")

url="https://picsum.photos/2000/3000"   # this url generate random pic link--  https://picsum.photos/
# pros=[]
# for i in range(5):
#     #downloadfile(url,i)
#     p=multiprocessing.Process(target=downloadfile,args=[url,i])
#     p.start()
#     pros.append(p)

# for p in pros:
#     p.join()

with concurrent.futures.ProcessPoolExecutor() as executor:
    l1=[url for i in range(6)]
    l2=[i for i in range(6)]
    results=executor.map(downloadfile,l1,l2)
    for r in results:
        print(r)
