#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AllInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AllInfo"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ContainerSpread() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& LabelTotalCodPoint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LabelTotalExp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& LabelTotalTrophyChange() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LabelCodPointByRank() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LabelCodPointByKill() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LabelExpByRank() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& LabelExpByKill() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContainerSpreadShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetData(bool show, uint32_t totalGold, uint32_t goldByRank, uint32_t goldByKill, uint32_t totalExp, uint32_t expByRank, uint32_t expByKill, int32_t trophyChange) {
		return ((T (*)(AllInfo*, bool, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x3C3781C))(this, show, totalGold, goldByRank, goldByKill, totalExp, expByRank, expByKill, trophyChange);
	}
	template <typename T = void> T SetContainerSpreadShow(bool show) {
		return ((T (*)(AllInfo*, bool))(Il2CppBase() + 0x3C37A98))(this, show);
	}

};

}
