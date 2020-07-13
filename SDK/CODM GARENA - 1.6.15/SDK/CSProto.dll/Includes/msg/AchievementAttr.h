#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AchievementAttr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AchievementAttr"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _finishedAchTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(AchievementAttr*))(Il2CppBase() + 0x510A9F8))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(AchievementAttr*, int32_t))(Il2CppBase() + 0x510AA00))(this, value);
	}
	template <typename T = int32_t> T get_value() {
		return ((T (*)(AchievementAttr*))(Il2CppBase() + 0x510AA08))(this);
	}
	template <typename T = void> T set_value(int32_t value) {
		return ((T (*)(AchievementAttr*, int32_t))(Il2CppBase() + 0x510AA10))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_finishedAchTime() {
		return ((T (*)(AchievementAttr*))(Il2CppBase() + 0x510AA18))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AchievementAttr*, bool))(Il2CppBase() + 0x510AA20))(this, createIfMissing);
	}

};

}
