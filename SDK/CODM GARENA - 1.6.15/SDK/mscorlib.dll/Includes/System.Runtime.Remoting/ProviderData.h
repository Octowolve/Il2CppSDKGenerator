#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class ProviderData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "ProviderData"));
	}

	template <typename T = Il2CppString*> T& Ref() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CustomProperties() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& CustomData() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyFrom(uintptr_t other) {
		return ((T (*)(ProviderData*, uintptr_t))(Il2CppBase() + 0x4B1D268))(this, other);
	}

};

}
