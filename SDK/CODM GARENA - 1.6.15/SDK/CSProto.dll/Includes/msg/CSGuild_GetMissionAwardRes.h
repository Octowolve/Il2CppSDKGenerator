#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGetMissionAwardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GetMissionAwardRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _member_data() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGuildGetMissionAwardRes*))(Il2CppBase() + 0x51DB454))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGuildGetMissionAwardRes*, uint32_t))(Il2CppBase() + 0x51DB45C))(this, value);
	}
	template <typename T = uintptr_t> T get_member_data() {
		return ((T (*)(CSGuildGetMissionAwardRes*))(Il2CppBase() + 0x51DB464))(this);
	}
	template <typename T = void> T set_member_data(uintptr_t value) {
		return ((T (*)(CSGuildGetMissionAwardRes*, uintptr_t))(Il2CppBase() + 0x51DB46C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSGuildGetMissionAwardRes*))(Il2CppBase() + 0x51DB474))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGetMissionAwardRes*, bool))(Il2CppBase() + 0x51DB47C))(this, createIfMissing);
	}

};

}
