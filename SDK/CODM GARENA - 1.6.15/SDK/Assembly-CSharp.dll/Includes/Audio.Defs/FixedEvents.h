#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Defs {

class FixedEvents
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Defs", "FixedEvents"));
	}

	template <typename T = Il2CppString*> static T& Evt_MPPVE_OpenDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Evt_MPPVE_CloseDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& Evt_MPPVE_PowerOn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& Evt_MPPVE_Buy_PowerSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& Evt_MPPVE_Buy_Ammo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& Evt_MPPVE_Buy_Perk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& Evt_MPPVE_Buy_NotEnoughMoney() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& Evt_MPPVE_1PHitZombie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& Evt_MPPVE_3PHitZombie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& Evt_MPPVE_1PNormalHitZombie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppString*> static T& Evt_MPPVE_1PFireHitZombie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& Evt_Base_Loading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppString*> static T& Evt_Base_Loading_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& Evt_ZM_GOT_A_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppString*> static T& Evt_Loading_ZM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppString*> static T& Evt_Loading_End_ZM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppString*> static T& Evt_Player_Changed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppString*> static T& Evt_WinnerCircle_BGM_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = Il2CppString*> static T& Evt_WinnerCircle_BGM_Win_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppString*> static T& Evt_WinnerCircle_BGM_Lose_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = Il2CppString*> static T& Evt_WinnerCircle_BGM_Draw_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppString*> static T& Evt_WinnerCircle_BGM_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = Il2CppString*> static T& Evt_Settlement_BGM_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = Il2CppString*> static T& Evt_Settlement_BGM_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_Glass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_Grass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_Metal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_PenetrateStone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_Sand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_Snow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_Ice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_Stone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_Water() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_Wood() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_DryGrass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_Bush() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = Il2CppString*> static T& Evt_Bounce_On_GrenadeForbid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = Il2CppString*> static T& Evt_Touch_StickGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = Il2CppString*> static T& Evt_Touch_TripMine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = Il2CppString*> static T& Evt_ClusterGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}


};

}
