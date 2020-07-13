#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MaterialNames
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MaterialNames"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& names() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Mats() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_Item(int32_t i) {
		return ((T (*)(MaterialNames*, int32_t))(Il2CppBase() + 0x35FEC08))(this, i);
	}
	template <typename T = void> T set_Item(int32_t i, Il2CppString* value) {
		return ((T (*)(MaterialNames*, int32_t, Il2CppString*))(Il2CppBase() + 0x35FEC10))(this, i, value);
	}
	template <typename T = void> T SetMat(int32_t i, uintptr_t inMat) {
		return ((T (*)(MaterialNames*, int32_t, uintptr_t))(Il2CppBase() + 0x35FEC18))(this, i, inMat);
	}
	template <typename T = void> T set_Length(int32_t value) {
		return ((T (*)(MaterialNames*, int32_t))(Il2CppBase() + 0x35FEC20))(this, value);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(MaterialNames*))(Il2CppBase() + 0x35FEC28))(this);
	}

};

}
