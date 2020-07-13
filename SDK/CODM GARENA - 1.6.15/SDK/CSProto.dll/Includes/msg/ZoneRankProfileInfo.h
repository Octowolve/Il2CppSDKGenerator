#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ZoneRankProfileInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ZoneRankProfileInfo"));
	}

	template <typename T = int32_t> T& _rank_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _rank() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_rank_id() {
		return ((T (*)(ZoneRankProfileInfo*))(Il2CppBase() + 0x51AB630))(this);
	}
	template <typename T = void> T set_rank_id(int32_t value) {
		return ((T (*)(ZoneRankProfileInfo*, int32_t))(Il2CppBase() + 0x51AB638))(this, value);
	}
	template <typename T = int32_t> T get_rank() {
		return ((T (*)(ZoneRankProfileInfo*))(Il2CppBase() + 0x51AB640))(this);
	}
	template <typename T = void> T set_rank(int32_t value) {
		return ((T (*)(ZoneRankProfileInfo*, int32_t))(Il2CppBase() + 0x51AB648))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ZoneRankProfileInfo*, bool))(Il2CppBase() + 0x51AB650))(this, createIfMissing);
	}

};

}
