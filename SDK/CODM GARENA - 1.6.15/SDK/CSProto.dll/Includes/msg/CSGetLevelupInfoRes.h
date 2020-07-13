#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetLevelupInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetLevelupInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _unlock_level_task() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetLevelupInfoRes*))(Il2CppBase() + 0x5216F2C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetLevelupInfoRes*, int32_t))(Il2CppBase() + 0x5216F34))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_unlock_level_task() {
		return ((T (*)(CSGetLevelupInfoRes*))(Il2CppBase() + 0x5216F3C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetLevelupInfoRes*, bool))(Il2CppBase() + 0x5216F44))(this, createIfMissing);
	}

};

}
