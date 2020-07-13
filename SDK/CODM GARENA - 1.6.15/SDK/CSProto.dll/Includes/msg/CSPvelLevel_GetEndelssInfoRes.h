#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPvelLevelGetEndelssInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPvelLevel_GetEndelssInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _levels() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSPvelLevelGetEndelssInfoRes*))(Il2CppBase() + 0x51DFE8C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSPvelLevelGetEndelssInfoRes*, int32_t))(Il2CppBase() + 0x51DFE94))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_levels() {
		return ((T (*)(CSPvelLevelGetEndelssInfoRes*))(Il2CppBase() + 0x51DFE9C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPvelLevelGetEndelssInfoRes*, bool))(Il2CppBase() + 0x51DFEA4))(this, createIfMissing);
	}

};

}
