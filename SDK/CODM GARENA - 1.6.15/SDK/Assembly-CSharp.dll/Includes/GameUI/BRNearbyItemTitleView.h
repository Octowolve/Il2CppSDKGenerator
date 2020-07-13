#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRNearbyItemTitleView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRNearbyItemTitleView"));
	}

	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetData(Il2CppString* data) {
		return ((T (*)(BRNearbyItemTitleView*, Il2CppString*))(Il2CppBase() + 0x2DA5890))(this, data);
	}

};

}
