#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSingleMemberItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSingleMemberItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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
		return ((T (*)(BRSingleMemberItemController*))(Il2CppBase() + 0x1B27128))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRSingleMemberItemController*))(Il2CppBase() + 0x1B271D0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRSingleMemberItemController*))(Il2CppBase() + 0x1B27274))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRSingleMemberItemController*))(Il2CppBase() + 0x1B2731C))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t dataObj) {
		return ((T (*)(BRSingleMemberItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1B273C4))(this, list, index, dataObj);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRSingleMemberItemController*))(Il2CppBase() + 0x1B2748C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRSingleMemberItemController*))(Il2CppBase() + 0x1B27494))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRSingleMemberItemController*))(Il2CppBase() + 0x1B2749C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRSingleMemberItemController*))(Il2CppBase() + 0x1B274A4))(this);
	}

};

}
