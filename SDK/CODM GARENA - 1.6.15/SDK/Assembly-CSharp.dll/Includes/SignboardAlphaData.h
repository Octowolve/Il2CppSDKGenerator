#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SignboardAlphaData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SignboardAlphaData"));
	}

	template <typename T = int32_t> T& MinDis() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& MaxDis() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Alpha() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ShowDisLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsInRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T IsInRange(int32_t dis) {
		return ((T (*)(SignboardAlphaData*, int32_t))(Il2CppBase() + 0x38DF8D4))(this, dis);
	}
	template <typename T = bool> T IsInRange_1(float dis) {
		return ((T (*)(SignboardAlphaData*, float))(Il2CppBase() + 0x38DF5D8))(this, dis);
	}

};

}
