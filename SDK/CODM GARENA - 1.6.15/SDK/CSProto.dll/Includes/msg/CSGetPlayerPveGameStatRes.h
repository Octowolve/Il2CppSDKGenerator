#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetPlayerPveGameStatRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetPlayerPveGameStatRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pve_player_gamestat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetPlayerPveGameStatRes*))(Il2CppBase() + 0x5217B18))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetPlayerPveGameStatRes*, int32_t))(Il2CppBase() + 0x5217B20))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pve_player_gamestat() {
		return ((T (*)(CSGetPlayerPveGameStatRes*))(Il2CppBase() + 0x5217B28))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetPlayerPveGameStatRes*, bool))(Il2CppBase() + 0x5217B30))(this, createIfMissing);
	}

};

}
