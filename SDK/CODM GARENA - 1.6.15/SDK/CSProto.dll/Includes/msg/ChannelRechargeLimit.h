#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ChannelRechargeLimit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ChannelRechargeLimit"));
	}

	template <typename T = Il2CppString*> T& _ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _SpecialItemId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _SpecialItemNum() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T get_ID() {
		return ((T (*)(ChannelRechargeLimit*))(Il2CppBase() + 0x516E444))(this);
	}
	template <typename T = void> T set_ID(Il2CppString* value) {
		return ((T (*)(ChannelRechargeLimit*, Il2CppString*))(Il2CppBase() + 0x516E44C))(this, value);
	}
	template <typename T = uint32_t> T get_SpecialItemId() {
		return ((T (*)(ChannelRechargeLimit*))(Il2CppBase() + 0x516E454))(this);
	}
	template <typename T = void> T set_SpecialItemId(uint32_t value) {
		return ((T (*)(ChannelRechargeLimit*, uint32_t))(Il2CppBase() + 0x516E45C))(this, value);
	}
	template <typename T = uint32_t> T get_SpecialItemNum() {
		return ((T (*)(ChannelRechargeLimit*))(Il2CppBase() + 0x516E464))(this);
	}
	template <typename T = void> T set_SpecialItemNum(uint32_t value) {
		return ((T (*)(ChannelRechargeLimit*, uint32_t))(Il2CppBase() + 0x516E46C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ChannelRechargeLimit*, bool))(Il2CppBase() + 0x516E474))(this, createIfMissing);
	}

};

}
