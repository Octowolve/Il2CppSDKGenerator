#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryDeleteItemsNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryDeleteItemsNtf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _delete_items() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_delete_items() {
		return ((T (*)(CSInventoryDeleteItemsNtf*))(Il2CppBase() + 0x5137AB4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryDeleteItemsNtf*, bool))(Il2CppBase() + 0x5137ABC))(this, createIfMissing);
	}

};

}
