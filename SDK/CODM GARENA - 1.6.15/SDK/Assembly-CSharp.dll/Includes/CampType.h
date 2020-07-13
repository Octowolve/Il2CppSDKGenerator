#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CampType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CampType"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& campList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Sort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T ResetIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x3A06084))(0);
	}
	template <typename T = void> static T Sort(uintptr_t localPlayerCampType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A05138))(0, localPlayerCampType);
	}
	template <typename T = int32_t> static T Sortm__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3A06490))(0, x, y);
	}

};

}
