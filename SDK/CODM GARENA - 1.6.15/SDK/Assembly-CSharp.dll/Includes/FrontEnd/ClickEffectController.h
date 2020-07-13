#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class ClickEffectController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "ClickEffectController"));
	}

	template <typename T = uintptr_t> T& m_ClickEffect() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterUICameraCustomInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterUICameraCustomInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUICameraCustomInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ClickEffectController*))(Il2CppBase() + 0x291F6C0))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(ClickEffectController*))(Il2CppBase() + 0x291FA78))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ClickEffectController*))(Il2CppBase() + 0x291FE30))(this);
	}
	template <typename T = void> T RegisterUICameraCustomInput(uintptr_t handler) {
		return ((T (*)(ClickEffectController*, uintptr_t))(Il2CppBase() + 0x291F7B8))(this, handler);
	}
	template <typename T = void> T UnRegisterUICameraCustomInput(uintptr_t handler) {
		return ((T (*)(ClickEffectController*, uintptr_t))(Il2CppBase() + 0x291FB70))(this, handler);
	}
	template <typename T = void> T OnUICameraCustomInput() {
		return ((T (*)(ClickEffectController*))(Il2CppBase() + 0x291FED0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ClickEffectController*))(Il2CppBase() + 0x29204C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(ClickEffectController*))(Il2CppBase() + 0x29204CC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ClickEffectController*))(Il2CppBase() + 0x29204D4))(this);
	}

};

}
