Cınst > metin2client.exe+23FC734 / Pointer > 0x14

// güle güle kullanın 

// Pointer
Player Nick > 0x20
Player Lvl > 0x58
player y > 0x824
player x > 0x820
player z > 0x828
invisible > 0x8A0
Sword Range > 0x84C
Quick Age > 0x848
Movement Speed | W > 0x83C
Movement Speed | A > 0x838
isDead > 0x958
Slow Walk > 0x7F0
One Hit > 0x7F0

// Blink
B1 > 0x32C
B2 > 0x330
B3 > 0x334

// Movement Speed
metin2client.exe+02103218,24,2C,240

// Mob Message Entitylist
metin2client.exe+02103218

// Skill Suspend
metin2client.exe+2BDFB0 

// Others
Game Speed > 02AB6850 > double
No Frog > 02A97088 > float

// GetTargetVID
mov eax,[eax+0002C7E8] / 0x0002C7E8
mov eax,[0x0294C728] / 0x0294C728
0002C6E4

// Send Battle Packet Error
call > 0x007915B0
mov > 0x029501A0

// CPythonNetworkStream
0x29501A0

// SendAddFlyTargetingPacket // ok wait hack
0x00791A80

// Send Destroy Character Packet
0x007B6FD0

// Send Item Use Packet | Auto pot
value > 27004 > 27005 > 27006
metin2client.exe+2629C0

// Send Chat Packet
0x0252BFBC

// CPythonCharacterManager
0x95F1C20

// CItemManager
0x95F1818

// CPythonPlayer
0x962C948

// CPythonBackground
0x962D998

// CPythonApplication
0x95F1558

// PythonBattleRoyaleManager
0x96367EC

// MetinstoneSwap
0x9639168

// CRaceManager
0x95F1760

// CStateManager
0x976FDE8

// PythonGuiBattleManager
0x9639038

// CActorInstanceBackground
0x32DC6E8

// CPythonSysteam
0x9633BD8

// CCameraManager
0x32E6F6C

// CEffectManager
0x95F1BAC

// CPythonTexTrail
0x962C870

// CEterPackManager
0x32E3080

// CCullingManager
0x95F1E3C

// CPythonMiniMap
0x962C96C

// PythonSungmaheeGateManager
0x9638F94

// CLogFile
0x2EC9F0C
0x2FDB878

// CPythonChat
0x962C684

// SendItemPickUpPacket Error
0x007B3116 // string
0x857BB0 // item id
0x857BA0 // item id
0x7AEA40 // item name
0x7A7300 // item name

// Mob
entitylist addr | player > metin2client.exe+02400210 / Pointer > 0
localplayer addr | player > metin2client.exe+023FC734 / Pointer > 14