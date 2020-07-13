#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInvnetoryUpdatePVELoadoutNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInvnetoryUpdatePVELoadoutNtf"));
	}

	template <typename T = uintptr_t> T& _pve_loadout() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_pve_loadout() {
		return ((T (*)(CSInvnetoryUpdatePVELoadoutNtf*))(Il2CppBase() + 0x51396F4))(this);
	}
	template <typename T = void> T set_pve_loadout(uintptr_t value) {
		return ((T (*)(CSInvnetoryUpdatePVELoadoutNtf*, uintptr_t))(Il2CppBase() + 0x51396FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInvnetoryUpdatePVELoadoutNtf*, bool))(Il2CppBase() + 0x5139704))(this, createIfMissing);
	}

};

}
