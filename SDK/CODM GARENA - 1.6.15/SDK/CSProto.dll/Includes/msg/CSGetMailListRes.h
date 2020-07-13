#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetMailListRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetMailListRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _mail_lists() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetMailListRes*))(Il2CppBase() + 0x5217348))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetMailListRes*, int32_t))(Il2CppBase() + 0x5217350))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_mail_lists() {
		return ((T (*)(CSGetMailListRes*))(Il2CppBase() + 0x5217358))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetMailListRes*, bool))(Il2CppBase() + 0x5217360))(this, createIfMissing);
	}

};

}
