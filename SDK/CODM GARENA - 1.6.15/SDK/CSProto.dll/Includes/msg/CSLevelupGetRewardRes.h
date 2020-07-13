#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLevelupGetRewardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLevelupGetRewardRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLevelupGetRewardRes*))(Il2CppBase() + 0x5139AAC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLevelupGetRewardRes*, int32_t))(Il2CppBase() + 0x5139AB4))(this, value);
	}
	template <typename T = uint32_t> T get_id() {
		return ((T (*)(CSLevelupGetRewardRes*))(Il2CppBase() + 0x5139ABC))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(CSLevelupGetRewardRes*, uint32_t))(Il2CppBase() + 0x5139AC4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop() {
		return ((T (*)(CSLevelupGetRewardRes*))(Il2CppBase() + 0x5139ACC))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSLevelupGetRewardRes*))(Il2CppBase() + 0x5139AD4))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSLevelupGetRewardRes*, bool))(Il2CppBase() + 0x5139ADC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLevelupGetRewardRes*, bool))(Il2CppBase() + 0x5139AE4))(this, createIfMissing);
	}

};

}
