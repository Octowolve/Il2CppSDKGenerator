#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLadderMatchGetOpeningHoursReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLadderMatchGetOpeningHoursReq"));
	}

	template <typename T = int32_t> T& _match_module() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_match_module() {
		return ((T (*)(CSLadderMatchGetOpeningHoursReq*))(Il2CppBase() + 0x5139834))(this);
	}
	template <typename T = void> T set_match_module(int32_t value) {
		return ((T (*)(CSLadderMatchGetOpeningHoursReq*, int32_t))(Il2CppBase() + 0x513983C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLadderMatchGetOpeningHoursReq*, bool))(Il2CppBase() + 0x5139844))(this, createIfMissing);
	}

};

}
