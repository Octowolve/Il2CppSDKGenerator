#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerAccountInfoArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerAccountInfoArray"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _player_account_infos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_player_account_infos() {
		return ((T (*)(PlayerAccountInfoArray*))(Il2CppBase() + 0x4EA6500))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerAccountInfoArray*, bool))(Il2CppBase() + 0x4EA6508))(this, createIfMissing);
	}

};

}
