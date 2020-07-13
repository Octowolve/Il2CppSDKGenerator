#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Channels {

class SinkProviderData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "SinkProviderData"));
	}

	template <typename T = Il2CppString*> T& sinkName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& children() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& properties() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Children() {
		return ((T (*)(SinkProviderData*))(Il2CppBase() + 0x4B22200))(this);
	}
	template <typename T = uintptr_t> T get_Properties() {
		return ((T (*)(SinkProviderData*))(Il2CppBase() + 0x4B22208))(this);
	}

};

}
