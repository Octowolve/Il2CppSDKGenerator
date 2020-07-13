#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankRewardScrollPlayController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankRewardScrollPlayController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RankRewardScrollPlayController*))(Il2CppBase() + 0x381E18C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RankRewardScrollPlayController*))(Il2CppBase() + 0x381E298))(this);
	}
	template <typename T = void> T UpdateView(Il2CppList<uintptr_t>* dataList) {
		return ((T (*)(RankRewardScrollPlayController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x381E33C))(this, dataList);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RankRewardScrollPlayController*))(Il2CppBase() + 0x381E458))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RankRewardScrollPlayController*))(Il2CppBase() + 0x381E460))(this);
	}

};

}
