#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UICommonUnlockEffects
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UICommonUnlockEffects"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_AssetID() {
		return ((T (*)(UICommonUnlockEffects*))(Il2CppBase() + 0x49F9120))(this);
	}

};

}
