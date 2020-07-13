#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class DaylightTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "DaylightTime"));
	}

	template <typename T = uintptr_t> T& m_start() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_end() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_delta() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_Start() {
		return ((T (*)(DaylightTime*))(Il2CppBase() + 0x3FDA920))(this);
	}
	template <typename T = uintptr_t> T get_End() {
		return ((T (*)(DaylightTime*))(Il2CppBase() + 0x3FDA930))(this);
	}
	template <typename T = uintptr_t> T get_Delta() {
		return ((T (*)(DaylightTime*))(Il2CppBase() + 0x3FDA940))(this);
	}

};

}
