#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAttendAwardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAttendAwardReq"));
	}

	template <typename T = uint32_t> T& _attend_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_attend_type() {
		return ((T (*)(CSAttendAwardReq*))(Il2CppBase() + 0x51E481C))(this);
	}
	template <typename T = void> T set_attend_type(uint32_t value) {
		return ((T (*)(CSAttendAwardReq*, uint32_t))(Il2CppBase() + 0x51E4824))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAttendAwardReq*, bool))(Il2CppBase() + 0x51E482C))(this, createIfMissing);
	}

};

}
