#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSWchatNodeHbReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSWchatNodeHbReq"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _secret() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_secret() {
		return ((T (*)(CSWchatNodeHbReq*))(Il2CppBase() + 0x51B6970))(this);
	}
	template <typename T = void> T set_secret(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSWchatNodeHbReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51B6978))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSWchatNodeHbReq*, bool))(Il2CppBase() + 0x51B6980))(this, createIfMissing);
	}

};

}
