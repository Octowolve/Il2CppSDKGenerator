#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRSignableObjectTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRSignableObjectTipsHUD"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UpdateView(uintptr_t InImpactInfo) {
		return ((T (*)(BRSignableObjectTipsHUD*, uintptr_t))(Il2CppBase() + 0x3DBDF88))(this, InImpactInfo);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0) {
		return ((T (*)(BRSignableObjectTipsHUD*, uintptr_t))(Il2CppBase() + 0x3DBE684))(this, P0);
	}

};

}
