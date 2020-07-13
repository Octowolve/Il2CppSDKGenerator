#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RankGame {

class RankAwardItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RankGame", "RankAwardItemController"));
	}

	template <typename T = uintptr_t> T& awardItemView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& playerInfo() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RankAwardItemController*))(Il2CppBase() + 0x37FF630))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RankAwardItemController*))(Il2CppBase() + 0x37FF73C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RankAwardItemController*))(Il2CppBase() + 0x37FF7E0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RankAwardItemController*))(Il2CppBase() + 0x37FF888))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(RankAwardItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x37FF930))(this, list, index, data);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RankAwardItemController*))(Il2CppBase() + 0x37FFC78))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RankAwardItemController*))(Il2CppBase() + 0x37FFC80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RankAwardItemController*))(Il2CppBase() + 0x37FFC88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RankAwardItemController*))(Il2CppBase() + 0x37FFC90))(this);
	}

};

}
