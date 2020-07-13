#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetAllComradeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetAllComradeRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _comrade_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetAllComradeRes*))(Il2CppBase() + 0x5215C04))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetAllComradeRes*, int32_t))(Il2CppBase() + 0x5215C0C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_comrade_list() {
		return ((T (*)(CSGetAllComradeRes*))(Il2CppBase() + 0x5215C14))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetAllComradeRes*, bool))(Il2CppBase() + 0x5215C1C))(this, createIfMissing);
	}

};

}
