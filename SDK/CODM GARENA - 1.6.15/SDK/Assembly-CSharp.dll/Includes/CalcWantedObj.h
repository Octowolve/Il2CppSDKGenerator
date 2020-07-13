#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CalcWantedObj
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CalcWantedObj"));
	}

	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& RepresentItemId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& GroupId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& SortValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcSortValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = float> T get_SortValue() {
		return ((T (*)(CalcWantedObj*))(Il2CppBase() + 0x3DD2CE4))(this);
	}
	template <typename T = void> T set_SortValue(float value) {
		return ((T (*)(CalcWantedObj*, float))(Il2CppBase() + 0x3DD2EDC))(this, value);
	}
	template <typename T = void> T CalcSortValue() {
		return ((T (*)(CalcWantedObj*))(Il2CppBase() + 0x3DD2B74))(this);
	}

};

}
