#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SignableConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SignableConfig"));
	}

	template <typename T = float> T& AddIndicatorDist() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& RemoveIndicatorDist() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& EnableIndicatorDist() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& IndicatorScale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& SqrtRemoveIndicatorDist() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& SqrtEnableIndicatorDist() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
