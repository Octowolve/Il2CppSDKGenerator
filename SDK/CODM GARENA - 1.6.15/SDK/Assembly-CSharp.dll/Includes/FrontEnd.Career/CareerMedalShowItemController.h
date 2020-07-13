#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd.Career {

class CareerMedalShowItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd.Career", "CareerMedalShowItemController"));
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
		return ((T (*)(CareerMedalShowItemController*))(Il2CppBase() + 0x290ABCC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CareerMedalShowItemController*))(Il2CppBase() + 0x290AC70))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(CareerMedalShowItemController*))(Il2CppBase() + 0x290AD7C))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(CareerMedalShowItemController*))(Il2CppBase() + 0x290AE24))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CareerMedalShowItemController*))(Il2CppBase() + 0x290AECC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CareerMedalShowItemController*))(Il2CppBase() + 0x290AF74))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(CareerMedalShowItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x290B01C))(this, list, index, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CareerMedalShowItemController*))(Il2CppBase() + 0x290B4E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CareerMedalShowItemController*))(Il2CppBase() + 0x290B4F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(CareerMedalShowItemController*))(Il2CppBase() + 0x290B4F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(CareerMedalShowItemController*))(Il2CppBase() + 0x290B500))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CareerMedalShowItemController*))(Il2CppBase() + 0x290B508))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CareerMedalShowItemController*))(Il2CppBase() + 0x290B510))(this);
	}

};

}
