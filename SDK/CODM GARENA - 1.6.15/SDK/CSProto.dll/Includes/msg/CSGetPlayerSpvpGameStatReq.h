#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetPlayerSpvpGameStatReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetPlayerSpvpGameStatReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGetPlayerSpvpGameStatReq*))(Il2CppBase() + 0x5217BBC))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGetPlayerSpvpGameStatReq*, uint64_t))(Il2CppBase() + 0x5217BC4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetPlayerSpvpGameStatReq*, bool))(Il2CppBase() + 0x5217BD4))(this, createIfMissing);
	}

};

}
