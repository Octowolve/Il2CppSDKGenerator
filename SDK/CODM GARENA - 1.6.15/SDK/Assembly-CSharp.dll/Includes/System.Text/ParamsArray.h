#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class ParamsArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "System.Text", "ParamsArray"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& oneArgArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& twoArgArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& threeArgArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& arg1() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& arg2() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& args() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix3_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAtSlow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = int32_t> T get_Length() {
		return ((T (*)(ParamsArray*))(Il2CppBase() + 0x3F3C460))(this);
	}
	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(ParamsArray*, int32_t))(Il2CppBase() + 0x3F3C628))(this, index);
	}
	template <typename T = uintptr_t> T GetAtSlow(int32_t index) {
		return ((T (*)(ParamsArray*, int32_t))(Il2CppBase() + 0x3F3C63C))(this, index);
	}

};

}
