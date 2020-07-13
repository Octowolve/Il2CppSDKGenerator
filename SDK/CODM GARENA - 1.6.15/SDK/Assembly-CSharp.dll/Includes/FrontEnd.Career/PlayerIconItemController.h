#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class PlayerIconItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "PlayerIconItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_IconData() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideNewTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PlayerIconItemController*))(Il2CppBase() + 0x2915990))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PlayerIconItemController*))(Il2CppBase() + 0x2915A34))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(PlayerIconItemController*))(Il2CppBase() + 0x2915B40))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(PlayerIconItemController*))(Il2CppBase() + 0x2915BE8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PlayerIconItemController*))(Il2CppBase() + 0x2915C90))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PlayerIconItemController*))(Il2CppBase() + 0x2915D38))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(PlayerIconItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2915DE0))(this, list, index, data);
	}
	template <typename T = void> T HideNewTag() {
		return ((T (*)(PlayerIconItemController*))(Il2CppBase() + 0x290DB58))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PlayerIconItemController*))(Il2CppBase() + 0x2916B10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PlayerIconItemController*))(Il2CppBase() + 0x2916B18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(PlayerIconItemController*))(Il2CppBase() + 0x2916B20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(PlayerIconItemController*))(Il2CppBase() + 0x2916B28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PlayerIconItemController*))(Il2CppBase() + 0x2916B30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PlayerIconItemController*))(Il2CppBase() + 0x2916B38))(this);
	}

};

}
