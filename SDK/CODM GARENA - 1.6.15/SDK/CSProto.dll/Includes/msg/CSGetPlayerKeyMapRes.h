#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetPlayerKeyMapRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetPlayerKeyMapRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _mappings() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _setting_game_mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetPlayerKeyMapRes*))(Il2CppBase() + 0x52179FC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetPlayerKeyMapRes*, int32_t))(Il2CppBase() + 0x5217A04))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_mappings() {
		return ((T (*)(CSGetPlayerKeyMapRes*))(Il2CppBase() + 0x5217A0C))(this);
	}
	template <typename T = uint32_t> T get_setting_game_mode() {
		return ((T (*)(CSGetPlayerKeyMapRes*))(Il2CppBase() + 0x5217A14))(this);
	}
	template <typename T = void> T set_setting_game_mode(uint32_t value) {
		return ((T (*)(CSGetPlayerKeyMapRes*, uint32_t))(Il2CppBase() + 0x5217A1C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetPlayerKeyMapRes*, bool))(Il2CppBase() + 0x5217A24))(this, createIfMissing);
	}

};

}
