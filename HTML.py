# to find a name of 18th position
import urllib.request, urllib.parse, urllib.error
import ssl
from bs4 import BeautifulSoup

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

url = input('Enter URL -')
repeat = int(input('Enter number of repeatations: '))
position = int(input('Enter the link position: '))

#to repeat desired times
for i in range(repeat):
#open
    html = urllib.request.urlopen(url, context=ctx).read()
    #print(html) # print b no3 l style w kol l details
    soup = BeautifulSoup(html, 'html.parser')
    #print(soup) #bynzm shkl l ta2dem w yktb details aktr
    tags = soup('a') #ytl3 l tags
    count = 0
    #print (tags)
    for tag in tags:
        count = count +1

        #stopping at desired position
        if count>position:
            break
        url = tag.get('href', None) #lw leha href aw l2
        name = tag.contents[0]

print(url,name)
