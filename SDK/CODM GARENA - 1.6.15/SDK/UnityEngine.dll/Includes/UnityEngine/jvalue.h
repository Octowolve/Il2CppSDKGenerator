#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class jvalue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "jvalue"));
	}

	template <typename T = bool> T& z() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = unsigned char> T& b() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = char> T& c() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int16_t> T& s() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& i() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int64_t> T& j() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& f() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = double> T& d() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& l() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
