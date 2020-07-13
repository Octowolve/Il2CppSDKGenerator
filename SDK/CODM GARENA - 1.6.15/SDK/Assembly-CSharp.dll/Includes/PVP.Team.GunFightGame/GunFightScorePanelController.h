#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GunFightScorePanelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GunFightScorePanelController"));
	}

	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortCampData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GunFightSorter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SortCampData(uintptr_t CampDataList) {
		return ((T (*)(GunFightScorePanelController*, uintptr_t))(Il2CppBase() + 0x4027C6C))(this, CampDataList);
	}
	template <typename T = int32_t> static T GunFightSorter(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4027DC4))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_SortCampData(uintptr_t P0) {
		return ((T (*)(GunFightScorePanelController*, uintptr_t))(Il2CppBase() + 0x4028024))(this, P0);
	}

};

}
