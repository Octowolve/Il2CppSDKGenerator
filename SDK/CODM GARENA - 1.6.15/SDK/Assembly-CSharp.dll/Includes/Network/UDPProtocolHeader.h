#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class UDPProtocolHeader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "UDPProtocolHeader"));
	}

	template <typename T = uint32_t> T& mixedFlag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& roomId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& crc7() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& magic() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& flag() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& cmd() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& len() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(UDPProtocolHeader*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x43A31E0))(this, bytes, position);
	}
	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(UDPProtocolHeader*, uintptr_t))(Il2CppBase() + 0x43A3340))(this, writer);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(UDPProtocolHeader*))(Il2CppBase() + 0x43A3470))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(UDPProtocolHeader*, bool))(Il2CppBase() + 0x43A3478))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(UDPProtocolHeader*))(Il2CppBase() + 0x43A3480))(this);
	}

};

}
