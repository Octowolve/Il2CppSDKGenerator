#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BeaconReportInGameExperienceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BeaconReportInGameExperienceData"));
	}

	template <typename T = Il2CppString*> T& GameType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& MapID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& MaxFPS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& MinFPS() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& AvgFPS() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& AbnormalFPSArisingTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& AbnormalFPSCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LittleAbnormalFPSCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& MinPing() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& MaxPing() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& AvgPing() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& AbnormalPingCount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& BattleTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& DSSvrReconnectCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& ZoneSvrReconnectCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& MoveDragCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& IsInGameMusicOn() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& InGameQuality() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& HasSwitchRunInBackground() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& AvgFreeDeviceMemory() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& AvgGameUsedMemory() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& AvgSysCPUPayload() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& AvgGameCPUPayload() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& EnableRagdollOnLowEndDevice() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ResetData() {
		return ((T (*)(BeaconReportInGameExperienceData*))(Il2CppBase() + 0x373E6F8))(this);
	}

};

}
