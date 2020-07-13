#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CurveDataSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CurveDataSet"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& x() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& y() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& dxdy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& dx2dy2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& dataCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_dataCount() {
		return ((T (*)(CurveDataSet*))(Il2CppBase() + 0x415C46C))(this);
	}
	template <typename T = void> T set_dataCount(int32_t value) {
		return ((T (*)(CurveDataSet*, int32_t))(Il2CppBase() + 0x415C464))(this, value);
	}

};

}
