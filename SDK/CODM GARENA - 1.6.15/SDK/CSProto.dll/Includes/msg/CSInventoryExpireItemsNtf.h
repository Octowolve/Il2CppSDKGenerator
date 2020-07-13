#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryExpireItemsNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryExpireItemsNtf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _expire_items() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_expire_items() {
		return ((T (*)(CSInventoryExpireItemsNtf*))(Il2CppBase() + 0x5137B7C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryExpireItemsNtf*, bool))(Il2CppBase() + 0x5137B84))(this, createIfMissing);
	}

};

}
