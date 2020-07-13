#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BattleRecommendInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BattleRecommendInfo"));
	}

	template <typename T = int32_t> T& _favor_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_favor_type() {
		return ((T (*)(BattleRecommendInfo*))(Il2CppBase() + 0x510D35C))(this);
	}
	template <typename T = void> T set_favor_type(int32_t value) {
		return ((T (*)(BattleRecommendInfo*, int32_t))(Il2CppBase() + 0x510D364))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BattleRecommendInfo*, bool))(Il2CppBase() + 0x510D36C))(this, createIfMissing);
	}

};

}
