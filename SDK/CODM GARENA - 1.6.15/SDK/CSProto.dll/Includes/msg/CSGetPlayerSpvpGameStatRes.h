#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetPlayerSpvpGameStatRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetPlayerSpvpGameStatRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _spvp_player_gamestat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetPlayerSpvpGameStatRes*))(Il2CppBase() + 0x5217C94))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetPlayerSpvpGameStatRes*, int32_t))(Il2CppBase() + 0x5217C9C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_spvp_player_gamestat() {
		return ((T (*)(CSGetPlayerSpvpGameStatRes*))(Il2CppBase() + 0x5217CA4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetPlayerSpvpGameStatRes*, bool))(Il2CppBase() + 0x5217CAC))(this, createIfMissing);
	}

};

}
