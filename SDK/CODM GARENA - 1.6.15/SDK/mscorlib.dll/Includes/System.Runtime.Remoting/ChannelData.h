#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class ChannelData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "ChannelData"));
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
	template <typename T = Il2CppString*> T& DelayLoadAsClientChannel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _serverProviders() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _clientProviders() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _customProperties() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_ServerProviders() {
		return ((T (*)(ChannelData*))(Il2CppBase() + 0x4B1C5F0))(this);
	}
	template <typename T = uintptr_t> T get_ClientProviders() {
		return ((T (*)(ChannelData*))(Il2CppBase() + 0x4B1C690))(this);
	}
	template <typename T = uintptr_t> T get_CustomProperties() {
		return ((T (*)(ChannelData*))(Il2CppBase() + 0x4B1C730))(this);
	}
	template <typename T = void> T CopyFrom(uintptr_t other) {
		return ((T (*)(ChannelData*, uintptr_t))(Il2CppBase() + 0x4B1C7D0))(this, other);
	}

};

}
