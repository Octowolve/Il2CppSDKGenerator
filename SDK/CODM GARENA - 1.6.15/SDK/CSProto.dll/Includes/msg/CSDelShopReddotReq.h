#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDelShopReddotReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDelShopReddotReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _shop_data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _need_resp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_shop_data() {
		return ((T (*)(CSDelShopReddotReq*))(Il2CppBase() + 0x51D0880))(this);
	}
	template <typename T = bool> T get_need_resp() {
		return ((T (*)(CSDelShopReddotReq*))(Il2CppBase() + 0x51D0888))(this);
	}
	template <typename T = void> T set_need_resp(bool value) {
		return ((T (*)(CSDelShopReddotReq*, bool))(Il2CppBase() + 0x51D0890))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDelShopReddotReq*, bool))(Il2CppBase() + 0x51D0898))(this, createIfMissing);
	}

};

}
