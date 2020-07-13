#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Parameter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Parameter"));
	}

	template <typename T = uintptr_t> T& obj() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& field() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& mValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& expectedType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& cached() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& propInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& fieldInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_value() {
		return ((T (*)(Parameter*))(Il2CppBase() + 0x4BD2D4C))(this);
	}
	template <typename T = void> T set_value(uintptr_t value) {
		return ((T (*)(Parameter*, uintptr_t))(Il2CppBase() + 0x4BD3154))(this, value);
	}
	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(Parameter*))(Il2CppBase() + 0x4BD300C))(this);
	}

};

}
