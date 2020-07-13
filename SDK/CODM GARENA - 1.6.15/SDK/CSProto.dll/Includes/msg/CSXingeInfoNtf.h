#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSXingeInfoNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSXingeInfoNtf"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _xinge_device_token() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _xinge_account() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSXingeInfoNtf*))(Il2CppBase() + 0x51B7448))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSXingeInfoNtf*, uint64_t))(Il2CppBase() + 0x51B7450))(this, value);
	}
	template <typename T = Il2CppString*> T get_xinge_device_token() {
		return ((T (*)(CSXingeInfoNtf*))(Il2CppBase() + 0x51B7460))(this);
	}
	template <typename T = void> T set_xinge_device_token(Il2CppString* value) {
		return ((T (*)(CSXingeInfoNtf*, Il2CppString*))(Il2CppBase() + 0x51B7468))(this, value);
	}
	template <typename T = Il2CppString*> T get_xinge_account() {
		return ((T (*)(CSXingeInfoNtf*))(Il2CppBase() + 0x51B7470))(this);
	}
	template <typename T = void> T set_xinge_account(Il2CppString* value) {
		return ((T (*)(CSXingeInfoNtf*, Il2CppString*))(Il2CppBase() + 0x51B7478))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSXingeInfoNtf*, bool))(Il2CppBase() + 0x51B7480))(this, createIfMissing);
	}

};

}
