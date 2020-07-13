#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvGetExpBufReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvGetExpBufReq"));
	}

	template <typename T = int32_t> T& _language_code() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_language_code() {
		return ((T (*)(CSActvGetExpBufReq*))(Il2CppBase() + 0x51E38A4))(this);
	}
	template <typename T = void> T set_language_code(int32_t value) {
		return ((T (*)(CSActvGetExpBufReq*, int32_t))(Il2CppBase() + 0x51E38AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvGetExpBufReq*, bool))(Il2CppBase() + 0x51E38B4))(this, createIfMissing);
	}

};

}
