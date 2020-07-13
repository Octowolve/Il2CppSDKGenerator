#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSZoneRankGetReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSZoneRankGetReq"));
	}

	template <typename T = int32_t> T& _rank_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _page_index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_rank_id() {
		return ((T (*)(CSZoneRankGetReq*))(Il2CppBase() + 0x51B749C))(this);
	}
	template <typename T = void> T set_rank_id(int32_t value) {
		return ((T (*)(CSZoneRankGetReq*, int32_t))(Il2CppBase() + 0x51B74A4))(this, value);
	}
	template <typename T = int32_t> T get_page_index() {
		return ((T (*)(CSZoneRankGetReq*))(Il2CppBase() + 0x51B74AC))(this);
	}
	template <typename T = void> T set_page_index(int32_t value) {
		return ((T (*)(CSZoneRankGetReq*, int32_t))(Il2CppBase() + 0x51B74B4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSZoneRankGetReq*, bool))(Il2CppBase() + 0x51B74BC))(this, createIfMissing);
	}

};

}
