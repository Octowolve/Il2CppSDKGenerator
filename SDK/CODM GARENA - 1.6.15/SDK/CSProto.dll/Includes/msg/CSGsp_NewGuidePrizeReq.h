#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspNewGuidePrizeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_NewGuidePrizeReq"));
	}

	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSGspNewGuidePrizeReq*))(Il2CppBase() + 0x51D9DC4))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSGspNewGuidePrizeReq*, uint32_t))(Il2CppBase() + 0x51D9DCC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspNewGuidePrizeReq*, bool))(Il2CppBase() + 0x51D9DD4))(this, createIfMissing);
	}

};

}
