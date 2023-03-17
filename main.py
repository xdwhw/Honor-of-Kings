import requests
import os
from lxml import etree
headers ={
    'user-agent':
    'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/107.0.0.0 Safari/537.36'
}
re = requests.get("https://pvp.qq.com/web201605/js/herolist.json",headers=headers)
for h in re.json():
    ename=h.get('ename')
    cname=h.get('cname')
    if not os.path.exists(cname):
        os.makedirs(cname)
        r =requests.get(f'https://pvp.qq.com/web201605/herodetail/{ename}.shtml',headers=headers)
        r.encoding='gbk'
        e=etree.HTML(r.text)
        names=e.xpath('//ul[@class="pic-pf-list pic-pf-list3"]/@data-imgname')[0]
        names=[name[0:name.index('&')] for name in names.split('|')]
        for i,n in enumerate(names):
            resp =requests.get(f'https://game.gtimg.cn/images/yxzj/img201606/heroimg/{ename}/{ename}-mobileskin-{i+1}.jpg')
            with open(f'{cname}/{n}.jpg','wb') as f:
                f.write(resp.content)
        print(f"已下载{cname}的皮肤")