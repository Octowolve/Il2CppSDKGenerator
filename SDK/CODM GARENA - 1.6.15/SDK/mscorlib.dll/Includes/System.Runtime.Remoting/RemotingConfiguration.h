#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class RemotingConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "RemotingConfiguration"));
	}

	template <typename T = Il2CppString*> static T& applicationID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& applicationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& processGuid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& defaultConfigRead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> static T& defaultDelayedConfigRead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD);
	}
	template <typename T = Il2CppString*> static T& _errorMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& wellKnownClientEntries() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& activatedClientEntries() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& wellKnownServiceEntries() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& activatedServiceEntries() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& channelTemplates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& clientProviderTemplates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& serverProviderTemplates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = Il2CppString*> static T get_ApplicationName() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B40624))(0);
	}
	template <typename T = void> static T set_ApplicationName(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4B2A098))(0, value);
	}
	template <typename T = Il2CppString*> static T get_ProcessId() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B21B04))(0);
	}
	template <typename T = void> static T LoadDefaultDelayedChannels() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B1ED98))(0);
	}
	template <typename T = uintptr_t> static T IsRemotelyActivatedClientType(uintptr_t svrType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B1AEE4))(0, svrType);
	}
	template <typename T = void> static T RegisterActivatedClientType(uintptr_t entry) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B406D4))(0, entry);
	}
	template <typename T = void> static T RegisterActivatedServiceType(uintptr_t entry) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B40A78))(0, entry);
	}
	template <typename T = void> static T RegisterWellKnownClientType(uintptr_t entry) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B40C18))(0, entry);
	}
	template <typename T = void> static T RegisterWellKnownServiceType(uintptr_t entry) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B40FC4))(0, entry);
	}
	template <typename T = void> static T RegisterChannelTemplate(uintptr_t channel) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B27BC4))(0, channel);
	}
	template <typename T = void> static T RegisterClientProviderTemplate(uintptr_t prov) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B2607C))(0, prov);
	}
	template <typename T = void> static T RegisterServerProviderTemplate(uintptr_t prov) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B25F98))(0, prov);
	}
	template <typename T = void> static T RegisterChannels(uintptr_t channels, bool onlyDelayed) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4B291B4))(0, channels, onlyDelayed);
	}
	template <typename T = void> static T RegisterTypes(uintptr_t types) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B2A14C))(0, types);
	}
	template <typename T = void> static T SetCustomErrorsMode(Il2CppString* mode) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4B26DEC))(0, mode);
	}

};

}
