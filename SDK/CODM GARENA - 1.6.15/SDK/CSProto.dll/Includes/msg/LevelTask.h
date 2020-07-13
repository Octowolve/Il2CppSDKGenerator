#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LevelTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LevelTask"));
	}

	template <typename T = int32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _task_item() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_level() {
		return ((T (*)(LevelTask*))(Il2CppBase() + 0x4EA27E4))(this);
	}
	template <typename T = void> T set_level(int32_t value) {
		return ((T (*)(LevelTask*, int32_t))(Il2CppBase() + 0x4EA27EC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_task_item() {
		return ((T (*)(LevelTask*))(Il2CppBase() + 0x4EA27F4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LevelTask*, bool))(Il2CppBase() + 0x4EA27FC))(this, createIfMissing);
	}

};

}
