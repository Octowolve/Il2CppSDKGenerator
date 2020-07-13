#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomLodValueForVeryLowQ
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomLodValueForVeryLowQ"));
	}

	template <typename T = Il2CppList<float>*> T& LODValue() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLodValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T RefreshLodValue() {
		return ((T (*)(CustomLodValueForVeryLowQ*))(Il2CppBase() + 0x415E5E4))(this);
	}

};

}
