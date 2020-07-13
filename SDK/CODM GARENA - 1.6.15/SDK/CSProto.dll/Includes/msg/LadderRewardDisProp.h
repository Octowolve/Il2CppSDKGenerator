#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LadderRewardDisProp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LadderRewardDisProp"));
	}

	template <typename T = uint64_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _duration_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _ladder_score() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_id() {
		return ((T (*)(LadderRewardDisProp*))(Il2CppBase() + 0x50D0DE4))(this);
	}
	template <typename T = void> T set_id(uint64_t value) {
		return ((T (*)(LadderRewardDisProp*, uint64_t))(Il2CppBase() + 0x50D0DEC))(this, value);
	}
	template <typename T = uint32_t> T get_num() {
		return ((T (*)(LadderRewardDisProp*))(Il2CppBase() + 0x50D0DFC))(this);
	}
	template <typename T = void> T set_num(uint32_t value) {
		return ((T (*)(LadderRewardDisProp*, uint32_t))(Il2CppBase() + 0x50D0E04))(this, value);
	}
	template <typename T = uint32_t> T get_duration_time() {
		return ((T (*)(LadderRewardDisProp*))(Il2CppBase() + 0x50D0E0C))(this);
	}
	template <typename T = void> T set_duration_time(uint32_t value) {
		return ((T (*)(LadderRewardDisProp*, uint32_t))(Il2CppBase() + 0x50D0E14))(this, value);
	}
	template <typename T = uint32_t> T get_ladder_score() {
		return ((T (*)(LadderRewardDisProp*))(Il2CppBase() + 0x50D0E1C))(this);
	}
	template <typename T = void> T set_ladder_score(uint32_t value) {
		return ((T (*)(LadderRewardDisProp*, uint32_t))(Il2CppBase() + 0x50D0E24))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LadderRewardDisProp*, bool))(Il2CppBase() + 0x50D0E2C))(this, createIfMissing);
	}

};

}
