#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountextGetLadderPercentRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountextGetLadderPercentRes"));
	}

	template <typename T = float> T& _mp_percent() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& _br_percent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = float> T get_mp_percent() {
		return ((T (*)(CSAccountextGetLadderPercentRes*))(Il2CppBase() + 0x516FCEC))(this);
	}
	template <typename T = void> T set_mp_percent(float value) {
		return ((T (*)(CSAccountextGetLadderPercentRes*, float))(Il2CppBase() + 0x516FCF4))(this, value);
	}
	template <typename T = float> T get_br_percent() {
		return ((T (*)(CSAccountextGetLadderPercentRes*))(Il2CppBase() + 0x516FCFC))(this);
	}
	template <typename T = void> T set_br_percent(float value) {
		return ((T (*)(CSAccountextGetLadderPercentRes*, float))(Il2CppBase() + 0x516FD04))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountextGetLadderPercentRes*, bool))(Il2CppBase() + 0x516FD0C))(this, createIfMissing);
	}

};

}
