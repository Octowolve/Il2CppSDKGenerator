#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActivityTaskDescGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActivityTaskDescGroup"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _task_desc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_task_desc() {
		return ((T (*)(CSActivityTaskDescGroup*))(Il2CppBase() + 0x51714E4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActivityTaskDescGroup*, bool))(Il2CppBase() + 0x51714EC))(this, createIfMissing);
	}

};

}
