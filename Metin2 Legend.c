| OwO Dumper v0.2 @Developer Ezgi |
Localplayer > Legend2_global.exe+0x3B8FF8 > 0x10
 
Player Name > 0x14 | String
Player Level > 0x58 | Long
Player Attack Animation > 0x618 | Byte
Player Attack Speed > 0x690 | Float
Player Movement Speed > 0x68C | Float
Player Character Type > 0x5F0 | Byte
Player Sword Range > 0x688 | Float
Player Quick Age > 0x684 | Float
Player Y Coords > 0x660 | Float
Player X Coords > 0x65C | Float
Player One Hit > 0x5EC | Byte
Player Slow Walk > 0x63C | Float
Player Phase > 0x750 | Byte
Player Freeze > 0x638 | Float
Player isDead > 0x638 | Byte
Player Chat Yellow > 0x48 | Float
Player Chat White > 0x4C | Float
Player Chat Pruple > 0x44 | Float
Player Minimap Zoom > 0x10 | Float
Player Minimap Y Pos > 0x24C | Float
Player Minimap X Pos > 0x248 | Float
 
| Mob Pointer - Entitylist |
Entity Mob > Legend2_global.exe+0x00319D7C > 0x14
 
Entity Pointer > Alfa Mavi Kurt > 0x18
Entity Name > Alfa Mavi Kurt > 0x14 | String
Entity Y > Alfa Mavi Kurt > 0x294 | Float
Entity X > Alfa Mavi Kurt > 0x298 | Float
 
Entity Pointer > Yaban Domuzu > 0x1C
Entity Name > Yaban Domuzu > 0x14 | String
Entity Y > Yaban Domuzu > 0x1FC | Float
Entity X > Yaban Domuzu > 0x200 | Float
 
Entity Pointer > Mavi Kurt > 0x20
Entity Name > Mavi Kurt > 0x18 | String
Entity Y > Mavi Kurt > 0x1FC | Float
Entity X > Yaban Domuzu > 0x200 | Float
 
Entity Pointer > Yabani Köpek > 0x3C
Entity Name > Yabani Köpek > 0x18 | String
Entity Y > Yabani Köpek > 0x1B0 | Float
Entity X > Yabani Köpek > 0x1B4 | Float
 
Entity Pointer > Alfa Kurt > 0x40
Entity Name > Alfa Kurt > 0x18 | String
Entity Y > Alfa Kurt > 0x1FC | Float
Entity X > Alfa Kurt > 0x200 | Float
 
Entity Pointer > Kurt > 0x44
Entity Name > Kurt > 0x14 | String
Entity Y > Kurt > 0x1FC | Float
Entity X > Kurt > 0x200 | Float
 
| Entity Addr - Player |
Player Shop Distance > 0x0097D3C0 | Float
Player Sky Color Changer > 0x0097D384 | Float
Player Map Remover > 0x0097D27C | Float
Player Shadow > 0x00931CD8 | Float
Entity Shadow > 0x00931CD4 | Float
Player Remove Shadow > Legend2_global.exe+0x1A35FF | Long
Player Shadow Y Coords > 0x00931CE0 | Float
 
(Send Battle Packet Error)
mov ecx,[00A1EBE0] | Null
call 007525A0 | Null
 
(Get Target VID)
mov ecx,[0x00A59010] | Attack
mov eax,[ecx+0x0001A600] | VID
 
(Pick Close Item)
mov ecx,[00A59010] | Click
call 007636C0 | Send Z
 
(Hide Web Page)
mov ecx,[00A1F0C4] | Null
call 0071DF30 | Null
