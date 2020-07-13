#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvGetDyDataRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvGetDyDataRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _actv_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSActvGetDyDataRes*))(Il2CppBase() + 0x51E3870))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSActvGetDyDataRes*, int32_t))(Il2CppBase() + 0x51E3878))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_actv_info() {
		return ((T (*)(CSActvGetDyDataRes*))(Il2CppBase() + 0x51E3880))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvGetDyDataRes*, bool))(Il2CppBase() + 0x51E3888))(this, createIfMissing);
	}

};

}
