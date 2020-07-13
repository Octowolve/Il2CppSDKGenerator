#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class UDPSequence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "UDPSequence"));
	}

	template <typename T = uint16_t> T& sequenceNo() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = unsigned char> T& sendTimes() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0xB);
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
		return ((T (*)(UDPSequence*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x43A3724))(this, bytes, position);
	}
	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(UDPSequence*, uintptr_t))(Il2CppBase() + 0x43A3848))(this, writer);
	}
	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(UDPSequence*))(Il2CppBase() + 0x43A3930))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(UDPSequence*, bool))(Il2CppBase() + 0x43A3938))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(UDPSequence*))(Il2CppBase() + 0x43A3940))(this);
	}

};

}
