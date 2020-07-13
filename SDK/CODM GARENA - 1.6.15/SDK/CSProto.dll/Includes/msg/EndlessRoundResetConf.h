#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class EndlessRoundResetConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "EndlessRoundResetConf"));
	}

	template <typename T = int32_t> T& _ResetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _LastWeekLower() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _LastWeekUpper() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _ResetRound() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_ResetID() {
		return ((T (*)(EndlessRoundResetConf*))(Il2CppBase() + 0x5226D08))(this);
	}
	template <typename T = void> T set_ResetID(int32_t value) {
		return ((T (*)(EndlessRoundResetConf*, int32_t))(Il2CppBase() + 0x5226D10))(this, value);
	}
	template <typename T = int32_t> T get_LastWeekLower() {
		return ((T (*)(EndlessRoundResetConf*))(Il2CppBase() + 0x5226D18))(this);
	}
	template <typename T = void> T set_LastWeekLower(int32_t value) {
		return ((T (*)(EndlessRoundResetConf*, int32_t))(Il2CppBase() + 0x5226D20))(this, value);
	}
	template <typename T = int32_t> T get_LastWeekUpper() {
		return ((T (*)(EndlessRoundResetConf*))(Il2CppBase() + 0x5226D28))(this);
	}
	template <typename T = void> T set_LastWeekUpper(int32_t value) {
		return ((T (*)(EndlessRoundResetConf*, int32_t))(Il2CppBase() + 0x5226D30))(this, value);
	}
	template <typename T = int32_t> T get_ResetRound() {
		return ((T (*)(EndlessRoundResetConf*))(Il2CppBase() + 0x5226D38))(this);
	}
	template <typename T = void> T set_ResetRound(int32_t value) {
		return ((T (*)(EndlessRoundResetConf*, int32_t))(Il2CppBase() + 0x5226D40))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(EndlessRoundResetConf*, bool))(Il2CppBase() + 0x5226D48))(this, createIfMissing);
	}

};

}
