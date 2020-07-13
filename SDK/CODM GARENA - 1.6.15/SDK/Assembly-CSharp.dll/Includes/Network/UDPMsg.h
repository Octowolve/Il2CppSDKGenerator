#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class UDPMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "UDPMsg"));
	}

	template <typename T = bool> T& HasRecycle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Bytes() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ByteCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& Flag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint16_t> T& SequenceNo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& Cmd() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint16_t> T& crc7() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsDataCorrupted() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRecycle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T get_HasRecycle() {
		return ((T (*)(UDPMsg*))(Il2CppBase() + 0x43A1BD0))(this);
	}
	template <typename T = void> T set_HasRecycle(bool value) {
		return ((T (*)(UDPMsg*, bool))(Il2CppBase() + 0x43A1BD8))(this, value);
	}
	template <typename T = void> T OnRecycle() {
		return ((T (*)(UDPMsg*))(Il2CppBase() + 0x43A1BE0))(this);
	}

};

}
