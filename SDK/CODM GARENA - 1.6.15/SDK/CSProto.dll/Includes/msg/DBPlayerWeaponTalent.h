#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBPlayerWeaponTalent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBPlayerWeaponTalent"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _TalentData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_TalentData() {
		return ((T (*)(DBPlayerWeaponTalent*))(Il2CppBase() + 0x51B9398))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBPlayerWeaponTalent*, bool))(Il2CppBase() + 0x51B93A0))(this, createIfMissing);
	}

};

}
