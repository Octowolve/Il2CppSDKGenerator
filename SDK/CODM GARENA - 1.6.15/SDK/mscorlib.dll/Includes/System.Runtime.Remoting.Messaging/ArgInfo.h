#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class ArgInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "ArgInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _paramMap() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _inoutArgCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _method() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T GetInOutArgCount() {
		return ((T (*)(ArgInfo*))(Il2CppBase() + 0x4B329AC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetInOutArgs(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(ArgInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B329B4))(this, args);
	}

};

}
