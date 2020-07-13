#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildMissionAward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuildMissionAward"));
	}

	template <typename T = uint64_t> T& _condition_value() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_condition_value() {
		return ((T (*)(CSGuildMissionAward*))(Il2CppBase() + 0x51DC454))(this);
	}
	template <typename T = void> T set_condition_value(uint64_t value) {
		return ((T (*)(CSGuildMissionAward*, uint64_t))(Il2CppBase() + 0x51DC45C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop() {
		return ((T (*)(CSGuildMissionAward*))(Il2CppBase() + 0x51DC46C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildMissionAward*, bool))(Il2CppBase() + 0x51DC474))(this, createIfMissing);
	}

};

}
