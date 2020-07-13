#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetPlayerKeyMapReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetPlayerKeyMapReq"));
	}

	template <typename T = uint32_t> T& _setting_game_mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_setting_game_mode() {
		return ((T (*)(CSGetPlayerKeyMapReq*))(Il2CppBase() + 0x521792C))(this);
	}
	template <typename T = void> T set_setting_game_mode(uint32_t value) {
		return ((T (*)(CSGetPlayerKeyMapReq*, uint32_t))(Il2CppBase() + 0x5217934))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetPlayerKeyMapReq*, bool))(Il2CppBase() + 0x521793C))(this, createIfMissing);
	}

};

}
