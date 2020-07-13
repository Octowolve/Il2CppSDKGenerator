#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class CareerEmblemItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "CareerEmblemItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CareerEmblemItemController*))(Il2CppBase() + 0x2907BD8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CareerEmblemItemController*))(Il2CppBase() + 0x2907C7C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(CareerEmblemItemController*))(Il2CppBase() + 0x2907D88))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(CareerEmblemItemController*))(Il2CppBase() + 0x2907E30))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CareerEmblemItemController*))(Il2CppBase() + 0x2907ED8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CareerEmblemItemController*))(Il2CppBase() + 0x2907F80))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(CareerEmblemItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2908028))(this, list, index, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CareerEmblemItemController*))(Il2CppBase() + 0x29088A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CareerEmblemItemController*))(Il2CppBase() + 0x29088A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(CareerEmblemItemController*))(Il2CppBase() + 0x29088B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(CareerEmblemItemController*))(Il2CppBase() + 0x29088B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CareerEmblemItemController*))(Il2CppBase() + 0x29088C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CareerEmblemItemController*))(Il2CppBase() + 0x29088C8))(this);
	}

};

}
