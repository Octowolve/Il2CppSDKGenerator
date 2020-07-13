#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvGetDescReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvGetDescReq"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _cookie() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_cookie() {
		return ((T (*)(CSActvGetDescReq*))(Il2CppBase() + 0x51E3664))(this);
	}
	template <typename T = void> T set_cookie(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActvGetDescReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E366C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvGetDescReq*, bool))(Il2CppBase() + 0x51E3674))(this, createIfMissing);
	}

};

}
