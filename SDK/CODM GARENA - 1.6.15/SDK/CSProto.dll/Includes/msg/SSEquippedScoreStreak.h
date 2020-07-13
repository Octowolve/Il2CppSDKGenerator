#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SSEquippedScoreStreak
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SSEquippedScoreStreak"));
	}

	template <typename T = uint64_t> T& _guid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _score() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_guid() {
		return ((T (*)(SSEquippedScoreStreak*))(Il2CppBase() + 0x51A9420))(this);
	}
	template <typename T = void> T set_guid(uint64_t value) {
		return ((T (*)(SSEquippedScoreStreak*, uint64_t))(Il2CppBase() + 0x51A9428))(this, value);
	}
	template <typename T = uint32_t> T get_id() {
		return ((T (*)(SSEquippedScoreStreak*))(Il2CppBase() + 0x51A9438))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(SSEquippedScoreStreak*, uint32_t))(Il2CppBase() + 0x51A9440))(this, value);
	}
	template <typename T = int32_t> T get_score() {
		return ((T (*)(SSEquippedScoreStreak*))(Il2CppBase() + 0x51A9448))(this);
	}
	template <typename T = void> T set_score(int32_t value) {
		return ((T (*)(SSEquippedScoreStreak*, int32_t))(Il2CppBase() + 0x51A9450))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SSEquippedScoreStreak*, bool))(Il2CppBase() + 0x51A9458))(this, createIfMissing);
	}

};

}
