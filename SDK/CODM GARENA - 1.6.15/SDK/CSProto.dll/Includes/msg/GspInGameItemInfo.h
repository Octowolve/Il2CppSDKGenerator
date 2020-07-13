#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspInGameItemInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspInGameItemInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _details() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_check() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_details() {
		return ((T (*)(GspInGameItemInfo*))(Il2CppBase() + 0x50CEDE4))(this);
	}
	template <typename T = bool> T get_is_check() {
		return ((T (*)(GspInGameItemInfo*))(Il2CppBase() + 0x50CEDEC))(this);
	}
	template <typename T = void> T set_is_check(bool value) {
		return ((T (*)(GspInGameItemInfo*, bool))(Il2CppBase() + 0x50CEDF4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspInGameItemInfo*, bool))(Il2CppBase() + 0x50CEDFC))(this, createIfMissing);
	}

};

}
