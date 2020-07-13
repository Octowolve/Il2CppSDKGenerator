#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSShopReddotNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSShopReddotNtf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _shop_data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_shop_data() {
		return ((T (*)(CSShopReddotNtf*))(Il2CppBase() + 0x51E27FC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSShopReddotNtf*, bool))(Il2CppBase() + 0x51E2804))(this, createIfMissing);
	}

};

}
