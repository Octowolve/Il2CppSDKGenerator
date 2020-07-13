#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSCompositeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSCompositeRes"));
	}

	template <typename T = int32_t> T& _Result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _output() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _composite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _powder() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_Result() {
		return ((T (*)(CSCompositeRes*))(Il2CppBase() + 0x51D0154))(this);
	}
	template <typename T = void> T set_Result(int32_t value) {
		return ((T (*)(CSCompositeRes*, int32_t))(Il2CppBase() + 0x51D015C))(this, value);
	}
	template <typename T = uintptr_t> T get_output() {
		return ((T (*)(CSCompositeRes*))(Il2CppBase() + 0x51D0164))(this);
	}
	template <typename T = void> T set_output(uintptr_t value) {
		return ((T (*)(CSCompositeRes*, uintptr_t))(Il2CppBase() + 0x51D016C))(this, value);
	}
	template <typename T = uintptr_t> T get_composite() {
		return ((T (*)(CSCompositeRes*))(Il2CppBase() + 0x51D0174))(this);
	}
	template <typename T = void> T set_composite(uintptr_t value) {
		return ((T (*)(CSCompositeRes*, uintptr_t))(Il2CppBase() + 0x51D017C))(this, value);
	}
	template <typename T = uint32_t> T get_powder() {
		return ((T (*)(CSCompositeRes*))(Il2CppBase() + 0x51D0184))(this);
	}
	template <typename T = void> T set_powder(uint32_t value) {
		return ((T (*)(CSCompositeRes*, uint32_t))(Il2CppBase() + 0x51D018C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSCompositeRes*, bool))(Il2CppBase() + 0x51D0194))(this, createIfMissing);
	}

};

}
