#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DBEquippedScoreStreak
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DBEquippedScoreStreak"));
	}

	template <typename T = uint64_t> T& _GUID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_GUID() {
		return ((T (*)(DBEquippedScoreStreak*))(Il2CppBase() + 0x51B7C48))(this);
	}
	template <typename T = void> T set_GUID(uint64_t value) {
		return ((T (*)(DBEquippedScoreStreak*, uint64_t))(Il2CppBase() + 0x51B7C50))(this, value);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(DBEquippedScoreStreak*))(Il2CppBase() + 0x51B7C60))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(DBEquippedScoreStreak*, uint32_t))(Il2CppBase() + 0x51B7C68))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DBEquippedScoreStreak*, bool))(Il2CppBase() + 0x51B7C70))(this, createIfMissing);
	}

};

}
