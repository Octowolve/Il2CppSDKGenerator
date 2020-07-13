#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSSellItemReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSSellItemReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_items() {
		return ((T (*)(CSSellItemReq*))(Il2CppBase() + 0x51E1334))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSSellItemReq*, bool))(Il2CppBase() + 0x51E133C))(this, createIfMissing);
	}

};

}
