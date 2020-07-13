#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountSetGameNickRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountSetGameNick_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _data_change() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAccountSetGameNickRes*))(Il2CppBase() + 0x517076C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAccountSetGameNickRes*, int32_t))(Il2CppBase() + 0x5170774))(this, value);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSAccountSetGameNickRes*))(Il2CppBase() + 0x517077C))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSAccountSetGameNickRes*, uintptr_t))(Il2CppBase() + 0x5170784))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountSetGameNickRes*, bool))(Il2CppBase() + 0x517078C))(this, createIfMissing);
	}

};

}
