#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBOpticCommonData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBOpticCommonData"));
	}

	template <typename T = uint64_t> T& _OpticID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _KilledNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _ReticleID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_OpticID() {
		return ((T (*)(DBOpticCommonData*))(Il2CppBase() + 0x51B8528))(this);
	}
	template <typename T = void> T set_OpticID(uint64_t value) {
		return ((T (*)(DBOpticCommonData*, uint64_t))(Il2CppBase() + 0x51B8530))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_KilledNum() {
		return ((T (*)(DBOpticCommonData*))(Il2CppBase() + 0x51B8540))(this);
	}
	template <typename T = uint32_t> T get_ReticleID() {
		return ((T (*)(DBOpticCommonData*))(Il2CppBase() + 0x51B8548))(this);
	}
	template <typename T = void> T set_ReticleID(uint32_t value) {
		return ((T (*)(DBOpticCommonData*, uint32_t))(Il2CppBase() + 0x51B8550))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBOpticCommonData*, bool))(Il2CppBase() + 0x51B8558))(this, createIfMissing);
	}

};

}
