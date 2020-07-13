#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBReticleData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBReticleData"));
	}

	template <typename T = uintptr_t> T& _CommonData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _OwnerID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_CommonData() {
		return ((T (*)(DBReticleData*))(Il2CppBase() + 0x51B93BC))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(DBReticleData*, uintptr_t))(Il2CppBase() + 0x51B93C4))(this, value);
	}
	template <typename T = uint32_t> T get_OwnerID() {
		return ((T (*)(DBReticleData*))(Il2CppBase() + 0x51B93CC))(this);
	}
	template <typename T = void> T set_OwnerID(uint32_t value) {
		return ((T (*)(DBReticleData*, uint32_t))(Il2CppBase() + 0x51B93D4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBReticleData*, bool))(Il2CppBase() + 0x51B93DC))(this, createIfMissing);
	}

};

}
