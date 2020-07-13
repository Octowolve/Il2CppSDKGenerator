#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutRoleItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutRoleItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mLoadoutReddotDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mCacheRole() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReddotActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsReddotNotNull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEntranceTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutRoleItemController*))(Il2CppBase() + 0x1F3E7A4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutRoleItemController*))(Il2CppBase() + 0x1F3E848))(this);
	}
	template <typename T = void> T SetReddotActive(uintptr_t state) {
		return ((T (*)(LoadoutRoleItemController*, uintptr_t))(Il2CppBase() + 0x1F3E288))(this, state);
	}
	template <typename T = bool> T IsReddotNotNull() {
		return ((T (*)(LoadoutRoleItemController*))(Il2CppBase() + 0x1F3E0A0))(this);
	}
	template <typename T = uint32_t> T GetEntranceTimestamp() {
		return ((T (*)(LoadoutRoleItemController*))(Il2CppBase() + 0x1F3E9C8))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(LoadoutRoleItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1F3EBE0))(this, list, index, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutRoleItemController*))(Il2CppBase() + 0x1F3F644))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutRoleItemController*))(Il2CppBase() + 0x1F3F64C))(this);
	}

};

}
