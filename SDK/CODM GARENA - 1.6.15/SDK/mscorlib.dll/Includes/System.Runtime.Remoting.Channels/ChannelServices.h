#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Channels {

class ChannelServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Channels", "ChannelServices"));
	}

	template <typename T = uintptr_t> static T& registeredChannels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& delayedClientChannels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _crossContextSink() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& CrossContextUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& oldStartModeTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T CreateClientChannelSinkChain(Il2CppString* url, uintptr_t remoteChannelData, uintptr_t* objectUri) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4B1E210))(0, url, remoteChannelData, objectUri);
	}
	template <typename T = uintptr_t> static T CreateClientChannelSinkChain_1(uintptr_t sender, Il2CppString* url, Il2CppArray<uintptr_t>* channelDataArray, uintptr_t* objectUri) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x4B1EB14))(0, sender, url, channelDataArray, objectUri);
	}
	template <typename T = void> static T RegisterChannel(uintptr_t chnl) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B1F164))(0, chnl);
	}
	template <typename T = void> static T RegisterChannel_1(uintptr_t chnl, bool ensureSecurity) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4B1F208))(0, chnl, ensureSecurity);
	}
	template <typename T = void> static T RegisterChannelConfig(uintptr_t channel) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B1FE44))(0, channel);
	}
	template <typename T = uintptr_t> static T CreateProvider(uintptr_t prov) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B20EF8))(0, prov);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCurrentChannelInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B1DAC4))(0);
	}

};

}
