# Useless-Machine-Ardunio 
 
<p align="center">
  <img width="450" height="300" src="https://github.com/MalikTaylor/Useless-Machine-Ardunio/blob/master/Images/Useless%20Machine%206-30-2020.JPG">
  <br>
 <a href="https://www.instagram.com/the.red.team4">Instagram</a>
 - <a href="https://www.youtube.com/channel/UCQdi3MDHHMm7u3cMkEY329Q">YouTube</a>
 - <a href="https://208.68.37.54">Website</a>
  <br>
  <br>
</p>
### About
As a beginner robotics hobbyist, I wanted to find a beginner-friendly project that would use the Arduino microcontroller as the brains of my project. While browsing the internet I came across the Useless machine which is a device that serves no real purpose. However, I noticed that all these machines would repeat the same action every time and I wanted to change that, so I set out to build my own that cycles through random animations. 


## Setup

### Materials 

Cost   | Name |                                                                           
------ | ---- |                                                                           
$12.99 | [TowerPro SG-5010 standard servo](https://www.amazon.com/dp/B07KGQVDD1/ref=sspa_dk_detail_6?psc=1&pd_rd_i=B07KGQVDD1&pd_rd_w=qwyLT&pf_rd_p=48d372c1-f7e1-4b8b-9d02-4bd86f5158c5&pd_rd_wg=NRhVq&pf_rd_r=0GX6T3Y3VFTM174MQHTQ&pd_rd_r=5a351d8a-d322-48f1-891c-2e87f5c6d8b8&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEyR0VMR1QyUEZXTkVBJmVuY3J5cHRlZElkPUEwMzg0ODExMUdBRkk3SUwyUlpRRiZlbmNyeXB0ZWRBZElkPUEwNjk2MjIxM0xVUjdOWlhKUklOTSZ3aWRnZXROYW1lPXNwX2RldGFpbCZhY3Rpb249Y2xpY2tSZWRpcmVjdCZkb05vdExvZ0NsaWNrPXRydWU=)|
$5.39  | [Togggle Switch](https://www.amazon.com/gp/product/B079JBF815/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1)|
$13.99  | [Arduino Nano](https://www.amazon.com/gp/product/B07G99NNXL/ref=ppx_yo_dt_b_asin_title_o01_s00?ie=UTF8&psc=1)|
Total  | $32.37|

### Enclosure 

I like some of the Useless machines that have a wooden enclosure, but I have no experience with woodworking so I instead, opted to 3D print the enclosure for this version of the project. I have plans to create a wooden enclosure in the future and even include an internal power source.  

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
The door for the servo arm is printed as part of the case's lid, once printed there should be a noticeable gap between the lid and the door. If there is no gap then you're either printing too close the print bed or you need to change your starting layer height. 

### Software

The sketch is fairly simple which selects a random servo animation to play when the user flips the toggle switch. This sketch is not perfect, as the Useless machine will sometimes repeat a previously selected animation multiple times.
