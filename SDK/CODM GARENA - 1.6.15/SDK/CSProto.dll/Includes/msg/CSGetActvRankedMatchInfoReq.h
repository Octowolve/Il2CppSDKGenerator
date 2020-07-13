#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetActvRankedMatchInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetActvRankedMatchInfoReq"));
	}

	template <typename T = int32_t> T& _mp_ladder_level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _br_ladder_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_mp_ladder_level() {
		return ((T (*)(CSGetActvRankedMatchInfoReq*))(Il2CppBase() + 0x51D24B4))(this);
	}
	template <typename T = void> T set_mp_ladder_level(int32_t value) {
		return ((T (*)(CSGetActvRankedMatchInfoReq*, int32_t))(Il2CppBase() + 0x51D24BC))(this, value);
	}
	template <typename T = int32_t> T get_br_ladder_level() {
		return ((T (*)(CSGetActvRankedMatchInfoReq*))(Il2CppBase() + 0x51D24C4))(this);
	}
	template <typename T = void> T set_br_ladder_level(int32_t value) {
		return ((T (*)(CSGetActvRankedMatchInfoReq*, int32_t))(Il2CppBase() + 0x51D24CC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetActvRankedMatchInfoReq*, bool))(Il2CppBase() + 0x51D24D4))(this, createIfMissing);
	}

};

}
