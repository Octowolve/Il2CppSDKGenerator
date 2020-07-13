#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class MonoAsyncCall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "MonoAsyncCall"));
	}

	template <typename T = uintptr_t> T& msg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& cb_method() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& cb_target() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& res() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& out_args() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int64_t> T& wait_event() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
