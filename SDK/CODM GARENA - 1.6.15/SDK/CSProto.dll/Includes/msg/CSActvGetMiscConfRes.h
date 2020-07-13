#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvGetMiscConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvGetMiscConfRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _match_jump() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSActvGetMiscConfRes*))(Il2CppBase() + 0x51E3A88))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSActvGetMiscConfRes*, int32_t))(Il2CppBase() + 0x51E3A90))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_match_jump() {
		return ((T (*)(CSActvGetMiscConfRes*))(Il2CppBase() + 0x51E3A98))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvGetMiscConfRes*, bool))(Il2CppBase() + 0x51E3AA0))(this, createIfMissing);
	}

};

}
