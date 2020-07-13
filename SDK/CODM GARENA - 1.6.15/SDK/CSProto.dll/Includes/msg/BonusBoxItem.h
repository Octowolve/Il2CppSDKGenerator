#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BonusBoxItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BonusBoxItem"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _item_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_item_list() {
		return ((T (*)(BonusBoxItem*))(Il2CppBase() + 0x510D488))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BonusBoxItem*, bool))(Il2CppBase() + 0x510D490))(this, createIfMissing);
	}

};

}
