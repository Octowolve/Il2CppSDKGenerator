#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSUnlockChangeNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSUnlockChangeNtf"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _unlock_items() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_unlock_items() {
		return ((T (*)(CSUnlockChangeNtf*))(Il2CppBase() + 0x51B65C4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSUnlockChangeNtf*, bool))(Il2CppBase() + 0x51B65CC))(this, createIfMissing);
	}

};

}
