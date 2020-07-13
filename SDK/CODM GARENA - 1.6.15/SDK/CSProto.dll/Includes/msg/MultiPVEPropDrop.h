#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class MultiPVEPropDrop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "MultiPVEPropDrop"));
	}

	template <typename T = uint32_t> T& _monster_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_monster_id() {
		return ((T (*)(MultiPVEPropDrop*))(Il2CppBase() + 0x4EA56A4))(this);
	}
	template <typename T = void> T set_monster_id(uint32_t value) {
		return ((T (*)(MultiPVEPropDrop*, uint32_t))(Il2CppBase() + 0x4EA56AC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(MultiPVEPropDrop*))(Il2CppBase() + 0x4EA56B4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(MultiPVEPropDrop*, bool))(Il2CppBase() + 0x4EA56BC))(this, createIfMissing);
	}

};

}
