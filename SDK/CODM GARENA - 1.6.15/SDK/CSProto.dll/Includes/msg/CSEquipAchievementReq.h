#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSEquipAchievementReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSEquipAchievementReq"));
	}

	template <typename T = int32_t> T& _ach_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_ach_id() {
		return ((T (*)(CSEquipAchievementReq*))(Il2CppBase() + 0x51D177C))(this);
	}
	template <typename T = void> T set_ach_id(int32_t value) {
		return ((T (*)(CSEquipAchievementReq*, int32_t))(Il2CppBase() + 0x51D1784))(this, value);
	}
	template <typename T = int32_t> T get_index() {
		return ((T (*)(CSEquipAchievementReq*))(Il2CppBase() + 0x51D178C))(this);
	}
	template <typename T = void> T set_index(int32_t value) {
		return ((T (*)(CSEquipAchievementReq*, int32_t))(Il2CppBase() + 0x51D1794))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSEquipAchievementReq*, bool))(Il2CppBase() + 0x51D179C))(this, createIfMissing);
	}

};

}
