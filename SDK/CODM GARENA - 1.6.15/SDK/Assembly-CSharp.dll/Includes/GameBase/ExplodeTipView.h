#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ExplodeTipView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ExplodeTipView"));
	}

	template <typename T = uintptr_t> T& TipIcon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeactiveTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ExplodeTipView*))(Il2CppBase() + 0x31D2908))(this);
	}
	template <typename T = void> T ActiveTip() {
		return ((T (*)(ExplodeTipView*))(Il2CppBase() + 0x31D26F8))(this);
	}
	template <typename T = void> T DeactiveTip() {
		return ((T (*)(ExplodeTipView*))(Il2CppBase() + 0x31D2A28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ExplodeTipView*))(Il2CppBase() + 0x31D2B48))(this);
	}

};

}
