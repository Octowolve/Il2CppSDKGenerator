#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRNearbyModuleDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRNearbyModuleDataStore"));
	}

	template <typename T = int32_t> static T& kIsNearbyListVisibleChangedIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& IsMarkBtnSelected() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsNearbyListVisible() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = bool> T& IsNearbyBoxVisible() {
		return *(T*)((uintptr_t)this + 0xE);
	}
	template <typename T = bool> T& IsBoxUIVisible() {
		return *(T*)((uintptr_t)this + 0xF);
	}
	template <typename T = bool> T& IsListUIVisible() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& MarkListUIDirty() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& MarkBoxUIDirty() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = bool> T& IsBoxRootShow() {
		return *(T*)((uintptr_t)this + 0x13);
	}
	template <typename T = bool> T& IsListRootShow() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedChangeUIVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNearbyType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAutoPickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(BRNearbyModuleDataStore*))(Il2CppBase() + 0x1ABADFC))(this);
	}
	template <typename T = bool> T IsNeedChangeUIVisible() {
		return ((T (*)(BRNearbyModuleDataStore*))(Il2CppBase() + 0x1AB5230))(this);
	}
	template <typename T = uintptr_t> T GetNearbyType() {
		return ((T (*)(BRNearbyModuleDataStore*))(Il2CppBase() + 0x1AB981C))(this);
	}
	template <typename T = uintptr_t> T GetAutoPickType() {
		return ((T (*)(BRNearbyModuleDataStore*))(Il2CppBase() + 0x1AB57FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(BRNearbyModuleDataStore*))(Il2CppBase() + 0x1ABAEC0))(this);
	}

};

}
