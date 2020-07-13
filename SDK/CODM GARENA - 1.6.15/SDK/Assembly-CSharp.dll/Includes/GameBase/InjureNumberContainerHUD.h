#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class InjureNumberContainerHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "InjureNumberContainerHUD"));
	}

	template <typename T = uintptr_t> T& NumberMgr() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowInjureNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ShowInjureNumber(uintptr_t hitPawn, uintptr_t info) {
		return ((T (*)(InjureNumberContainerHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F0B49C))(this, hitPawn, info);
	}

};

}
