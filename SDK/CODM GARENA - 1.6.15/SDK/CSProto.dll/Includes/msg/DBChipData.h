#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBChipData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBChipData"));
	}

	template <typename T = uintptr_t> T& _CommonData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_CommonData() {
		return ((T (*)(DBChipData*))(Il2CppBase() + 0x51B77E4))(this);
	}
	template <typename T = void> T set_CommonData(uintptr_t value) {
		return ((T (*)(DBChipData*, uintptr_t))(Il2CppBase() + 0x51B77EC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBChipData*, bool))(Il2CppBase() + 0x51B77F4))(this, createIfMissing);
	}

};

}
