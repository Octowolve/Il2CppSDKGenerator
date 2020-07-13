#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ChamberGame {

class ChamberPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ChamberGame", "ChamberPlayerInfo"));
	}

	template <typename T = int32_t> T& m_LeftRespawnCount() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = float> T& m_AutoSpectatingTime() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoGen_Copy_PVP_Team_ChamberGame_ChamberPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryStartSpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T AutoGen_Copy_PVP_Team_ChamberGame_ChamberPlayerInfo(uintptr_t src, uintptr_t dest) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B23D20))(0, src, dest);
	}
	template <typename T = int32_t> T get_LeftRespawnCount() {
		return ((T (*)(ChamberPlayerInfo*))(Il2CppBase() + 0x2B235B4))(this);
	}
	template <typename T = void> T set_LeftRespawnCount(int32_t value) {
		return ((T (*)(ChamberPlayerInfo*, int32_t))(Il2CppBase() + 0x2B2357C))(this, value);
	}
	template <typename T = float> T get_AutoSpectatingTime() {
		return ((T (*)(ChamberPlayerInfo*))(Il2CppBase() + 0x2B230EC))(this);
	}
	template <typename T = void> T set_AutoSpectatingTime(float value) {
		return ((T (*)(ChamberPlayerInfo*, float))(Il2CppBase() + 0x2B23C58))(this, value);
	}
	template <typename T = void> T TryStartSpectating() {
		return ((T (*)(ChamberPlayerInfo*))(Il2CppBase() + 0x2B230F4))(this);
	}

};

}
