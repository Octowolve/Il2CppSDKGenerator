#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetPlayerGameStatRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetPlayerGameStatRes"));
	}

	template <typename T = uintptr_t> T& _game_stat_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_game_stat_info() {
		return ((T (*)(CSGetPlayerGameStatRes*))(Il2CppBase() + 0x52178F0))(this);
	}
	template <typename T = void> T set_game_stat_info(uintptr_t value) {
		return ((T (*)(CSGetPlayerGameStatRes*, uintptr_t))(Il2CppBase() + 0x52178F8))(this, value);
	}
	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetPlayerGameStatRes*))(Il2CppBase() + 0x5217900))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetPlayerGameStatRes*, int32_t))(Il2CppBase() + 0x5217908))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetPlayerGameStatRes*, bool))(Il2CppBase() + 0x5217910))(this, createIfMissing);
	}

};

}
