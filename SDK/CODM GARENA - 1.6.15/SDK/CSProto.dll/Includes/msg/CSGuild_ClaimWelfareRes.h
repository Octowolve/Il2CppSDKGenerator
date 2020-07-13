#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildClaimWelfareRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_ClaimWelfareRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _receiver_number() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildClaimWelfareRes*))(Il2CppBase() + 0x51DA56C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildClaimWelfareRes*, int32_t))(Il2CppBase() + 0x51DA574))(this, value);
	}
	template <typename T = uint32_t> T get_id() {
		return ((T (*)(CSGuildClaimWelfareRes*))(Il2CppBase() + 0x51DA57C))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(CSGuildClaimWelfareRes*, uint32_t))(Il2CppBase() + 0x51DA584))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSGuildClaimWelfareRes*))(Il2CppBase() + 0x51DA58C))(this);
	}
	template <typename T = uint32_t> T get_receiver_number() {
		return ((T (*)(CSGuildClaimWelfareRes*))(Il2CppBase() + 0x51DA594))(this);
	}
	template <typename T = void> T set_receiver_number(uint32_t value) {
		return ((T (*)(CSGuildClaimWelfareRes*, uint32_t))(Il2CppBase() + 0x51DA59C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildClaimWelfareRes*, bool))(Il2CppBase() + 0x51DA5A4))(this, createIfMissing);
	}

};

}
