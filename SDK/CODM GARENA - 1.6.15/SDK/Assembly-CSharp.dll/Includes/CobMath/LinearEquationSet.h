#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CobMath {

class LinearEquationSet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CobMath", "LinearEquationSet"));
	}

	template <typename T = uintptr_t> T& mM() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mMList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mVList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEquation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Calculate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Calculate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetEquation(int32_t index, Il2CppArray<uintptr_t>* param) {
		return ((T (*)(LinearEquationSet*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3A28FAC))(this, index, param);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Calculate() {
		return ((T (*)(LinearEquationSet*))(Il2CppBase() + 0x3A29108))(this);
	}
	template <typename T = void> T Calculate_1(uintptr_t* result) {
		return ((T (*)(LinearEquationSet*, uintptr_t*))(Il2CppBase() + 0x3A29294))(this, result);
	}

};

}
