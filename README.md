# Useless-Machine-Ardunio
As a beginner robotics hobbyist I wanted to find a begginer friendly project that would use the Arduino microcrontroller as the brains of my project. While browsing the internet I came across the Useless machine which is a . However I noticed that all these machines would repeat the same action every time and I wanteed to change that, so i set out to build my own. 


## Setup

### Materials 

Cost   | Name |                                                                           
------ | ---- |                                                                           
$12.99 | [TowerPro SG-5010 standard servo](https://www.amazon.com/dp/B07KGQVDD1/ref=sspa_dk_detail_6?psc=1&pd_rd_i=B07KGQVDD1&pd_rd_w=qwyLT&pf_rd_p=48d372c1-f7e1-4b8b-9d02-4bd86f5158c5&pd_rd_wg=NRhVq&pf_rd_r=0GX6T3Y3VFTM174MQHTQ&pd_rd_r=5a351d8a-d322-48f1-891c-2e87f5c6d8b8&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEyR0VMR1QyUEZXTkVBJmVuY3J5cHRlZElkPUEwMzg0ODExMUdBRkk3SUwyUlpRRiZlbmNyeXB0ZWRBZElkPUEwNjk2MjIxM0xVUjdOWlhKUklOTSZ3aWRnZXROYW1lPXNwX2RldGFpbCZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=)               |
$5.95  | [Togggle Switch](https://www.amazon.com/dp/B07RMDNDK3/ref=sspa_dk_detail_4?psc=1&pd_rd_i=B07RMDNDK3&pd_rd_w=ifi9y&pf_rd_p=48d372c1-f7e1-4b8b-9d02-4bd86f5158c5&pd_rd_wg=4R2Zo&pf_rd_r=82HE2ZAYYDRVE1D3H2QW&pd_rd_r=9593cce8-0df1-47fa-84f7-f5a7a2e40367&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEyM0hCVDdJWlAxU0QxJmVuY3J5cHRlZElkPUEwODUyNDczMjlSNzAzQlRMVFA2WSZlbmNyeXB0ZWRBZElkPUEwMjM4MDE2MVVSTzlCWlgySlozRCZ3aWRnZXROYW1lPXNwX2RldGFpbCZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU= )                                                       |
Total  | $70.23                                                                                |

### Enclosure 

I really like some of the Useless machines that have a wooden encolusre, but I have no expirence with wood working so I instead, opted to 3D print the enclosure for this version of the project. I have plans to create a wooden enclosure in the future and even include an internal power source.  

### Print Settings
Rafts:
No

Supports:
No

Nozzle Size:
0.3mm

Infill:
20%

Filament_material:
PLA

Notes:
The door for the servo arm is printed as part of the cases lid, once printed there should be a noticable gap bewteen the lid and the door. If there is no gap then you're either printing too close the print bed or you need to change your starting layerheight. 


### Software

The sketch is fairly simple which selects a random servo animation to play when the user flips the toggle switch. This sketch is not perfect, as the Useless machine will sometimes repeat a previously selected animation multiple times.
