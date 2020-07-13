#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetPlayerSimpleInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetPlayerSimpleInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _player_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetPlayerSimpleInfoRes*))(Il2CppBase() + 0x5217B80))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetPlayerSimpleInfoRes*, int32_t))(Il2CppBase() + 0x5217B88))(this, value);
	}
	template <typename T = uintptr_t> T get_player_info() {
		return ((T (*)(CSGetPlayerSimpleInfoRes*))(Il2CppBase() + 0x5217B90))(this);
	}
	template <typename T = void> T set_player_info(uintptr_t value) {
		return ((T (*)(CSGetPlayerSimpleInfoRes*, uintptr_t))(Il2CppBase() + 0x5217B98))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetPlayerSimpleInfoRes*, bool))(Il2CppBase() + 0x5217BA0))(this, createIfMissing);
	}

};

}
