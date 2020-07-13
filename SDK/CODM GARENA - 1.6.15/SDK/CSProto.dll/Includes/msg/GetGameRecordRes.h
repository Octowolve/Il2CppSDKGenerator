#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GetGameRecordRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GetGameRecordRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _history_game_stat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(GetGameRecordRes*))(Il2CppBase() + 0x50CD874))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(GetGameRecordRes*, uint32_t))(Il2CppBase() + 0x50CD87C))(this, value);
	}
	template <typename T = uintptr_t> T get_history_game_stat() {
		return ((T (*)(GetGameRecordRes*))(Il2CppBase() + 0x50CD884))(this);
	}
	template <typename T = void> T set_history_game_stat(uintptr_t value) {
		return ((T (*)(GetGameRecordRes*, uintptr_t))(Il2CppBase() + 0x50CD88C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GetGameRecordRes*, bool))(Il2CppBase() + 0x50CD894))(this, createIfMissing);
	}

};

}
