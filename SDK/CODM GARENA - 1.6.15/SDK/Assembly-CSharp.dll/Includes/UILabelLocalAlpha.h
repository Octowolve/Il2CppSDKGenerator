#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UILabelLocalAlpha
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UILabelLocalAlpha"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateFinalAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T CalculateFinalAlpha(int32_t frameID) {
		return ((T (*)(UILabelLocalAlpha*, int32_t))(Il2CppBase() + 0x2F60E54))(this, frameID);
	}
	template <typename T = float> T xLuaBaseProxy_CalculateFinalAlpha(int32_t P0) {
		return ((T (*)(UILabelLocalAlpha*, int32_t))(Il2CppBase() + 0x2F60F24))(this, P0);
	}

};

}
