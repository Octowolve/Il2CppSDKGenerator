#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspRankedMatchEffectedRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspRankedMatchEffectedRecord"));
	}

	template <typename T = uint32_t> T& _last_renew_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _last_mp_ladder_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _last_br_ladder_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _count_infos() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_last_renew_time() {
		return ((T (*)(GspRankedMatchEffectedRecord*))(Il2CppBase() + 0x50CEF18))(this);
	}
	template <typename T = void> T set_last_renew_time(uint32_t value) {
		return ((T (*)(GspRankedMatchEffectedRecord*, uint32_t))(Il2CppBase() + 0x50CEF20))(this, value);
	}
	template <typename T = int32_t> T get_last_mp_ladder_level() {
		return ((T (*)(GspRankedMatchEffectedRecord*))(Il2CppBase() + 0x50CEF28))(this);
	}
	template <typename T = void> T set_last_mp_ladder_level(int32_t value) {
		return ((T (*)(GspRankedMatchEffectedRecord*, int32_t))(Il2CppBase() + 0x50CEF30))(this, value);
	}
	template <typename T = int32_t> T get_last_br_ladder_level() {
		return ((T (*)(GspRankedMatchEffectedRecord*))(Il2CppBase() + 0x50CEF38))(this);
	}
	template <typename T = void> T set_last_br_ladder_level(int32_t value) {
		return ((T (*)(GspRankedMatchEffectedRecord*, int32_t))(Il2CppBase() + 0x50CEF40))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_count_infos() {
		return ((T (*)(GspRankedMatchEffectedRecord*))(Il2CppBase() + 0x50CEF48))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspRankedMatchEffectedRecord*, bool))(Il2CppBase() + 0x50CEF50))(this, createIfMissing);
	}

};

}
