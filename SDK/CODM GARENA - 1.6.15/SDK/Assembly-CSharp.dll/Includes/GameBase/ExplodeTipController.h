#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ExplodeTipController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ExplodeTipController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ExplodeTipController*))(Il2CppBase() + 0x31D2438))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ExplodeTipController*))(Il2CppBase() + 0x31D24DC))(this);
	}
	template <typename T = void> T ActiveTip() {
		return ((T (*)(ExplodeTipController*))(Il2CppBase() + 0x31D25E8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ExplodeTipController*))(Il2CppBase() + 0x31D2854))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ExplodeTipController*))(Il2CppBase() + 0x31D285C))(this);
	}

};

}
