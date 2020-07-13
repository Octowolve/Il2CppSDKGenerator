#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomMicStatNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomMicStatNtf"));
	}

	template <typename T = uintptr_t> T& _report_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _need_open_mic() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_report_info() {
		return ((T (*)(CSGroupRoomMicStatNtf*))(Il2CppBase() + 0x51DEE28))(this);
	}
	template <typename T = void> T set_report_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomMicStatNtf*, uintptr_t))(Il2CppBase() + 0x51DEE30))(this, value);
	}
	template <typename T = bool> T get_need_open_mic() {
		return ((T (*)(CSGroupRoomMicStatNtf*))(Il2CppBase() + 0x51DEE38))(this);
	}
	template <typename T = void> T set_need_open_mic(bool value) {
		return ((T (*)(CSGroupRoomMicStatNtf*, bool))(Il2CppBase() + 0x51DEE40))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomMicStatNtf*, bool))(Il2CppBase() + 0x51DEE48))(this, createIfMissing);
	}

};

}
