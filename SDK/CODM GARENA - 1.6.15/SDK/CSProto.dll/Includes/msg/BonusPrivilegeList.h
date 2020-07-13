#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BonusPrivilegeList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BonusPrivilegeList"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _server_systime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_list() {
		return ((T (*)(BonusPrivilegeList*))(Il2CppBase() + 0x510D5AC))(this);
	}
	template <typename T = int32_t> T get_server_systime() {
		return ((T (*)(BonusPrivilegeList*))(Il2CppBase() + 0x510D5B4))(this);
	}
	template <typename T = void> T set_server_systime(int32_t value) {
		return ((T (*)(BonusPrivilegeList*, int32_t))(Il2CppBase() + 0x510D5BC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BonusPrivilegeList*, bool))(Il2CppBase() + 0x510D5C4))(this, createIfMissing);
	}

};

}
