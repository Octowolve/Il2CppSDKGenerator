#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security {

class SecurityFrame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security", "SecurityFrame"));
	}

	template <typename T = uintptr_t> T& _domain() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& _method() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& _assert() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _deny() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _permitonly() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T _GetSecurityStack(int32_t skip) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4287520))(0, skip);
	}
	template <typename T = void> T InitFromRuntimeFrame(uintptr_t frame) {
		return ((T (*)(SecurityFrame*, uintptr_t))(Il2CppBase() + 0x428793C))(this, frame);
	}
	template <typename T = uintptr_t> T get_Assembly() {
		return ((T (*)(SecurityFrame*))(Il2CppBase() + 0x4287990))(this);
	}
	template <typename T = uintptr_t> T get_Domain() {
		return ((T (*)(SecurityFrame*))(Il2CppBase() + 0x4287998))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(SecurityFrame*))(Il2CppBase() + 0x4287BC0))(this);
	}
	template <typename T = uintptr_t> static T GetStack(int32_t skipFrames) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4287BC8))(0, skipFrames);
	}

};

}
